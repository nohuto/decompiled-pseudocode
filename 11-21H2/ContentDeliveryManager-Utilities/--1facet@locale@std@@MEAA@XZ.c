/*
 * XREFs of ??1facet@locale@std@@MEAA@XZ @ 0x18005849C
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$0 @ 0x1800ED773 (_std--locale--_Locimp--_Locimp_--_1_--dtor$0.c)
 *     _std::locale::_Locimp::_Makeloc_::_1_::dtor$21 @ 0x1800ED8A7 (_std--locale--_Locimp--_Makeloc_--_1_--dtor$21.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$29 @ 0x1800EDB97 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$29.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$42 @ 0x1800EDBBB (_std--locale--_Locimp--_Makexloc_--_1_--dtor$42.c)
 *     _std::numpunct_wchar_t_::_Getcat_::_1_::dtor$2 @ 0x1800F0156 (_std--numpunct_wchar_t_--_Getcat_--_1_--dtor$2.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$6 @ 0x1800F0E85 (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_st_ea_1800F0E85.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getcat_::_1_::dtor$2 @ 0x1800F730D (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t____ea_1800F730D.c)
 * Callees:
 *     <none>
 */

void __fastcall std::locale::facet::~facet(std::locale::facet *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
