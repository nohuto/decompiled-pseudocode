/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x180073C30
 * Callers:
 *     <none>
 * Callees:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180012608 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18005B9C0 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 */

void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator()(
        __int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 32)
    || (*(_BYTE *)(a1 + 48) & 4) != 0
    || CApplicationManager::_ActivateIamSpecialWindow(*(CApplicationManager **)(a1 + 16)) >= 0 )
  {
    CApplicationManager::_PerformDesktopActivationCallouts(
      *(CApplicationManager **)(a1 + 16),
      *(struct IObjectArray **)(a1 + 24),
      *(_DWORD *)(a1 + 48));
  }
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    SetEvent(*(HANDLE *)(v2 + 8));
}
