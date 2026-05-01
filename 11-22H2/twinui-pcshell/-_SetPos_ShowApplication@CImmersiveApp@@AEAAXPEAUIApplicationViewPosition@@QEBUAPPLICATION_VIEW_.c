/*
 * XREFs of ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180068160
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002368C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180024624 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1803A7ED0 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x1803C3DF0 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::_SetPos_ShowApplication(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  int updated; // ebp
  void (__fastcall *v7)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  char v9; // di
  int v10; // eax
  PSRWLOCK v12; // rbx
  char *Ptr; // rdx
  PVOID v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rdx
  char *v17; // rax
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  updated = CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  v20 = 0LL;
  v7 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 112) + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v20);
  v7(a1 + 112, AddressOf);
  if ( a5 && updated == 1 )
  {
    v9 = 1;
    v12 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
      || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                &CApplicationManagerUtility::g_pIAMGlobals[1],
                Ptr + 1) >= 0 )
    {
      v14 = v12[2].Ptr;
      v12[2].Ptr = (char *)v14 + 1;
      v15 = (char *)v12[1].Ptr + 4 * (_QWORD)v14;
      if ( v15 )
        *v15 = 2;
    }
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(a1 + 488) = 1;
  v10 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
  if ( v10 < 0 )
  {
    v16 = 7403LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 80LL))(*(_QWORD *)(a1 + 440));
    if ( v10 >= 0 )
      goto LABEL_5;
    v16 = 7406LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v10,
    v18);
LABEL_5:
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 700));
  if ( v9 )
  {
    v17 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( v17 )
      CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v17 - 1;
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
      9LL);
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
      10LL);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
}
