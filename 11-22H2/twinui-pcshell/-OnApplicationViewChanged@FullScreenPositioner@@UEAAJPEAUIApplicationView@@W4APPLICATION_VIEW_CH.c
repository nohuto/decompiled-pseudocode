/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800DF260
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18003F308 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800DF470 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DF580 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803ED0C0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EE2E8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  int v5; // r8d
  unsigned __int64 v6; // r8
  HRESULT (__stdcall *v8)(IUnknown *, const IID *const, void **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v13; // eax
  FullScreenPositioner *v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v19; // [rsp+40h] [rbp+10h] BYREF

  if ( !*(_DWORD *)(a1 + 184) )
    return 0LL;
  v5 = a3 - 1;
  if ( !v5 )
  {
    v14 = (FullScreenPositioner *)(a1 - 144);
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 80), a2) )
      FullScreenPositioner::SetVisibleView(v14, 0LL);
    FullScreenPositioner::RemoveView(v14, (struct IApplicationView *)a2);
    return 0LL;
  }
  v6 = (unsigned int)(v5 - 6);
  if ( !(_DWORD)v6 || (v6 = (unsigned int)(v6 - 1), !(_DWORD)v6) )
  {
    if ( !ApplicationViewHelpers::IsViewOnMonitor(
            (ApplicationViewHelpers *)a2,
            *(struct IApplicationView **)(a1 + 72),
            (struct IImmersiveMonitor *)v6)
      || (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 80), a2) )
    {
      return 0LL;
    }
    LODWORD(v19) = 0;
    v17[0] = 0LL;
    QueryInterface = a2->lpVtbl[11].QueryInterface;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
    if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(a2, v17) >= 0
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 24LL))(v17[0]) == 3 )
    {
      v13 = FullScreenPositioner::FullScreenViewGetsFocus(
              (FullScreenPositioner *)(a1 - 144),
              (struct IApplicationView *)a2);
      v10 = v13;
      if ( v13 >= 0 )
      {
LABEL_21:
        v11 = v17;
        goto LABEL_22;
      }
      v16 = 722LL;
    }
    else
    {
      if ( v17[0] && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 24LL))(v17[0]) == 5 )
        goto LABEL_21;
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[14].QueryInterface)(a2, &v19) < 0 )
        goto LABEL_21;
      if ( (_DWORD)v19 )
        goto LABEL_21;
      v13 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144));
      v10 = v13;
      if ( v13 >= 0 )
        goto LABEL_21;
      v16 = 732LL;
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
  if ( (_DWORD)v6 != 1
    || !ApplicationViewHelpers::IsViewOnMonitor(
          (ApplicationViewHelpers *)a2,
          *(struct IApplicationView **)(a1 + 72),
          (struct IImmersiveMonitor *)v6) )
  {
    return 0LL;
  }
  v19 = 0LL;
  v8 = a2->lpVtbl[11].QueryInterface;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v8)(a2, &v19) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) == 3
    || (v9 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144)), v10 = v9, v9 >= 0) )
  {
    v11 = &v19;
LABEL_22:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F3,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v9,
    v17[0]);
  v15 = &v19;
LABEL_31:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v15);
  return v10;
}
