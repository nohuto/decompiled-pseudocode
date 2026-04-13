/*
 * XREFs of ??1facet@locale@std@@MEAA@XZ @ 0x180053704
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$0 @ 0x1800D4383 (_std--locale--_Locimp--_Locimp_--_1_--dtor$0.c)
 *     _std::numpunct_char_::_Getcat_::_1_::dtor$2 @ 0x1800D445B (_std--numpunct_char_--_Getcat_--_1_--dtor$2.c)
 *     _std::locale::_Locimp::_Makeloc_::_1_::dtor$21 @ 0x1800D44ED (_std--locale--_Locimp--_Makeloc_--_1_--dtor$21.c)
 *     _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getcat_::_1_::dtor$2 @ 0x1800D4564 (_std--time_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--_Getc_ea_1800D4564.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$29 @ 0x1800D4801 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$29.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$65 @ 0x1800D4825 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$65.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$42 @ 0x1800D4A8C (_std--locale--_Locimp--_Makexloc_--_1_--dtor$42.c)
 *     _std::numpunct_wchar_t_::numpunct_wchar_t__::_1_::dtor$0 @ 0x1800D646C (_std--numpunct_wchar_t_--numpunct_wchar_t__--_1_--dtor$0.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$6 @ 0x1800D792F (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_st_ea_1800D792F.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t______::_1_::dtor$0 @ 0x1800DD508 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--time_get_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::locale::facet::~facet(std::locale::facet *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
