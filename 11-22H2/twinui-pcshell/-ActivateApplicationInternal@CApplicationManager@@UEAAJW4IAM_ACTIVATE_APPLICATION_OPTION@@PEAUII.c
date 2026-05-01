/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C7C0
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x18000C7A0 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x18000C8D0 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18000C918 (-_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImme.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1803A1ACC (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 */

__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  int v6; // ebx
  HWND v7; // rdx
  HWND LastActiveVisiblePopupOrSelf; // rdi
  HWND hWnd; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = CApplicationManager::_PrepareAppForActivation(a1 - 240, a2, a3, &hWnd);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                     (CApplicationManagerUtility *)hWnd,
                                     v7);
    if ( SetForegroundWindow(LastActiveVisiblePopupOrSelf) )
    {
      v6 = 0;
      if ( IsIconic(hWnd) )
        SwitchToThisWindow(hWnd, 1);
      if ( !(unsigned int)IsShellFrameWindow(LastActiveVisiblePopupOrSelf) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking(
          (CApplicationManager *)(a1 - 240),
          LastActiveVisiblePopupOrSelf,
          a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        LastActiveVisiblePopupOrSelf,
        3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)v6;
}
