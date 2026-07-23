/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402A19D8
 * Callers:
 *     MiResolvePageTablePage @ 0x1402360F0 (MiResolvePageTablePage.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339F60 (MiEmptyDeferredWorkingSetEntries.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( a1[2] )
  {
    if ( *((_WORD *)a1 + 5) )
      MiEmptyDeferredWorkingSetEntries(a1);
    result = MiUnlockPageTableInternal(v1, a1[2]);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
