/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C009D580
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C009D640 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 NtMITGetCursorUpdateHandle()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  CInputThreadBase *v3; // rdi
  char *v4; // rbx
  __int64 CursorUpdateHandle; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CMouseSensor *v10; // rcx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
  {
    CursorUpdateHandle = -1LL;
    goto LABEL_9;
  }
  v3 = gpInputThread;
  v4 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  LODWORD(v3) = *((_DWORD *)v3 + 6);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  CursorUpdateHandle = -1LL;
  if ( (_DWORD)v3 == 2 )
  {
LABEL_9:
    UserSetLastError(5LL, v0, v1, v2);
    goto LABEL_7;
  }
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = qword_1C0288018;
  if ( qword_1C0288018 )
    CursorUpdateHandle = (__int64)CMouseSensor::GetCursorUpdateHandle(qword_1C0288018);
LABEL_7:
  UserSessionSwitchLeaveCrit((__int64)v10, v6, v8, v9);
  return CursorUpdateHandle;
}
