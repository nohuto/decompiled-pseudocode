/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002F5F8 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180030428 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionRefreshSessionInformation(DWORD *a1)
{
  _DWORD *v2; // rcx
  const char *v3; // r9
  LPWSTR v5; // rbp
  void *v6; // rsi
  DWORD LastError; // ebx
  DWORD v8; // [rsp+30h] [rbp-58h] BYREF
  LPWSTR ppBuffer; // [rsp+38h] [rbp-50h] BYREF
  DWORD pBytesReturned; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-40h] BYREF
  DWORD *v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+74h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v2 > 4u )
  {
    v8 = *a1;
    v12 = &v8;
    v13 = 4;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1800514DE, 0LL, 0LL, 3u, &v11);
  }
  ppBuffer = 0LL;
  if ( !WTSQuerySessionInformationW(0LL, *a1, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31A,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v3);
  EnterCriticalSection(&stru_18005C5D8);
  v5 = ppBuffer;
  v6 = (void *)*((_QWORD *)a1 + 3);
  if ( v6 )
  {
    LastError = GetLastError();
    WTSFreeMemory(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)a1 + 3) = v5;
  TsSessionRefreshUserSid((struct TSSession *)a1);
  LeaveCriticalSection(&stru_18005C5D8);
  return 0LL;
}
