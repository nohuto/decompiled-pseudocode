/*
 * XREFs of VfMiscMmAllocateContiguousMemoryEx_Entry @ 0x140AE01C0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscEnforceRule @ 0x140AE1548 (ViMiscEnforceRule.c)
 */

__int64 __fastcall VfMiscMmAllocateContiguousMemoryEx_Entry(_QWORD *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1[8] == 0LL;
  return ViMiscEnforceRule(a1, *a1, a3);
}
