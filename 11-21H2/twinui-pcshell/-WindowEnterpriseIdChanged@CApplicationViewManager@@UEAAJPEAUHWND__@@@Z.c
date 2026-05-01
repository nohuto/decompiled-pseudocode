/*
 * XREFs of ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180310D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007FF90 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::WindowEnterpriseIdChanged(CApplicationViewManager *this, HWND a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 *AddressOf; // rax
  int ViewForHwnd; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this - 48);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v12);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v3, a2, (struct IApplicationView **)AddressOf);
  if ( ViewForHwnd >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    v6 = (**v12)(v12, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v11);
    ViewForHwnd = v6;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = 1;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, v7);
      ViewForHwnd = v6;
      if ( v6 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
        goto LABEL_8;
      }
      v8 = 825LL;
    }
    else
    {
      v8 = 824LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v12);
  return (unsigned int)ViewForHwnd;
}
