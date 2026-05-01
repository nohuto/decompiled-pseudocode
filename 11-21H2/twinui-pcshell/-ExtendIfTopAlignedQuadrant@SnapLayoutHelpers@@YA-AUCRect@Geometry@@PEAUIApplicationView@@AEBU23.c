/*
 * XREFs of ?ExtendIfTopAlignedQuadrant@SnapLayoutHelpers@@YA?AUCRect@Geometry@@PEAUIApplicationView@@AEBU23@1@Z @ 0x1805A3650
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1805A33B4 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1805A33B4.c)
 *     ?IsTopAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A6F4C (-IsTopAlignedRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapLayoutHelpers::ExtendIfTopAlignedQuadrant(__int64 a1, __int64 a2, int *a3)
{
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rbx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  SnapLayoutHelpers *v16; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *(_OWORD *)a1 = *(_OWORD *)a3;
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v16);
  v8 = v6(a2, AddressOf);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x290,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_14;
  }
  v9 = (unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a3, v16);
  if ( (unsigned __int8)SnapLayoutHelpers::IsTopAlignedRegion(v9) && (((_DWORD)v9 - 1) & 0xFFFFFFF9) == 0 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v15 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v17);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
      v10 = v13(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v15);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 24LL))(v15, &v18);
        v11 = retaddr;
        if ( v10 >= 0 )
        {
          *(_DWORD *)(a1 + 12) = HIDWORD(v18) + a3[3] - HIDWORD(v17);
          goto LABEL_13;
        }
        v12 = 670LL;
      }
      else
      {
        v12 = 669LL;
      }
    }
    else
    {
      v12 = 668LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v10);
LABEL_13:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return a1;
}
