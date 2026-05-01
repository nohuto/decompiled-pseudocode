/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x180096FA8
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180697178 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C50 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180096CB4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x180096D90 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@V-$initializer_list@H@1@AEBV-$allocator@H@1@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801AD008 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(__int64 *a1, void **a2)
{
  int v4; // edi
  void *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[19]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v10[104]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+160h] [rbp+58h] BYREF
  char v12; // [rsp+168h] [rbp+60h] BYREF

  v11 = 0LL;
  v8[0] = &v11;
  v8[1] = &v12;
  std::vector<int>::vector<int>(a1, (__int64)v8);
  std::wstring::wstring(a1 + 3, &LocaleName);
  if ( a1 + 3 != (__int64 *)a2 )
  {
    v6 = a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v6 = *a2;
    std::wstring::assign(a1 + 3, v6);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v9,
    a2);
  std::basic_istream<unsigned short>::operator>>(v9, *a1);
  v4 = 1;
  while ( (unsigned __int16)std::basic_istream<unsigned short>::get(v9) )
  {
    std::basic_istream<unsigned short>::operator>>(v9, *a1 + 4LL * v4++);
    if ( v4 >= 2 )
      goto LABEL_5;
  }
  v11 = 0LL;
  if ( (unsigned __int64)((a1[2] - *a1) >> 2) < 2 )
    std::vector<int>::_Clear_and_reserve_geometric(a1, 2LL);
  v7 = (_QWORD *)*a1;
  *v7 = v11;
  a1[1] = (__int64)(v7 + 1);
LABEL_5:
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v10);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v10);
  return a1;
}
