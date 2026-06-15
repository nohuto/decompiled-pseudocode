/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18002EAB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdDisplayNotificationCallback(DWORD SessionId, __int64 a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct TSSession *v6; // r14
  int v7; // r13d
  int v8; // r15d
  _DWORD *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  struct TSSession *v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-29h] BYREF
  struct TSSession **v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  struct _RTL_CRITICAL_SECTION **v20; // [rsp+80h] [rbp+7h]
  __int64 v21; // [rsp+88h] [rbp+Fh]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v5;
  if ( a3[4] != 4 )
  {
    if ( v5 )
      goto LABEL_23;
    return 0LL;
  }
  if ( *(_QWORD *)a3 != *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    || *((_QWORD *)a3 + 1) != *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    if ( v5 )
LABEL_23:
      LeaveCriticalSection(v5);
    return 0LL;
  }
  if ( (int)TsSessionFromSessionId(SessionId, 0, &v13) < 0 )
  {
    if ( !v5 )
      return 0LL;
LABEL_8:
    LeaveCriticalSection(v5);
    return 0LL;
  }
  v6 = v13;
  v7 = *((_DWORD *)v13 + 253);
  v8 = a3[5] != 0;
  *((_DWORD *)v13 + 253) = v8;
  v9 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v9 > 4u )
  {
    v14 = *((_DWORD *)v6 + 253);
    LODWORD(v15) = v7 != v8;
    LODWORD(v13) = SessionId;
    v22 = &v14;
    v23 = 4;
    v24 = 0;
    v20 = &v15;
    v21 = 4LL;
    v17 = &v13;
    v18 = 4;
    v19 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v9, (unsigned __int8 *)dword_1800512AA, 0LL, 0LL, 5u, &v16);
  }
  if ( v7 == v8
    || !*((_DWORD *)v6 + 253) && !g_bLowPowerEpoch && *((_DWORD *)v6 + 254) && !g_bApmSuspended
    || (v16.Ptr = (ULONGLONG)off_180048988,
        v16.Size = SessionId,
        v21 = (__int64)&v16,
        v10 = QueueGenericWorkItem(&v16),
        v11 = v10,
        v10 >= 0) )
  {
    if ( !v5 )
      return 0LL;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76A,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v10);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v11;
}
