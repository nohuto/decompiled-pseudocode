/*
 * XREFs of ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180058A64
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x180057E10 (CDelayIAMOperations--CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___--operator().c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180057F20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180058AD0 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x180058F1C (-CanChangeForeground@@YAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180058FA4 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

signed int __fastcall CApplicationManager::_ActivateIamSpecialWindow(CApplicationManager *this)
{
  signed int result; // eax
  CApplicationManagerUtility *v3; // rax
  HWND v4; // rdx

  result = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(this);
  if ( result >= 0 )
  {
    result = CanChangeForeground();
    if ( result >= 0 )
    {
      v3 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
      result = CApplicationManagerUtility::SetForegroundWindow(v3, v4);
      if ( result >= 0 )
      {
        if ( AllowSetForegroundWindow(0xFFFFFFFF) )
        {
          return 0;
        }
        else
        {
          result = GetLastError();
          if ( result > 0 )
            return (unsigned __int16)result | 0x80070000;
        }
      }
    }
  }
  return result;
}
