/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800FA308 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x1801C4140 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@V-$initializer_list@H@1@AEBV-$allocator@H@1@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801CE468 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1803D5920 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1805BC8AC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[272]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+160h] [rbp+60h] BYREF
  char v10; // [rsp+168h] [rbp+68h] BYREF

  v9 = 0LL;
  v7[0] = &v9;
  v7[1] = &v10;
  std::vector<int>::vector<int>(a1, (__int64)v7, a3);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v8,
    a2);
  std::basic_istream<unsigned short>::operator>>(v8, *a1);
  if ( (unsigned __int16)std::basic_istream<unsigned short>::get(v8) )
  {
    std::basic_istream<unsigned short>::operator>>(v8, *a1 + 4);
  }
  else
  {
    v9 = 0LL;
    v5 = (_QWORD *)*a1;
    if ( (unsigned __int64)((a1[2] - *a1) >> 2) < 2 )
    {
      std::vector<int>::_Clear_and_reserve_geometric(a1);
      v5 = (_QWORD *)*a1;
    }
    *v5 = v9;
    a1[1] = (__int64)(v5 + 1);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(v8);
  return a1;
}
