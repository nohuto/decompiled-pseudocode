/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800800CC
 * Callers:
 *     LdrpHandleTlsData @ 0x180004568 (LdrpHandleTlsData.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x1800298BC (LdrpFindTlsEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, __int64 *a2)
{
  _UNKNOWN **TlsEntry; // rax
  __int64 v5; // rbx
  _UNKNOWN ***v6; // rcx
  _QWORD *v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a1);
  v5 = (__int64)TlsEntry;
  if ( TlsEntry )
  {
    v6 = (_UNKNOWN ***)*TlsEntry;
    if ( *((_UNKNOWN ***)*TlsEntry + 1) != TlsEntry || (v7 = TlsEntry[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (_UNKNOWN **)v7;
    *((_BYTE *)Src + ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 3)) &= ~(1 << (*(_DWORD *)(v5 + 64) & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(LdrpTlsHeap, 0, v5);
  return 0LL;
}
