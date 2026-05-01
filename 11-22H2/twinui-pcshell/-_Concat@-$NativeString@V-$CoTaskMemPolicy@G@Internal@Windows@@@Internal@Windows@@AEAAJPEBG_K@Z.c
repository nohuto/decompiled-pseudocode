/*
 * XREFs of ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802D0A2E
 * Callers:
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1802D08F6 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1802D092C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1803AD96C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x18046E750 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1804B52B8 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x180741E8C (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windo.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180752B20 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800C5760 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801542E4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3)
{
  int v3; // r11d
  LPVOID *v7; // rcx

  v3 = 0;
  if ( a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           v7,
           (unsigned __int64)v7[1] + a3);
    if ( v3 >= 0 )
    {
      StringCchCopyNW((char *)(*a1 + 2LL * a1[1]), a3 + 1, a2, a3);
      a1[1] += a3;
    }
  }
  return (unsigned int)v3;
}
