/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180564F10 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1805652A0 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805655D8 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180082B54 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1802E245E (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180564D10 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x180564DE0 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemCollection::_AddViewItem(
        SwitchItemCollection *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  unsigned int v4; // esi
  int (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v9; // eax
  struct IApplicationView *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct IApplicationView *, _QWORD, GUID *, int *); // rbx
  int v14; // ebx
  __int64 v15; // rdx
  int v17[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HWND hWnd; // [rsp+78h] [rbp+38h] BYREF
  int v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v18 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  if ( v5((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v18) >= 0 )
  {
    v22 = 0LL;
    v6 = v18;
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v22);
    if ( v7(v6, AddressOf) < 0
      || (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v22 + 56LL))(v22, &hWnd) < 0
      || !(_DWORD)hWnd )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  }
  v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[27])(
         a2,
         &v21);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v9);
    v4 = v11;
    goto LABEL_21;
  }
  if ( v21
    && !HolographicViewHelpers::IsApplicationViewHolographic((HolographicViewHelpers *)a2, v10)
    && (!IsSurfaceHubWithWin32VtcEnabled()
     || !PPISideBarHelpers::IsSideBarView((struct IApplicationView *)a2)
     && (PPISideBarHelpers::GetWindowfromView((struct IApplicationView *)a2, &hWnd) < 0
      || !GetPropA(hWnd, "SHARING_TOOLBAR"))) )
  {
    *(_QWORD *)v17 = 0LL;
    v12 = *((_QWORD *)this + 26);
    v13 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, GUID *, int *))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
    v14 = v13(v12, (struct IApplicationView *)a2, 0LL, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, v17);
    if ( v14 >= 0 )
    {
      v14 = ObservableObjectArray::_AddItem((char *)this + 8, v17, 0LL);
      if ( v14 >= 0 )
      {
LABEL_20:
        v4 = v14;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v17);
        goto LABEL_21;
      }
      v15 = 195LL;
    }
    else
    {
      v15 = 194LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_20;
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return v4;
}
