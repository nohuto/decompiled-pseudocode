/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18007EF9C
 * Callers:
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002D030 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2, v4);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
