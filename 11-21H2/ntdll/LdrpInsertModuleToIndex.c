/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18008321C
 * Callers:
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8 (LdrpInsertModuleToIndexLockHeld.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
