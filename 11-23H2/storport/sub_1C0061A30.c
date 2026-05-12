/*
 * XREFs of sub_1C0061A30 @ 0x1C0061A30
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 */

bool __fastcall sub_1C0061A30(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // al
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_BYTE *)(v2 + 16);
  *(_QWORD *)(v2 + 16) = 0LL;
  v5 = v3 & 3;
  return sub_1C0008990(a1, 0, 0, &v5);
}
