/*
 * XREFs of ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1802E93A4
 * Callers:
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180030A14 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x180661A10 (-IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x180661A40 (-IsViewHalfSnappedRight@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18066B330 (-OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowMan.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionForView(__int64 a1)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v9);
  v5 = v3(a1, AddressOf);
  v6 = retaddr;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 128LL))(a1, &v10);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v2 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(&v10, v9);
      goto LABEL_7;
    }
    v7 = 385LL;
  }
  else
  {
    v7 = 384LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v6,
    (void *)v7,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v2;
}
