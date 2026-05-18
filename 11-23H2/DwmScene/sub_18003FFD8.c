/*
 * XREFs of sub_18003FFD8 @ 0x18003FFD8
 * Callers:
 *     sub_18003F5D8 @ 0x18003F5D8 (sub_18003F5D8.c)
 *     sub_18003FF64 @ 0x18003FF64 (sub_18003FF64.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18003FFD8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010530(v2);
  return sub_180013348(a1);
}
