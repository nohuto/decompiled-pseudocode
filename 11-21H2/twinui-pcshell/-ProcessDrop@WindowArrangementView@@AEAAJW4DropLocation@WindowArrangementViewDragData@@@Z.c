/*
 * XREFs of ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18051AFC0
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180519050 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18051946C (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x180518920 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180519138 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180519620 (-GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIAp.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18051B2AC (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::ProcessDrop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  HRESULT v6; // eax
  HRESULT Service; // eax
  unsigned int v8; // ebx
  int (__fastcall ***v9)(void *, GUID *, struct IAppLayoutOperationBuilder **); // rbx
  int v10; // eax
  int (__fastcall *v11)(void *, GUID *, struct IAppLayoutOperationBuilder **); // rdi
  int v12; // eax
  void *v13; // rcx
  void *v15; // rcx
  struct IAppLayoutOperationBuilder *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *ppvOut; // [rsp+70h] [rbp+30h] BYREF
  struct ITabletModePositioner *v19; // [rsp+78h] [rbp+38h] BYREF

  v5 = WindowArrangementView::DropLocationToArrangementAction(a1, a2);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 72) + 104LL))(*(_QWORD *)(v4 + 72));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 208LL))(*(_QWORD *)(a1 + 80));
    if ( v5 == 6 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             *(IUnknown **)(a1 + 16),
             &stru_1806EB5F0,
             &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
             &ppvOut);
      if ( v6 >= 0 )
        ApplicationViewHelpers::CloseView(
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 88),
          (__int64)ppvOut,
          *(_DWORD *)(a1 + 292) != 0,
          1,
          23);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( *(_DWORD *)(a1 + 288) != 1 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
      Service = IUnknown_QueryService(
                  *(IUnknown **)(a1 + 16),
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  (void **)&v19);
      v8 = Service;
      if ( Service < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C4,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)Service);
LABEL_22:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
        return v8;
      }
      ppvOut = 0LL;
      if ( a2 != 6
        || *(_DWORD *)(a1 + 288) == 2
        || (WindowArrangementView::GetAppViewCloseOverrideOperation(
              (WindowArrangementView *)a1,
              (__int64 (__fastcall ***)(struct ITabletModePositioner *, GUID *, __int64 *))v19,
              *(struct IApplicationView **)(a1 + 88),
              (struct IAppLayoutOperation **)&ppvOut),
            (v9 = (int (__fastcall ***)(void *, GUID *, struct IAppLayoutOperationBuilder **))ppvOut) == 0LL) )
      {
        v10 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &ppvOut);
        v8 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D2,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_20;
        }
        v9 = (int (__fastcall ***)(void *, GUID *, struct IAppLayoutOperationBuilder **))ppvOut;
      }
      v16[0] = 0LL;
      v11 = **v9;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      if ( v11(v9, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32, v16) >= 0 )
        WindowArrangementView::AddTempAppVisualsToLayoutOperation((const struct _GUID *)a1, v16[0]);
      v12 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, void *))(*(_QWORD *)v19 + 88LL))(v19, ppvOut);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5DF,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
LABEL_20:
        v13 = ppvOut;
        if ( ppvOut )
        {
          ppvOut = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      v15 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
    }
  }
  return 0LL;
}
