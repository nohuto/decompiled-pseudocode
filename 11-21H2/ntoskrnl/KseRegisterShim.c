/*
 * XREFs of KseRegisterShim @ 0x140825A50
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 *     sub_140B003F8 @ 0x140B003F8 (sub_140B003F8.c)
 *     sub_140B01600 @ 0x140B01600 (sub_140B01600.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
