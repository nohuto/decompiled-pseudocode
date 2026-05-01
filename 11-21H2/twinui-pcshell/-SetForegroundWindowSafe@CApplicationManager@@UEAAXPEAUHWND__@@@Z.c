/*
 * XREFs of ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1802E7CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180058438 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1802DC2AC (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1802E0B00 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 */

void __fastcall CApplicationManager::SetForegroundWindowSafe(int **this, CApplicationManagerUtility *a2)
{
  DWORD WindowThreadProcessId; // ebx
  CApplicationManagerUtility *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)this)
    || (WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, 0LL), WindowThreadProcessId == GetCurrentThreadId()) )
  {
    CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___(this[70], &v5);
  }
  else
  {
    lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(&v5);
  }
}
