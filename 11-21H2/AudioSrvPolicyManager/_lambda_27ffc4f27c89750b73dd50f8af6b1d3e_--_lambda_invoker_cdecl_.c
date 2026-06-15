/*
 * XREFs of _lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_ @ 0x180013830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  char *v5; // rbp
  DWORD LastError; // ebx

  v4 = (struct _RTL_CRITICAL_SECTION *)(Context + 536);
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 536));
  v5 = (char *)*((_QWORD *)Context + 72);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)Context + 72) = 0LL;
  if ( v4 )
    LeaveCriticalSection(v4);
}
