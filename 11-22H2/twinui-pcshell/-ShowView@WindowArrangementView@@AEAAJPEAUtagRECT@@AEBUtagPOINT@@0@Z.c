/*
 * XREFs of ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D4060 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1805978F8 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_ @ 0x1805D03F8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805D1828 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1805D1E54 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1805D21E8 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805D2678 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D2EF4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1805D41F0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1805D5C44 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::ShowView(
        IUnknown **this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  int PlaceModePoint; // eax
  unsigned int LastError; // ebx
  __int64 *AddressOf; // rax
  int PrimaryMonitor; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  bool *v14; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v16; // eax
  volatile int *v17; // rdx
  int v18; // eax
  HWND v19; // rax
  const char *v20; // r9
  volatile int *v22; // rdx
  Microsoft::WRL::Details *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  struct IUnknown *v28[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct tagPOINT v30; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF

  v30 = *a3;
  if ( *((_DWORD *)this + 72) != 2
    || (PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)this, 7, 0xFFFFFFFF, &v30),
        LastError = PlaceModePoint,
        PlaceModePoint >= 0) )
  {
    v28[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)v28);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor(this, (struct IImmersiveMonitor **)AddressOf);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1141LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PrimaryMonitor);
      goto LABEL_25;
    }
    PrimaryMonitor = WindowArrangementView::InitDragVisual((WindowArrangementView *)this, v28[0], a2, &v30, a4);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1142LL;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 72) == 2 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(this[2], &stru_18089F510, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
      LastError = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47B,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_25:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v28);
        return LastError;
      }
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[8].QueryInterface)(this[10]);
      LOBYTE(v30.x) = 0;
      IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                     this[2],
                                     0LL,
                                     (struct IImmersiveLauncher *)&v30,
                                     v14);
      if ( IsLauncherVisibleOnMonitor >= 0 )
      {
        if ( LOBYTE(v30.x) )
          WindowArrangementView::EnablePlaceModeDropFeedback((__int64)this, 1, 0LL, 0LL);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x480,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
      }
      v16 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x487,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[1].QueryInterface)(this[10]);
    PrimaryMonitor = ((__int64 (__fastcall *)(IUnknown *))this[9]->lpVtbl[1].QueryInterface)(this[9]);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v12 = 1164LL;
      goto LABEL_33;
    }
    v18 = *((_DWORD *)this + 72);
    if ( v18 == 2 )
    {
      v19 = (HWND)((__int64 (__fastcall *)(IUnknown *))this[10]->lpVtbl[4].Release)(this[10]);
      if ( !SetForegroundWindow(v19) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x491,
                      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                      v20);
        goto LABEL_25;
      }
      WindowArrangementView::ShowPlaceModeFeedback((__int64)(this + 6), 0, 0LL, 0);
    }
    else if ( v18 == 3 )
    {
      *((_BYTE *)this + 315) = 1;
      ppvOut = this;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)this + 68), v17);
      v30 = (struct tagPOINT)this;
      Microsoft::WRL::Details::SafeUnknownIncrementReference(v23, v22);
      v27 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97____(
              v25,
              v24,
              v26,
              (__int64 *)&v30);
      LastError = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v27);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v30);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_25;
      }
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
      ((void (__fastcall *)(IUnknown *, _QWORD))this[10]->lpVtbl[3].AddRef)(this[10], 0LL);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v30);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
      v30 = *a3;
      PrimaryMonitor = WindowArrangementView::UpdateView(this, &v30, 0LL);
      LastError = PrimaryMonitor;
      if ( PrimaryMonitor < 0 )
      {
        v12 = 1199LL;
        goto LABEL_33;
      }
    }
    LastError = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)PlaceModePoint);
  return LastError;
}
