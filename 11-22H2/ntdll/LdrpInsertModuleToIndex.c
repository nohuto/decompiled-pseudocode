/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18007E92C
 * Callers:
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007E7C0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002D200 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2, v4);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
