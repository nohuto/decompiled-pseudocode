/*
 * XREFs of sub_14026ECFC @ 0x14026ECFC
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 */

__int64 __fastcall sub_14026ECFC(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r10

  v2 = sub_14033A410(a1, a2);
  LOBYTE(v4) = (16 * (v3 & 7)) | v2 & 0x8F;
  return sub_14026ED30(v5, v6, v4);
}
