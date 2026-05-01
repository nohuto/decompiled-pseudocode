/*
 * XREFs of sub_1800167C0 @ 0x1800167C0
 * Callers:
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800167C0(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  RtlRbRemoveNode(a1, a2);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 1LL | (2LL * (*(_QWORD *)(a1 + 40) >> 1) - 2);
  RtlReleaseSRWLockExclusive(a1 + 16);
  return RtlWakeAllConditionVariable(a1 + 32);
}
