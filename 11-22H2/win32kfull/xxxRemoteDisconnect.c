/*
 * XREFs of xxxRemoteDisconnect @ 0x1C0130984
 * Callers:
 *     NtUserRemoteDisconnect @ 0x1C0130720 (NtUserRemoteDisconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0130758 (xxxRemoteStopScreenUpdates.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0130D28 (GreDxgkPreSessionDisconnected.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0130D6C (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0130E44 (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1C0130F10 (RemoveInputDevices.c)
 *     RemoteRedrawScreen @ 0x1C01334E0 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C01350C4 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0135390 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C01356C0 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  __int64 v0; // rdx
  __int64 Timer_high; // rcx
  __int64 RemoteContext; // rbp
  __int64 v3; // r8
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 DxgkWin32kInterface; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-70h] BYREF
  int v22; // [rsp+68h] [rbp-60h]
  char v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+90h] [rbp-38h]

  memset_0(v20, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v24 = MEMORY[0xFFFFF78000000014];
  v22 = 21;
  v23 = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v4 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 4) == 0)
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      15,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(Timer_high, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType && !(unsigned int)UserIsWddmConnectedSession() )
  {
    GreDxgkPreSessionDisconnected(0LL);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
    (*(void (__fastcall **)(_QWORD))(DxgkWin32kInterface + 376))(0LL);
  }
  gdwHydraHint |= 0x10u;
  memset_0(gstrBaseWinStationName, 0, 0x40uLL);
  if ( gfSessionSwitchBlock )
    return 3221226029LL;
  if ( !gProtocolType && !gbGDIOn )
  {
    v4 = 1;
    PowerOnGdi(v20, 1LL, 4LL);
  }
  SetConsoleSwitchInProgress(1LL);
  if ( gspdeskDisconnect
    || (Timeout.QuadPart = -3000000000LL,
        UserSessionSwitchLeaveCrit(v6, v5, v7, v8),
        KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout),
        EnterCrit(1LL, 0LL),
        gspdeskDisconnect) )
  {
    v9 = xxxRemoteStopScreenUpdates(v6, v5, v7);
    if ( v9 >= 0 )
    {
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        LOBYTE(v10) = gProtocolType == 0;
        GreDxgkPreSessionDisconnected(v10);
        v9 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v20);
        v13 = DxDdGetDxgkWin32kInterface(v12, v11);
        LOBYTE(v14) = gProtocolType == 0;
        (*(void (__fastcall **)(__int64))(v13 + 376))(v14);
        if ( v9 < 0 )
        {
          RemoteRedrawScreen();
          goto LABEL_28;
        }
        DrvCloseGraphicsDevices(gProtocolType == 0);
      }
      else
      {
        GreDrvDisconnect(RemoteContext);
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
      CitSessionConnectChange(0LL, 0LL);
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
    }
  }
  else
  {
    v9 = -1073741823;
  }
LABEL_28:
  SetConsoleSwitchInProgress(0LL);
  if ( v9 < 0 && v4 == 1 )
    PowerOffGdi();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)v9;
}
