/*
 * XREFs of _lambda_0cfdefd299286392233da820e0fc925e_::operator() @ 0x18002B7FC
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x18002D710 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0cfdefd299286392233da820e0fc925e_::operator()(__int64 **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rsi
  DWORD v4; // r12d
  int v5; // eax
  unsigned int v6; // r14d
  struct TSSession *v8; // r14
  int v9; // r13d
  int v10; // r15d
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  struct TSSession *v14; // [rsp+38h] [rbp-49h] BYREF
  BOOL v15; // [rsp+40h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-29h] BYREF
  struct TSSession **v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  struct _RTL_CRITICAL_SECTION **v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  BOOL *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = v2;
  v3 = **a1;
  if ( *(_DWORD *)(v3 + 16) != 4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x791,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
    if ( v2 )
      goto LABEL_25;
    return 2147942487LL;
  }
  if ( *(_QWORD *)v3 != *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1
    || *(_QWORD *)(v3 + 8) != *(_QWORD *)GUID_CONSOLE_LOCKED.Data4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x791,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
    if ( v2 )
LABEL_25:
      LeaveCriticalSection(v2);
    return 2147942487LL;
  }
  v4 = *(_DWORD *)a1[1];
  v5 = TsSessionFromSessionId(v4, 0, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v14;
    v9 = *((_DWORD *)v14 + 254);
    v10 = *(_BYTE *)(v3 + 20) != 0;
    *((_DWORD *)v14 + 254) = v10;
    v11 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v11 > 4u )
    {
      v15 = v9 != v10;
      LODWORD(v16) = *((_DWORD *)v8 + 254);
      LODWORD(v14) = v4;
      v22 = &v15;
      v23 = 4LL;
      v20 = &v16;
      v21 = 4LL;
      v18 = &v14;
      v19 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_180051249, 0LL, 0LL, 5u, &v17);
    }
    if ( v9 != v10
      && (*((_DWORD *)v8 + 253) || g_bLowPowerEpoch || !*((_DWORD *)v8 + 254) || g_bApmSuspended)
      && (v17.Ptr = (ULONGLONG)off_180048958,
          v17.Size = v4,
          v21 = (__int64)&v17,
          v12 = QueueGenericWorkItem(&v17),
          v13 = v12,
          v12 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x791,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v12);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v13;
    }
    else
    {
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x791,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
}
