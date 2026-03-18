/*
 * XREFs of MmIsSessionExecutionValid @ 0x1402DBFAC
 * Callers:
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402DC05C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402DC098 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int SessionId; // ebp
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  SessionId = MmGetSessionIdEx(a2);
  if ( SessionId == -1 )
    return 0LL;
  v6 = 1;
  if ( *(_BYTE *)(a1 + 586) == 1 && SessionId != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0
    || *(char *)(a1 + 1385) < 0
    || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
  {
    return 0LL;
  }
  if ( a3 )
  {
    MmLockLoadedModuleListShared(&v11);
    v7 = MiSessionLookupImage(a3);
    LOBYTE(v8) = v11;
    v9 = v7;
    MmUnlockLoadedModuleListShared(v8);
    return v9 != 0LL;
  }
  return v6;
}
