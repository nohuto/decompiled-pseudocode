/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1805BBC00
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x1805BBB70 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000DBE0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1805BC520 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  __int64 (__fastcall *v4)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **); // rbx
  int TelemetryIdForView; // eax
  unsigned __int16 **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  ApplicationViewTraceLoggingHelpers *v14; // [rsp+50h] [rbp+10h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    memset(v12, 0, 24);
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)v12,
            L"Buffer",
            0xFFFFFFFFFFFFFFFFuLL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(v12, a2);
      v7 = v10;
      if ( v10 >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
        return 0LL;
      }
      v11 = 514LL;
    }
    else
    {
      v11 = 513LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v10);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
    return v7;
  }
  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a1 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  TelemetryIdForView = v4(a1, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v14);
  v7 = TelemetryIdForView;
  if ( TelemetryIdForView < 0 )
  {
    v8 = 505LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)TelemetryIdForView);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
    return v7;
  }
  TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(v14, (struct IApplicationView *)a2, v6);
  v7 = TelemetryIdForView;
  if ( TelemetryIdForView < 0 )
  {
    v8 = 506LL;
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  return 0LL;
}
