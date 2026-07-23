/*
 * XREFs of sub_14054934C @ 0x14054934C
 * Callers:
 *     sub_1405486E0 @ 0x1405486E0 (sub_1405486E0.c)
 *     sub_140549558 @ 0x140549558 (sub_140549558.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 */

__int64 __fastcall sub_14054934C(int a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvlInvokeFastExtendedHypercall(v5, a2, 48 * a1, 0LL, 0);
  *a3 = WORD2(result) & 0xFFF;
  return result;
}
