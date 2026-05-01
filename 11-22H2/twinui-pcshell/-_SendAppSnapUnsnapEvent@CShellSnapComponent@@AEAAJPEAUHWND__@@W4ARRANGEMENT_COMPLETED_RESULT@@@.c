/*
 * XREFs of ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180665B0C
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18065CDCC (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ??$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18065CEB4 (--$AppUnsnapped@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAPEBGAEAPEAUHWND__@@@Z.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806659BC (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z @ 0x180665A94 (-_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShellSnapComponent::_SendAppSnapUnsnapEvent(__int64 a1, HWND a2, int a3)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HWND, struct IApplicationView **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  struct IApplicationView *v11; // rbx
  __int64 (__fastcall *v12)(struct IApplicationView *, const unsigned __int16 **); // rdi
  int AppPosition; // eax
  CShellSnapComponent *v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  struct IApplicationView *v17; // rbx
  __int64 (__fastcall *v18)(struct IApplicationView *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v20; // eax
  __int64 v21; // rdx
  struct IApplicationView *v22; // [rsp+30h] [rbp-39h] BYREF
  SnapRectHelpers *v23; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-29h] BYREF
  const unsigned __int16 *v25; // [rsp+48h] [rbp-21h] BYREF
  __int64 v26; // [rsp+50h] [rbp-19h]
  __int64 v27; // [rsp+58h] [rbp-11h]
  HWND v28; // [rsp+60h] [rbp-9h] BYREF
  const unsigned __int16 *v29; // [rsp+68h] [rbp-1h] BYREF
  __int128 v30; // [rsp+70h] [rbp+7h] BYREF
  __int128 v31; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v28 = a2;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 1LL;
  v22 = 0LL;
  v7 = *(_QWORD *)(a1 + 224);
  v8 = *(__int64 (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v7 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  v9 = v8(v7, a2, &v22);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v11 = v22;
    v12 = *(__int64 (__fastcall **)(struct IApplicationView *, const unsigned __int16 **))(*(_QWORD *)v22 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    v26 = -1LL;
    v27 = -1LL;
    AppPosition = v12(v11, &v25);
    v10 = AppPosition;
    if ( AppPosition < 0 )
    {
      v15 = 1265LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)AppPosition);
LABEL_20:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
      goto LABEL_21;
    }
    v16 = a3 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v23 = (SnapRectHelpers *)v25;
        CSnapComponentTelemetry::AppUnsnapped<unsigned short const *,HWND__ * &>((const unsigned __int16 **)&v23, &v28);
        CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v22, 0);
      }
      goto LABEL_19;
    }
    v30 = 0LL;
    AppPosition = CShellSnapComponent::_GetAppPosition(v14, v22, (struct Geometry::CRect *)&v30);
    v10 = AppPosition;
    if ( AppPosition < 0 )
    {
      v15 = 1272LL;
      goto LABEL_12;
    }
    v23 = 0LL;
    v17 = v22;
    v18 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v22 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v23);
    v20 = v18(v17, AddressOf);
    v10 = v20;
    if ( v20 >= 0 )
    {
      v31 = 0LL;
      v20 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v23 + 88LL))(v23, &v31);
      v10 = v20;
      if ( v20 >= 0 )
      {
        v29 = v25;
        v24 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(&v30, v23);
        CSnapComponentTelemetry::AppSnapped<enum SnapRegion,Geometry::CRect &,Geometry::CRect &,unsigned short const *,HWND__ * &>(
          &v24,
          (unsigned __int64)&v30,
          (__int64)&v31,
          &v29,
          &v28);
        CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v22, 1);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
LABEL_19:
        v10 = 0;
        goto LABEL_20;
      }
      v21 = 1278LL;
    }
    else
    {
      v21 = 1275LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EE,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v9);
LABEL_21:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  return v10;
}
