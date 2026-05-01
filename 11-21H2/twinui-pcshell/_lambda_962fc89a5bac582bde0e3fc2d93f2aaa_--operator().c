/*
 * XREFs of _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1802E0B00
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x1802E1020 (CDelayIAMOperations--CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___--operator().c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1802E7CF0 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180058AD0 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x180058F1C (-CanChangeForeground@@YAJXZ.c)
 */

__int64 __fastcall lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(CApplicationManagerUtility **a1)
{
  __int64 result; // rax
  HWND v3; // rdx

  result = CanChangeForeground();
  if ( (int)result >= 0 )
    return CApplicationManagerUtility::SetForegroundWindow(*a1, v3);
  return result;
}
