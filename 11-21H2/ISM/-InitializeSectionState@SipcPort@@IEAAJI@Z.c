/*
 * XREFs of ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x18002CB28
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18002C83C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800FD0B0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800FC61C (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SipcPort::InitializeSectionState(SipcPort *this, int a2)
{
  wil::details::in1diag0 *v4; // rcx
  HANDLE EventW; // rsi
  char *v6; // r14
  DWORD LastError; // ebx

  EventW = CreateEventW(0LL, 1, 0, 0LL);
  v6 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 1) = EventW;
  if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return wil::details::in1diag0::Return_GetLastError(v4);
  *((_DWORD *)this + 10) = a2;
  return 0LL;
}
