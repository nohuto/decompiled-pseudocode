/*
 * XREFs of sub_18003FF64 @ 0x18003FF64
 * Callers:
 *     sub_18003F260 @ 0x18003F260 (sub_18003F260.c)
 *     sub_18003F644 @ 0x18003F644 (sub_18003F644.c)
 * Callees:
 *     sub_18003FFD8 @ 0x18003FFD8 (sub_18003FFD8.c)
 */

__int64 __fastcall sub_18003FF64(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18003FFD8(v2 + 32);
  return sub_18003FDD0(a1);
}
