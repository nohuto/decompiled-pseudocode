/*
 * XREFs of ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1803E2E7C
 * Callers:
 *     _std::use_facet_std::time_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short________::_1_::dtor$1 @ 0x1803E2C5C (_std--use_facet_std--time_get_unsigned_short_std--istreambuf_iterator_unsigned_shor_ea_1803E2C5C.c)
 *     _std::use_facet_std::codecvt_char_char__Mbstatet____::_1_::dtor$1 @ 0x18064B3E4 (_std--use_facet_std--codecvt_char_char__Mbstatet____--_1_--dtor$1.c)
 *     _std::use_facet_std::codecvt_unsigned_short_char__Mbstatet____::_1_::dtor$1 @ 0x1806E11B8 (_std--use_facet_std--codecvt_unsigned_short_char__Mbstatet____--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
