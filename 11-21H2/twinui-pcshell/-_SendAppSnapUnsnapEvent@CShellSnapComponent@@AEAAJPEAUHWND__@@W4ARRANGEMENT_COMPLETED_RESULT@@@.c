/*
 * XREFs of ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180597E3C
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805951F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x180590384 (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ??$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18059046C (--$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x180597978 (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z @ 0x180597A50 (-_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1805A33B4 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1805A33B4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShellSnapComponent::_SendAppSnapUnsnapEvent(__int64 a1, HWND a2, int a3)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct IApplicationView *v12; // rbx
  __int64 (__fastcall *v13)(struct IApplicationView *, const unsigned __int16 **); // rdi
  int AppPosition; // eax
  CShellSnapComponent *v15; // rcx
  __int64 v16; // rdx
  int v17; // esi
  struct IApplicationView *v18; // rbx
  __int64 (__fastcall *v19)(struct IApplicationView *, __int64 *); // rdi
  __int64 *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  struct IApplicationView *v23; // [rsp+30h] [rbp-39h] BYREF
  const unsigned __int16 *v24; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-29h] BYREF
  const unsigned __int16 *v26; // [rsp+48h] [rbp-21h] BYREF
  __int64 v27; // [rsp+50h] [rbp-19h]
  __int64 v28; // [rsp+58h] [rbp-11h]
  HWND v29; // [rsp+60h] [rbp-9h] BYREF
  const unsigned __int16 *v30; // [rsp+68h] [rbp-1h] BYREF
  __int128 v31; // [rsp+70h] [rbp+7h] BYREF
  __int128 v32; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v29 = a2;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 1LL;
  v23 = 0LL;
  v7 = *(_QWORD *)(a1 + 232);
  v8 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v7 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v23);
  v10 = v8(v7, a2, AddressOf);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v12 = v23;
    v13 = *(__int64 (__fastcall **)(struct IApplicationView *, const unsigned __int16 **))(*(_QWORD *)v23 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    v27 = -1LL;
    v28 = -1LL;
    AppPosition = v13(v12, &v26);
    v11 = AppPosition;
    if ( AppPosition < 0 )
    {
      v16 = 1244LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)AppPosition);
LABEL_20:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
      goto LABEL_21;
    }
    v17 = a3 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v24 = v26;
        CSnapComponentTelemetry::AppUnsnapped<unsigned short const *,HWND__ * &>(&v24, &v29);
        CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v23, 0);
      }
      goto LABEL_19;
    }
    v31 = 0LL;
    AppPosition = CShellSnapComponent::_GetAppPosition(v15, v23, (struct Geometry::CRect *)&v31);
    v11 = AppPosition;
    if ( AppPosition < 0 )
    {
      v16 = 1251LL;
      goto LABEL_12;
    }
    v24 = 0LL;
    v18 = v23;
    v19 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v23 + 80LL);
    v20 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v24);
    v21 = v19(v18, v20);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v32 = 0LL;
      v21 = (*(__int64 (__fastcall **)(const unsigned __int16 *, __int128 *))(*(_QWORD *)v24 + 88LL))(v24, &v32);
      v11 = v21;
      if ( v21 >= 0 )
      {
        v30 = v26;
        v25 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(&v31, v24);
        CSnapComponentTelemetry::AppSnapped<enum SnapRegion,Geometry::CRect &,Geometry::CRect &,unsigned short const *,HWND__ * &>(
          &v25,
          (unsigned __int64)&v31,
          (__int64)&v32,
          &v30,
          &v29);
        CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v23, 1);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
LABEL_19:
        v11 = 0;
        goto LABEL_20;
      }
      v22 = 1257LL;
    }
    else
    {
      v22 = 1254LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v21);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D9,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v10);
LABEL_21:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
  return v11;
}
