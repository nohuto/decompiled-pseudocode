/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800531C8
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180053208 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x1800547B0 (--_E-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     _std::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800D645A (_std--basic_stringbuf_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_sh.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$3 @ 0x1800D7095 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800D7095.c)
 *     _std::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800D98A9 (_std--basic_stringbuf_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_stringb.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$3 @ 0x1800DBB97 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800DBB97.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180054A34 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1)
{
  void **result; // rax
  std::locale *v2; // rcx

  result = &std::wstreambuf::`vftable';
  *a1 = &std::wstreambuf::`vftable';
  v2 = (std::locale *)a1[12];
  if ( v2 )
    return (void **)std::locale::`scalar deleting destructor'(v2, 1u);
  return result;
}
