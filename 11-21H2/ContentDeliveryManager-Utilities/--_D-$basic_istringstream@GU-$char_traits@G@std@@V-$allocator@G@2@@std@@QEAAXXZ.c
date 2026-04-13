/*
 * XREFs of ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180058DB0
 * Callers:
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$3 @ 0x1800EFB83 (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$3.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$10 @ 0x1800F5731 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800F5731.c)
 *     _CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString_::_1_::dtor$1 @ 0x1800F728F (_CreativeFramework--CommonHelper--StringUtils--GetFileTimeFromString_--_1_--dtor$1.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180057C3C (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::basic_istringstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  struct std::ios_base *v1; // rbx

  v1 = (struct std::ios_base *)(a1 + 144);
  std::wistringstream::~wistringstream(a1 + 144);
  *(_QWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}
