/*
 * XREFs of ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180053144
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800D6460 (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigne.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800D709B (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0_0 @ 0x1800D78DA (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800D78DA.c)
 *     _std::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800D98AF (_std--basic_ostringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ost.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800DBB9D (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ist.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800DC328 (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_stri.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800058DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(
        struct std::ios_base *a1)
{
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
}
