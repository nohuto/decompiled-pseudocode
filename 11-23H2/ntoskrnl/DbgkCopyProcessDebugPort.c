/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x1406BA2E0
 * Callers:
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8234 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x14093760C (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(ULONG_PTR BugCheckParameter1, __int64 a2, char *a3, char *a4)
{
  char v4; // di
  char *v6; // rbx
  __int64 v10; // rcx
  int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // rbp
  char v14; // bp
  _QWORD v15[14]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = 0;
  *(_QWORD *)(BugCheckParameter1 + 1400) = 0LL;
  v6 = a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 1400) )
      goto LABEL_3;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v6 = *(char **)(a2 + 1400);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 2) != 0 )
        v6 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1400));
    }
    ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
    if ( !v6 )
      goto LABEL_3;
  }
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  if ( !PsTestProtectedProcessIncompatibility(v10, a2, BugCheckParameter1) )
  {
    if ( (*((_DWORD *)v6 + 24) & 4) != 0 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 1408)
        || (v12 = *(_WORD *)(BugCheckParameter1 + 2412), v12 != 332) && v12 != 452 )
      {
        v11 = -1073741637;
        goto LABEL_20;
      }
    }
    v13 = *(_QWORD *)(BugCheckParameter1 + 992);
    if ( (v13 & 1) != 0 )
    {
      memset(v15, 0, 0x68uLL);
      v15[1] = v13;
      v15[2] = 1LL;
      v11 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v15);
      if ( v11 < 0 )
        goto LABEL_20;
    }
    v14 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v6 + 24));
    if ( (*((_DWORD *)v6 + 24) & 1) != 0 )
      v14 = 1;
    else
      *(_QWORD *)(BugCheckParameter1 + 1400) = v6;
    ExReleaseFastMutex((PFAST_MUTEX)(v6 + 24));
    if ( v14 )
    {
      ObfDereferenceObject(v6);
    }
    else
    {
      DbgkpMarkProcessPeb(BugCheckParameter1);
      v4 = 1;
    }
LABEL_3:
    *a4 = v4;
    return 0LL;
  }
  v11 = -1073740014;
LABEL_20:
  ObfDereferenceObject(v6);
  return (unsigned int)v11;
}
