/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C0084F90
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 InputBuffer; // [rsp+38h] [rbp-30h] BYREF
  int v22; // [rsp+40h] [rbp-28h]
  int v23; // [rsp+44h] [rbp-24h]
  int v24; // [rsp+48h] [rbp-20h]

  v4 = a3;
  v5 = a1;
  if ( !gbNonServiceSession && (_BYTE)a2 )
    return *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 712) != 0 ? 0x103 : 0;
  InputBuffer = 90LL;
  v22 = 0;
  v7 = (unsigned int *)SGDGetUserSessionState(a1, a2, a3, a4);
  v11 = *v7;
  v24 = *v7;
  if ( v5 )
    v23 = 0;
  else
    v23 = (v4 != 0) + 1;
  UserSessionSwitchLeaveCrit(v11, v8, v9, v10);
  v17 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  if ( v17 && v17 != 259 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2078LL);
  v12 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v18, v19, v20);
  gptiCurrent = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v16 = *v15;
          v15[2] = 0LL;
          if ( !*(_DWORD *)(v16 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v15);
        }
      }
    }
  }
  return v17;
}
