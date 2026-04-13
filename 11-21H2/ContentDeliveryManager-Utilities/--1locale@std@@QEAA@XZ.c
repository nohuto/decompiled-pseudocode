/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x1800584C4
 * Callers:
 *     _std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor$4 @ 0x1800ED8CB (_std--money_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--_Getmfld_--_1_--d.c)
 *     _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::do_get_year_::_1_::dtor$0 @ 0x1800EDC03 (_std--time_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--do_get_year_--_1_-.c)
 *     _std::money_put_char_std::ostreambuf_iterator_char_std::char_traits_char_____::do_put_::_1_::dtor$0 @ 0x1800EDC15 (_std--money_put_char_std--ostreambuf_iterator_char_std--char_traits_char_____--do_put_--_1_--dto.c)
 *     _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getfmt_::_1_::dtor$0 @ 0x1800EDCBD (_std--time_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--_Getfmt_--_1_--dto.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::basic_istream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$2 @ 0x1800EF6CC (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--basic_istream_unsigned_sh.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$1 @ 0x1800EF7F4 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$1.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffldx_::_1_::dtor$0 @ 0x1800F0168 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--_Getffldx_.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$0 @ 0x1800F018C (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_--_.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::_Ipfx_::_1_::dtor$0 @ 0x1800F021E (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--_Ipfx_--_1_--dtor$0.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$4 @ 0x1800F02A5 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_1800F02A5.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$0 @ 0x1800F0E2A (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_st_ea_1800F0E2A.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::dtor$1 @ 0x1800F7207 (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--dtor$1.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getfmt_::_1_::dtor$0 @ 0x1800F731F (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--_Getfmt_-.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$0 @ 0x1800F7357 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_--.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_date_::_1_::dtor$0 @ 0x1800F7369 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_da.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_year_::_1_::dtor$0 @ 0x1800F737B (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_ye.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::get_::_1_::dtor$0 @ 0x1800F738D (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--get_--_1_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
