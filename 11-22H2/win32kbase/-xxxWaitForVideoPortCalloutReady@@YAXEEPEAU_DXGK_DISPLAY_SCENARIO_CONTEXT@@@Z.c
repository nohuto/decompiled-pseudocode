/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD1D4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     IsPowerOnGdiSupported @ 0x1C00C52AC (IsPowerOnGdiSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C00CDB9C (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C013EBDC (McTemplateK0tt_EtwWriteTransfer.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // si
  char v5; // di
  ULONG v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagTHREADINFO *v13; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)Object = 0LL;
  v4 = a2;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( *(_BYTE *)(SGDGetUserGdiSessionState(a1) + 1) )
      {
        v6 = 1;
        a1 = *(_QWORD *)(SGDGetUserGdiSessionState(a1) + 8);
        Object[0] = (PVOID)a1;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      UserSessionSwitchLeaveCrit(a1, v7, v8, v9);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      v13 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v10, v11, v12);
      gptiCurrent = v13;
      if ( v13 )
      {
        *((_DWORD *)v13 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              a1 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
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
        }
      }
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C0295948 )
      qword_1C0295948(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
