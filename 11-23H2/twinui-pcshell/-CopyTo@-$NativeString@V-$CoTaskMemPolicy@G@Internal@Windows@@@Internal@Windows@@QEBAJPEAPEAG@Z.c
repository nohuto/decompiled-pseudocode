/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000DBE0
 * Callers:
 *     ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x18000B080 (-GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x18000DB50 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x1803D02F0 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1805BBC00 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  *a2 = 0LL;
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( v4 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(v3 + 2 * v7) );
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(&v8);
    if ( v5 >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v8);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return (unsigned int)v5;
}
