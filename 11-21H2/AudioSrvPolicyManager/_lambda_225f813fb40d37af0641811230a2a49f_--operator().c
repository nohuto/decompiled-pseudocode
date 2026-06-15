/*
 * XREFs of _lambda_225f813fb40d37af0641811230a2a49f_::operator() @ 0x180008ED8
 * Callers:
 *     ?GlobalUserPresenceNotificationCallback@@YAKPEAXK0@Z @ 0x180009F40 (-GlobalUserPresenceNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?RefreshVolumesForAllTsSessions@@YAXXZ @ 0x18002C778 (-RefreshVolumesForAllTsSessions@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_225f813fb40d37af0641811230a2a49f_::operator()(__int64 **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  enum _USER_ACTIVITY_PRESENCE v4; // ebx
  _DWORD *v5; // rcx
  enum _USER_ACTIVITY_PRESENCE v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  enum _USER_ACTIVITY_PRESENCE *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = **a1;
  if ( *(_DWORD *)(v3 + 16) != 4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)0x80070057LL);
    if ( v2 )
      goto LABEL_15;
    return 2147942487LL;
  }
  if ( *(_QWORD *)v3 != *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1
    || *(_QWORD *)(v3 + 8) != *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)0x80070057LL);
    if ( v2 )
LABEL_15:
      LeaveCriticalSection(v2);
    return 2147942487LL;
  }
  v4 = g_GlobalUserPresence;
  g_GlobalUserPresence = *(_DWORD *)(v3 + 20);
  v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v5 > 4u )
  {
    v7 = g_GlobalUserPresence;
    v9 = &v7;
    v10 = 4;
    v11 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180050C13, 0LL, 0LL, 3u, &v8);
  }
  if ( v4 && g_GlobalUserPresence == PowerUserPresent )
    RefreshVolumesForAllTsSessions();
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
