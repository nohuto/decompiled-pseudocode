/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802327C2
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804A7B60 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A83D0 (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1804A84A4 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A87DC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016A754 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180233DCE (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1804A7844 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804A796C (-IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1804A7A34 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
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
  unsigned int v12; // r14d
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, struct IApplicationView *, _QWORD, GUID *, int *); // rbx
  int v15; // ebx
  __int64 v16; // rdx
  int v18[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HWND hWnd; // [rsp+88h] [rbp+48h] BYREF
  int v22; // [rsp+90h] [rbp+50h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v19 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  if ( v5((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v19) >= 0 )
  {
    v23 = 0LL;
    v6 = v19;
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v23);
    if ( v7(v6, AddressOf) < 0
      || (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 56LL))(v23, &hWnd) < 0
      || !(_DWORD)hWnd )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      goto LABEL_24;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  }
  v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[27])(
         a2,
         &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v9);
    v4 = v11;
    goto LABEL_24;
  }
  if ( v22
    && !HolographicViewHelpers::IsApplicationViewHolographic((HolographicViewHelpers *)a2, v10)
    && (!IsSurfaceHubWithWin32VtcEnabled()
     || !PPISideBarHelpers::IsSideBarView((struct IApplicationView *)a2)
     && (PPISideBarHelpers::GetWindowfromView((struct IApplicationView *)a2, &hWnd) < 0
      || !GetPropA(hWnd, "SHARING_TOOLBAR"))) )
  {
    v12 = 0;
    if ( *((_QWORD *)this + 27) )
    {
      if ( !SwitchItemCollection::IsIncludedTab(this, (struct IApplicationView *)a2) )
        goto LABEL_24;
      v12 = (*((_DWORD *)this + 62) != 0) + 1;
    }
    *(_QWORD *)v18 = 0LL;
    v13 = *((_QWORD *)this + 26);
    v14 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, GUID *, int *))(*(_QWORD *)v13 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v18);
    v15 = v14(v13, (struct IApplicationView *)a2, v12, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, v18);
    if ( v15 >= 0 )
    {
      v15 = ObservableObjectArray::_AddItem((char *)this + 8, v18, 0LL);
      if ( v15 >= 0 )
      {
LABEL_23:
        v4 = v15;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v18);
        goto LABEL_24;
      }
      v16 = 246LL;
    }
    else
    {
      v16 = 245LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_23;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return v4;
}
