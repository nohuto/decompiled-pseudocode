/*
 * XREFs of ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x1805939D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180075918 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1801302F4 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x1805A6F8C (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CShellSnapComponent::GetOnscreenViewsForMonitor(
        CShellSnapComponent *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray *a3,
        struct IObjectArray **a4)
{
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int Instance; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, struct IUnknown **); // rdi
  int v19; // eax
  struct IImmersiveMonitor *v20; // r8
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  struct IApplicationView *v23; // rdx
  char IsSnappedWindow; // bl
  bool v25; // di
  struct IApplicationView *v26; // rdx
  HWND WindowForView; // rax
  int IsUnoccluded; // eax
  int v29; // eax
  bool *v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+30h] [rbp-20h] BYREF
  int v33; // [rsp+34h] [rbp-1Ch] BYREF
  struct IUnknown *v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h] BYREF
  struct IApplicationView *v36; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v38; // [rsp+88h] [rbp+38h] BYREF

  *a4 = 0LL;
  v36 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
  Instance = CEnumerableObjectCollection::CreateInstance(v9, v8, (void **)&v36);
  v11 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_30;
  }
  v35 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v35, (__int64)a3);
  }
  else
  {
    v14 = *((_QWORD *)this + 14);
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    v12 = v15(v14, &v35);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = 593LL;
      goto LABEL_28;
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, &v32);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 598LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_29;
  }
  v16 = 0;
  if ( !v32 )
  {
LABEL_26:
    v12 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, struct IObjectArray **))v36)(
            v36,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a4);
    v11 = v12;
    if ( v12 >= 0 )
      goto LABEL_29;
    v13 = 636LL;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v34 = 0LL;
    v17 = v35;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v35 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v34);
    v19 = v18(v17, v16, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v34);
    v21 = retaddr;
    if ( v19 < 0 )
    {
      v22 = 602LL;
LABEL_15:
      wil::details::in1diag3::_Log_Hr(
        v21,
        (void *)v22,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_24;
    }
    if ( !ApplicationViewHelpers::IsViewOnMonitor((ApplicationViewHelpers *)v34, a2, v20) )
      goto LABEL_24;
    v19 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v34->lpVtbl[3].Release)(v34, &v33);
    v21 = retaddr;
    if ( v19 < 0 )
    {
      v22 = 605LL;
      goto LABEL_15;
    }
    if ( !v33 )
      goto LABEL_24;
    IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v34,
                        v23);
    v25 = 0;
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v34,
                            v26);
    if ( WindowForView )
      v25 = IsZoomed(WindowForView);
    if ( !IsSnappedWindow && !v25 )
      goto LABEL_24;
    IsUnoccluded = SnapLayoutHelpers::IsUnoccluded(v34, v36, 0LL, (struct IApplicationView *)&v38, v31);
    if ( IsUnoccluded < 0 )
      break;
    if ( v38 )
      goto LABEL_23;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v34);
    if ( !IsSnappedWindow )
      goto LABEL_26;
LABEL_25:
    if ( ++v16 >= v32 )
      goto LABEL_26;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x266,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)IsUnoccluded);
LABEL_23:
  v29 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v36 + 40LL))(v36, v34);
  v11 = v29;
  if ( v29 >= 0 )
  {
LABEL_24:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v34);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x276,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v29);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v34);
LABEL_29:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
  return v11;
}
