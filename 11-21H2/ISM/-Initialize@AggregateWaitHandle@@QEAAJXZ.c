/*
 * XREFs of ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x1800484EC
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003D284 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     <none>
 */

signed int __fastcall AggregateWaitHandle::Initialize(HANDLE *this)
{
  HANDLE IoCompletionPort; // rax
  HANDLE CurrentProcess; // rax
  HANDLE v4; // rdi
  void *v5; // rbx
  HANDLE v6; // rax
  signed int result; // eax
  signed int LastError; // eax
  unsigned int v9; // ebx

  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  *this = IoCompletionPort;
  if ( IoCompletionPort )
  {
    CurrentProcess = GetCurrentProcess();
    v4 = *this;
    v5 = CurrentProcess;
    v6 = GetCurrentProcess();
    if ( DuplicateHandle(v6, v4, v5, this + 1, 0x100000u, 0, 0) )
    {
      SetHandleInformation(this[1], 2u, 2u);
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      CloseHandle(*this);
      *this = 0LL;
      return v9;
    }
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
