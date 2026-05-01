/*
 * XREFs of ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1803A02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x180393628 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x180397644 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
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
