/*
 * XREFs of ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180021344
 * Callers:
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800212CC (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1801575B0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 * Callees:
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x180021418 (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x180021DA0 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_HideApplication(__int64 a1)
{
  int v2; // ebx
  char v3; // cl
  unsigned int v4; // esi
  HWND ForegroundWindow; // rax
  HWND VisibleRootOwner; // rbx

  v2 = *(_DWORD *)(a1 + 576) & 2;
  if ( (*(_DWORD *)(a1 + 576) & 4) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( !v2 )
      goto LABEL_8;
  }
  if ( v3 )
  {
    CImmersiveApp::CImmersiveWindowCollection::HideVisibleAppWindow(a1 + 288);
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 708));
  }
  v4 = (v2 != 0) + 1;
  if ( v2 )
  {
    ForegroundWindow = GetForegroundWindow();
    VisibleRootOwner = (HWND)CApplicationManagerUtility::GetVisibleRootOwner(ForegroundWindow, 0LL);
    if ( VisibleRootOwner == CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288)) )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
  }
LABEL_8:
  *(_DWORD *)(a1 + 664) = 0;
  return v4;
}
