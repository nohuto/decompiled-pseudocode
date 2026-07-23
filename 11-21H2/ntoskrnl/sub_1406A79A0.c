/*
 * XREFs of sub_1406A79A0 @ 0x1406A79A0
 * Callers:
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall sub_1406A79A0(__int64 a1, __int64 a2, int *a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v4; // eax
  __int64 v7; // rsi
  __int64 result; // rax
  char *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  char IsSandboxedToken; // al
  int v16; // ecx
  int v17; // ecx

  v4 = *(_DWORD *)(a1 + 336);
  v7 = 0LL;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x10) != 0 && (*a3 & 6) == 0 )
    {
      IsSandboxedToken = RtlIsSandboxedToken(a4 + 1);
      v16 = *a3;
      if ( IsSandboxedToken )
        v17 = v16 | 2;
      else
        v17 = v16 | 4;
      *a3 = v17;
    }
    if ( (*(_DWORD *)(a1 + 336) & 0x10) == 0 || (*a3 & 2) != 0 )
      return *(_QWORD *)(a1 + 312);
    return v7;
  }
  result = *(_QWORD *)(a1 + 304);
  if ( result )
  {
    if ( result == a2 )
      return *(_QWORD *)(a2 + 8);
    v9 = (char *)sub_140347DB0();
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v11 = (signed __int64 *)(v9 + 120);
    ExAcquirePushLockSharedEx((ULONG_PTR)v11, 0LL);
    v12 = *(_QWORD *)(a1 + 304);
    if ( v12 )
      v7 = *(_QWORD *)(v12 + 8);
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11);
    sub_1402AFC00((ULONG_PTR)v11);
    v13 = KeGetCurrentThread();
    v14 = (*((_WORD *)v13 + 243))++ == 0xFFFF;
    if ( !v14 || *((struct _KTHREAD **)v13 + 19) == (struct _KTHREAD *)((char *)v13 + 152) )
      return v7;
    KiCheckForKernelApcDelivery();
    return v7;
  }
  return result;
}
