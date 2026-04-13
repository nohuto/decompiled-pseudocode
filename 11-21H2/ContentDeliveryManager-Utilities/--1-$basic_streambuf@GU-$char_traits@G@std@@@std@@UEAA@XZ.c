/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180057CC0
 * Callers:
 *     _std::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800EF728 (_std--basic_stringbuf_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_sh.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$7 @ 0x1800F05B5 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800F05B5.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$26 @ 0x1800F139F (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$26.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$11 @ 0x1800F36F3 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$11.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$4 @ 0x1800F569C (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800F569C.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$8 @ 0x1800F5D36 (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___ea_1800F5D36.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180059CF4 (--_Glocale@std@@QEAAPEAXI@Z.c)
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
