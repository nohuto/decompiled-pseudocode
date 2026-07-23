/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140958278
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1405615C8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x1407AE160 (ExEnumHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned int *v8; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(v6);
    v10 = NextProcess;
    if ( !NextProcess )
      break;
    v8 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v8 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = v10;
      *(_QWORD *)&v13 = a2;
      *((_QWORD *)&v13 + 1) = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v8,
                              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))PnpHandleProcessWalkWorker,
                              (__int64)&v12,
                              0LL);
      ExReleaseRundownProtection_0(v10 + 139);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v3;
      }
    }
    v6 = v10;
  }
  return v3;
}
