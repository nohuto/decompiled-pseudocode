/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18008321C
 * Callers:
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8 (LdrpInsertModuleToIndexLockHeld.c)
 */

void __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
