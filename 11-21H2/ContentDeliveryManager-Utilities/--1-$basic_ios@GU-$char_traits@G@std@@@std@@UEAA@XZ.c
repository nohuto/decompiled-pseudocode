/*
 * XREFs of ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180057BEC
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800EF6DE (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigne.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800F0555 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$19 @ 0x1800F133F (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$19.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$7 @ 0x1800F36A9 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$7.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800F5652 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ist.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800F5CEC (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___ea_1800F5CEC.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(
        struct std::ios_base *a1)
{
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
}
