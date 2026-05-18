/*
 * XREFs of sub_1800115C4 @ 0x1800115C4
 * Callers:
 *     unknown_libname_8 @ 0x1800FF0F9 (unknown_libname_8.c)
 *     sub_1800FF1F8 @ 0x1800FF1F8 (sub_1800FF1F8.c)
 *     sub_1800FF294 @ 0x1800FF294 (sub_1800FF294.c)
 *     sub_1800FF2A6 @ 0x1800FF2A6 (sub_1800FF2A6.c)
 *     sub_1800FF2CA @ 0x1800FF2CA (sub_1800FF2CA.c)
 *     sub_1800FF2DC @ 0x1800FF2DC (sub_1800FF2DC.c)
 *     sub_1800FF2EE @ 0x1800FF2EE (sub_1800FF2EE.c)
 *     sub_1800FF6FB @ 0x1800FF6FB (sub_1800FF6FB.c)
 *     unknown_libname_11 @ 0x1800FF70D (unknown_libname_11.c)
 *     sub_1800FF872 @ 0x1800FF872 (sub_1800FF872.c)
 *     sub_1800FF896 @ 0x1800FF896 (sub_1800FF896.c)
 *     sub_1800FF8A8 @ 0x1800FF8A8 (sub_1800FF8A8.c)
 *     sub_1800FFA29 @ 0x1800FFA29 (sub_1800FFA29.c)
 *     sub_1800FFB31 @ 0x1800FFB31 (sub_1800FFB31.c)
 *     sub_1800FFC12 @ 0x1800FFC12 (sub_1800FFC12.c)
 *     sub_1800FFC5A @ 0x1800FFC5A (sub_1800FFC5A.c)
 *     sub_180100484 @ 0x180100484 (sub_180100484.c)
 *     sub_180100ED5 @ 0x180100ED5 (sub_180100ED5.c)
 *     unknown_libname_27 @ 0x180100F68 (unknown_libname_27.c)
 *     sub_180100F7A @ 0x180100F7A (sub_180100F7A.c)
 *     sub_180100FF8 @ 0x180100FF8 (sub_180100FF8.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_0 @ 0x180101118 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180101118.c)
 *     sub_18010112A @ 0x18010112A (sub_18010112A.c)
 *     sub_180101160 @ 0x180101160 (sub_180101160.c)
 *     sub_180101946 @ 0x180101946 (sub_180101946.c)
 *     sub_180101FBE @ 0x180101FBE (sub_180101FBE.c)
 *     unknown_libname_52 @ 0x180103749 (unknown_libname_52.c)
 *     sub_180103E6D @ 0x180103E6D (sub_180103E6D.c)
 *     sub_18010CA3F @ 0x18010CA3F (sub_18010CA3F.c)
 * Callees:
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 */

__int64 __fastcall sub_1800115C4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return j_LanguageEnumProc(*(_QWORD *)a1, a2, a3, a4);
  return result;
}
