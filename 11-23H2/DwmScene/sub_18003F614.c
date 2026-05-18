/*
 * XREFs of sub_18003F614 @ 0x18003F614
 * Callers:
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 *     sub_1800DE810 @ 0x1800DE810 (sub_1800DE810.c)
 * Callees:
 *     sub_18003F0C8 @ 0x18003F0C8 (sub_18003F0C8.c)
 */

bool __fastcall sub_18003F614(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (unsigned __int8)sub_18003F0C8(a3, (_QWORD *)(a2 + 32)) == 0;
  return v3;
}
