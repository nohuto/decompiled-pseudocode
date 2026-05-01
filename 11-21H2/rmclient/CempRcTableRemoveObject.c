/*
 * XREFs of CempRcTableRemoveObject @ 0x18001554C
 * Callers:
 *     ?RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180013320 (-RmpProcContextEntryDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempRcTableRemoveObject(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  RtlRbRemoveNode(a1, a2);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 1LL | (2LL * (*(_QWORD *)(a1 + 40) >> 1) - 2);
  RtlReleaseSRWLockExclusive(a1 + 16);
  return RtlWakeAllConditionVariable(a1 + 32);
}
