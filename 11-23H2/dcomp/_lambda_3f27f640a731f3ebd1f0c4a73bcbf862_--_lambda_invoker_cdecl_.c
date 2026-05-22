/*
 * XREFs of _lambda_3f27f640a731f3ebd1f0c4a73bcbf862_::_lambda_invoker_cdecl_ @ 0x18008E040
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

void __fastcall lambda_3f27f640a731f3ebd1f0c4a73bcbf862_::_lambda_invoker_cdecl_(void *a1, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  signed int LastError; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( !DuplicateHandle(v5, a1, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  InputTraceLogging::InputSink::Duplicate(a1, *lpTargetHandle);
}
