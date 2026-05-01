/*
 * XREFs of ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180310E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007FF90 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::WindowShowEnterpriseIndicatorChanged(
        CApplicationViewManager *this,
        HWND a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 *AddressOf; // rax
  int ViewForHwnd; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int (__fastcall ***v9)(_QWORD, GUID *, WINBOOL *); // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this - 48);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v9);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v3, a2, (struct IApplicationView **)AddressOf);
  if ( ViewForHwnd >= 0 )
  {
    v6 = CApplicationViewManager::RaiseApplicationViewChanged((__int64)v3, v9, 0x13u, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x351,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
    ViewForHwnd = 0;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  return (unsigned int)ViewForHwnd;
}
