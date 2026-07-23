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

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, unsigned int **a2)
{
  unsigned int *TlsEntry; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  unsigned int **v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (unsigned int *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *(_QWORD *)TlsEntry;
    if ( *(unsigned int **)(*(_QWORD *)TlsEntry + 8LL) != TlsEntry
      || (v7 = (unsigned int **)*((_QWORD *)TlsEntry + 1), *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = (unsigned int *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_BYTE *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v5[16] >> 3)) &= ~(1 << (v5[16] & 7));
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
