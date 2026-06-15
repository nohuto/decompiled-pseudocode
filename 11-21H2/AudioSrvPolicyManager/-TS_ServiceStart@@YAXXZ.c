/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x18002D3D8
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800256B4 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

void TS_ServiceStart(void)
{
  const char *v0; // r9
  _DWORD *v1; // rcx
  struct TSSession *v2; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v3[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-48h] BYREF
  struct TSSession **v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, v3) )
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x947,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      v0);
    g_MaxSessions = 1;
  }
  TsSessionCreate(0, &v2);
  v1 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v1 > 4u )
  {
    v7 = 0;
    LODWORD(v2) = g_MaxSessions;
    v6 = 4;
    v5 = &v2;
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1800511E2, 0LL, 0LL, 3u, &v4);
  }
}
