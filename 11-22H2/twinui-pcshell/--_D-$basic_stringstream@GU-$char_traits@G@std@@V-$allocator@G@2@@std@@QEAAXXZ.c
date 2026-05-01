/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1801B9D48
 * Callers:
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$2 @ 0x1802B735E (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$2.c)
 *     __anonymous_namespace_::TimeStringToTimePoint_::_1_::dtor$1 @ 0x1803E4694 (__anonymous_namespace_--TimeStringToTimePoint_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1804B4C85 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$5 @ 0x180696872 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_180696872.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$8 @ 0x1806968A2 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_1806968A2.c)
 *     _stringutils::split_std::back_insert_iterator_std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____________::_1_::dtor$0 @ 0x1806E10B2 (_stringutils--split_std--back_insert_iterator_std--vector_std--basic_string_unsigned_short_std--.c)
 *     _Util::GetKeyPathForHwnd_::_1_::dtor$0 @ 0x180711FF4 (_Util--GetKeyPathForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C50 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
