/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1803D5920
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$1 @ 0x1801C4360 (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$1.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetTaskbarTelemetryFromContext_::_1_::dtor$4 @ 0x1801C8A0E (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetTaskbarTelem_ea_1801C8A0E.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetTaskbarTelemetryFromContext_::_1_::dtor$7 @ 0x1801C8A32 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetTaskbarTelem_ea_1801C8A32.c)
 *     _GenerateCandidateListForTelemetry_::_1_::dtor$0 @ 0x1802324C2 (_GenerateCandidateListForTelemetry_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1803D7F65 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 *     _VirtualDesktopPersistence::GetVirtualDesktopMonitorRegKeyName_::_1_::dtor$0 @ 0x18055CA36 (_VirtualDesktopPersistence--GetVirtualDesktopMonitorRegKeyName_--_1_--dtor$0.c)
 *     _stringutils::split_std::back_insert_iterator_std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____________::_1_::dtor$0 @ 0x1805DCE8D (_stringutils--split_std--back_insert_iterator_std--vector_std--basic_string_unsigned_short_std--.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1803D519C (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
