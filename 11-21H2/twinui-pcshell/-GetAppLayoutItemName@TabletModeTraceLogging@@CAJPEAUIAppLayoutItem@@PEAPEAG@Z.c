/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180503420
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x180503390 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18015D144 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180503F10 (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  __int64 (__fastcall *v4)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **); // rbx
  int TelemetryIdForView; // eax
  unsigned __int16 **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  _WORD *v11; // rcx
  signed __int64 v12; // rdx
  __int16 v13; // r8
  __int64 v14; // rdx
  _BYTE *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ApplicationViewTraceLoggingHelpers *v20; // [rsp+60h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (LPVOID *)&v16,
           6uLL);
    v7 = v9;
    if ( v9 < 0 )
    {
      v14 = 510LL;
    }
    else
    {
      v10 = 7LL;
      v11 = v16;
      v12 = (char *)L"Buffer" - v16;
      while ( --v10 )
      {
        v13 = *(_WORD *)((char *)v11 + v12);
        if ( !v13 )
          break;
        *v11++ = v13;
      }
      *v11 = 0;
      v17 = 6LL;
      v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
             (__int64 *)&v16,
             a2);
      v7 = v9;
      if ( v9 >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
        return 0LL;
      }
      v14 = 511LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v9);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
    return v7;
  }
  v20 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a1 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  TelemetryIdForView = v4(a1, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v20);
  v7 = TelemetryIdForView;
  if ( TelemetryIdForView >= 0 )
  {
    TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(
                           v20,
                           (struct IApplicationView *)a2,
                           v6);
    v7 = TelemetryIdForView;
    if ( TelemetryIdForView < 0 )
    {
      v8 = 503LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
    return 0LL;
  }
  v8 = 502LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)TelemetryIdForView);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  return v7;
}
