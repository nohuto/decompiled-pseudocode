/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180075710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180075918 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800759D4 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18017671C (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031F380 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180320AC8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3)
{
  HRESULT (__stdcall *v5)(IUnknown *, const IID *const, void **); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 *AddressOf; // rax
  int v13; // eax
  FullScreenPositioner *v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v19; // [rsp+40h] [rbp+10h] BYREF

  if ( !*(_DWORD *)(a1 + 208) )
    return 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    v14 = (FullScreenPositioner *)(a1 - 152);
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
      FullScreenPositioner::SetVisibleView(v14, 0LL);
    FullScreenPositioner::RemoveView(v14, (struct IApplicationView *)a2);
    return 0LL;
  }
  if ( (int)a3 <= 6 )
    return 0LL;
  if ( (int)a3 <= 8 )
  {
    if ( !ApplicationViewHelpers::IsViewOnMonitor(
            (ApplicationViewHelpers *)a2,
            *(struct IApplicationView **)(a1 + 80),
            a3)
      || (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
    {
      return 0LL;
    }
    LODWORD(v19) = 0;
    v17[0] = 0LL;
    QueryInterface = a2->lpVtbl[11].QueryInterface;
    AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(v17);
    if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(a2, AddressOf) >= 0
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 24LL))(v17[0]) == 3 )
    {
      v13 = FullScreenPositioner::FullScreenViewGetsFocus(
              (FullScreenPositioner *)(a1 - 152),
              (struct IApplicationView *)a2);
      v8 = v13;
      if ( v13 >= 0 )
      {
LABEL_22:
        v9 = v17;
        goto LABEL_11;
      }
      v16 = 785LL;
    }
    else
    {
      if ( v17[0] && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 24LL))(v17[0]) == 5 )
        goto LABEL_22;
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[14].QueryInterface)(a2, &v19) < 0 )
        goto LABEL_22;
      if ( (_DWORD)v19 )
        goto LABEL_22;
      v13 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 152));
      v8 = v13;
      if ( v13 >= 0 )
        goto LABEL_22;
      v16 = 795LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v13,
      v17[0]);
    v15 = v17;
    goto LABEL_31;
  }
  if ( (_DWORD)a3 != 9
    || !ApplicationViewHelpers::IsViewOnMonitor(
          (ApplicationViewHelpers *)a2,
          *(struct IApplicationView **)(a1 + 80),
          a3) )
  {
    return 0LL;
  }
  v19 = 0LL;
  v5 = a2->lpVtbl[11].QueryInterface;
  v6 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v19);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v5)(a2, v6) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) == 3
    || (v7 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 152)), v8 = v7, v7 >= 0) )
  {
    v9 = &v19;
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x332,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v7,
    v17[0]);
  v15 = &v19;
LABEL_31:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  return v8;
}
