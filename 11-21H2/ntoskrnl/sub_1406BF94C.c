/*
 * XREFs of sub_1406BF94C @ 0x1406BF94C
 * Callers:
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_14028ECC8 @ 0x14028ECC8 (sub_14028ECC8.c)
 *     sub_1406BFC4C @ 0x1406BFC4C (sub_1406BFC4C.c)
 */

__int64 __fastcall sub_1406BF94C(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 result; // rax

  v3 = sub_14028ECC8(a2);
  result = sub_1406BFC4C(a1, v5, (~(v3 - 1) & (v3 + v4 - 1)) / v3, 4LL);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x8000u);
    return 0LL;
  }
  return result;
}
