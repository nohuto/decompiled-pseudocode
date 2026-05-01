/*
 * XREFs of ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1802D08F6
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x1802E6312 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1803AD96C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180752B20 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[1];
  if ( v2 == -1 )
  {
    if ( *a2 )
    {
      do
        ++v2;
      while ( *(_WORD *)(*a2 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(a1, *a2, v2);
}
