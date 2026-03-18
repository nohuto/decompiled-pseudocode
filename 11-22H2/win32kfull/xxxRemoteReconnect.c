/*
 * XREFs of xxxRemoteReconnect @ 0x1C0132780
 * Callers:
 *     NtUserRemoteReconnect @ 0x1C0132740 (NtUserRemoteReconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     InitKeyboard @ 0x1C003EF0C (InitKeyboard.c)
 *     SetMouseTrails @ 0x1C005B9A8 (SetMouseTrails.c)
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C006CFB4 (DrvOcclusionStateChangeNotify.c)
 *     RegisterCDROMNotify @ 0x1C00BA9AC (RegisterCDROMNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0130758 (xxxRemoteStopScreenUpdates.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0130D6C (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0130E44 (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1C0130F10 (RemoveInputDevices.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C013324C (GreMultiUserSetDisplayDriverName.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0133350 (DrvOpenLocalGraphicsDevices.c)
 *     RemoteRedrawScreen @ 0x1C01334E0 (RemoteRedrawScreen.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01336A8 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     AttachInputDevices @ 0x1C01336F4 (AttachInputDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0133778 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C01350C4 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138B94 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0138BBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     GreDrvReconnect @ 0x1C02DCE84 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 RemoteContext; // r13
  _UNKNOWN **v7; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  NTSTATUS Win32kDriverObject; // esi
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rcx
  wchar_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  void *v24; // rax
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  BOOL v29; // r12d
  int v30; // r12d
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  void (__fastcall *v40)(__int64, _QWORD); // rdi
  unsigned int RemoteDeviceCount; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  bool v46; // zf
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  _UNKNOWN **v51; // r8
  PVOID *Object; // [rsp+20h] [rbp-398h]
  int HandleInformation; // [rsp+28h] [rbp-390h]
  __int64 v54; // [rsp+30h] [rbp-388h]
  _BYTE v55[4]; // [rsp+60h] [rbp-358h] BYREF
  int v56; // [rsp+64h] [rbp-354h] BYREF
  unsigned __int16 v57; // [rsp+68h] [rbp-350h]
  BOOL v58; // [rsp+6Ch] [rbp-34Ch]
  void *v59; // [rsp+70h] [rbp-348h]
  int v60; // [rsp+78h] [rbp-340h]
  int v61; // [rsp+7Ch] [rbp-33Ch]
  int v62; // [rsp+80h] [rbp-338h]
  int v63; // [rsp+84h] [rbp-334h]
  PVOID v64; // [rsp+88h] [rbp-330h] BYREF
  int v65; // [rsp+94h] [rbp-324h]
  unsigned int v66; // [rsp+98h] [rbp-320h]
  PVOID v67; // [rsp+A0h] [rbp-318h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-310h]
  _BYTE v69[328]; // [rsp+B8h] [rbp-300h] BYREF
  _BYTE v70[32]; // [rsp+200h] [rbp-1B8h] BYREF
  __int64 v71; // [rsp+220h] [rbp-198h]
  __int64 v72; // [rsp+228h] [rbp-190h]
  __int64 v73; // [rsp+230h] [rbp-188h]
  __int64 v74; // [rsp+238h] [rbp-180h]
  __int64 v75; // [rsp+240h] [rbp-178h]
  __int128 v76; // [rsp+250h] [rbp-168h]
  __int128 v77; // [rsp+260h] [rbp-158h]
  __int128 v78; // [rsp+270h] [rbp-148h]
  __int128 v79; // [rsp+280h] [rbp-138h]
  _BYTE v80[58]; // [rsp+290h] [rbp-128h] BYREF
  __int128 v81; // [rsp+2CAh] [rbp-EEh]
  __int16 v82; // [rsp+2DAh] [rbp-DEh]
  __int128 v83; // [rsp+2DCh] [rbp-DCh]
  int v84; // [rsp+2ECh] [rbp-CCh]
  int v85; // [rsp+2F0h] [rbp-C8h]
  int v86; // [rsp+2F4h] [rbp-C4h]
  unsigned __int16 v87; // [rsp+308h] [rbp-B0h]
  __int64 v88; // [rsp+30Ch] [rbp-ACh]
  int v89; // [rsp+314h] [rbp-A4h]
  int v90; // [rsp+318h] [rbp-A0h]
  int v91; // [rsp+31Ch] [rbp-9Ch]
  int v92; // [rsp+324h] [rbp-94h]
  _BYTE v93[8]; // [rsp+340h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+348h] [rbp-70h] BYREF
  int v95; // [rsp+358h] [rbp-60h]
  char v96; // [rsp+370h] [rbp-48h]
  __int64 v97; // [rsp+380h] [rbp-38h]

  v68 = a1;
  memset_0(v93, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v97 = MEMORY[0xFFFFF78000000014];
  v95 = 22;
  v96 = -1;
  v58 = 0;
  v60 = 0;
  v61 = 0;
  v65 = *(_DWORD *)(SGDGetUserSessionState(v2) + 15936) + 1;
  v63 = 0;
  v62 = 0;
  v57 = gProtocolType;
  memset_0(v70, 0, 0x140uLL);
  v56 = 0;
  v59 = 0LL;
  LODWORD(v3) = 0;
  RemoteContext = GreGetRemoteContext();
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      16,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(v7, v4, v5) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v8 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  v9 = v69;
  v10 = 2LL;
  do
  {
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9 += 8;
    *(v9 - 1) = v8[7];
    v8 += 8;
    --v10;
  }
  while ( v10 );
  *v9 = *v8;
  v9[1] = v8[1];
  v9[2] = v8[2];
  v9[3] = v8[3];
  v11 = v70;
  v12 = v69;
  v13 = 2LL;
  do
  {
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    v11[6] = v12[6];
    v11 += 8;
    *(v11 - 1) = v12[7];
    v12 += 8;
    --v13;
  }
  while ( v13 );
  *v11 = *v12;
  v11[1] = v12[1];
  v11[2] = v12[2];
  v11[3] = v12[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  result = PopulateUMKMHandlePair(v73, gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(v74, gRemoteKeyboardChannelHandlePair);
    Win32kDriverObject = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      ghRemoteVideoChannel = v71;
      ghRemoteBeepChannel = v72;
      ghRemoteThinwireChannel = v75;
      gRemoteClientKeyboardType = v88;
      *((_DWORD *)&gRemoteClientKeyboardType + 2) = v89;
      v16 = v85;
      *(_DWORD *)(SGDGetUserSessionState(gRemoteClientKeyboardType) + 15912) = v16;
      v17 = v86;
      *(_DWORD *)(SGDGetUserSessionState(v18) + 13820) = v17;
      v66 = gbRemoteFxSession;
      gbRemoteFxSession = v92;
      *(_DWORD *)(RemoteContext + 64) = v92;
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
      *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
      *(_OWORD *)&gstrBaseWinStationName = v76;
      *((_OWORD *)&gstrBaseWinStationName + 1) = v77;
      *((_OWORD *)&gstrBaseWinStationName + 2) = v78;
      *((_OWORD *)&gstrBaseWinStationName + 3) = v79;
      gWinStationInfo = v81;
      *((_WORD *)&gWinStationInfo + 8) = v82;
      *(_OWORD *)((char *)&gWinStationInfo + 20) = v83;
      *((_DWORD *)&gWinStationInfo + 9) = v84;
      v19 = wcschr(gstrBaseWinStationName, 0x23u);
      if ( v19 )
        *v19 = 0;
      if ( gProtocolType )
      {
        FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v56, 0);
        v21 = gpsi;
        if ( !v56 )
        {
          *(_DWORD *)(gpsi + 2236LL) &= ~4u;
          goto LABEL_24;
        }
      }
      else
      {
        v21 = gpsi;
      }
      *(_DWORD *)(v21 + 2236) |= 4u;
LABEL_24:
      v22 = *(_QWORD *)(RemoteContext + 40);
      if ( v22 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(v22 + 2 * v23) );
        v3 = v23 + 1;
        v24 = (void *)Win32AllocPoolWithQuotaZInit(2 * v3, 2020897621LL);
        v25 = v24;
        v59 = v24;
        if ( !v24 )
        {
          Win32kDriverObject = -1073741801;
          goto LABEL_75;
        }
        memmove(v24, *(const void **)(RemoteContext + 40), 2 * v3);
      }
      v26 = gVideoFileObject;
      if ( !gVideoFileObject && ghRemoteVideoChannel )
      {
        v67 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v67, 0LL);
        if ( Win32kDriverObject >= 0 )
        {
          gVideoFileObject = v67;
          IoGetRelatedDeviceObject((PFILE_OBJECT)v67);
          v64 = 0LL;
          Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v64, 0LL);
          gThinwireFileObject = v64;
          if ( Win32kDriverObject >= 0
            && !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                gRemotePrimaryMonitor,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                v80,
                                19,
                                gRemoteDisplayDeviceName) )
          {
            Win32kDriverObject = -1073741823;
          }
        }
      }
      else if ( !ghRemoteVideoChannel
             && !(unsigned int)GreMultiUserInitSession(
                                 RemoteContext,
                                 ghRemoteThinwireChannel,
                                 gpThinWireCache,
                                 gRemoteNumMonitors,
                                 gRemotePrimaryMonitor,
                                 gVideoFileObject,
                                 gThinwireFileObject,
                                 8,
                                 v80,
                                 19,
                                 gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
      if ( Win32kDriverObject < 0 )
        goto LABEL_128;
      v27 = ghRemoteBeepChannel;
      if ( ghRemoteBeepChannel )
      {
        v64 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v64, 0LL);
        gpRemoteBeepDevice = v64;
      }
      if ( Win32kDriverObject < 0 )
      {
LABEL_128:
        v25 = v59;
        goto LABEL_75;
      }
      if ( gnShadowers )
        xxxRemoteStopScreenUpdates(v27, v26, v20);
      v25 = v59;
      if ( v87 == gPreviousProtocolType || !gPreviousProtocolType )
      {
        v29 = 0;
      }
      else
      {
        if ( v59 )
        {
          v28 = GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v3 - 1), v59);
          v29 = 0;
          if ( !v28 )
            goto LABEL_103;
        }
        else
        {
          v29 = 0;
        }
        Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                               grpdeskRitInput,
                               gProtocolType,
                               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v93);
        if ( Win32kDriverObject < 0 )
        {
LABEL_75:
          SetMouseTrails(v65);
          v46 = Win32kDriverObject == 0;
          if ( Win32kDriverObject < 0 )
          {
            if ( v58 )
              GreDrvDisconnect(RemoteContext);
            v46 = Win32kDriverObject == 0;
          }
          if ( v46 && !gProtocolType )
          {
            v47 = (unsigned int *)SGDGetUserSessionState(v45);
            RtlSetActiveConsoleId(*v47);
          }
          if ( !gProtocolType )
            DrvNotifySessionStateChange(4LL);
          if ( Win32kDriverObject < 0 )
            CleanupRemoteHandles(RemoteContext);
          SetConsoleSwitchInProgress(0LL);
          LOBYTE(v48) = 1;
          DxgkEngNotifyDisplayChange(v48);
          if ( Win32kDriverObject < 0 )
          {
            v50 = v66;
            gbRemoteFxSession = v66;
            *(_DWORD *)(RemoteContext + 64) = v66;
            if ( v60 )
              UnregisterDeviceClassNotifications();
            if ( v61 )
              DrvCloseGraphicsDevices(1LL);
            if ( v62 )
              SetProtocolType(v57);
            if ( v63 )
              DrvSetGraphicsDevices(v80);
          }
          if ( v25 )
            Win32FreePool(v25);
          if ( !Win32kDriverObject )
          {
            v49 = gProtocolType;
            if ( gProtocolType )
              DrvEscapeRemoteDrivers(
                *(_QWORD *)(gpDispInfo + 16LL),
                gProtocolType,
                *(_QWORD *)(RemoteContext + 40),
                6LL,
                0LL,
                0);
          }
          DrvOcclusionStateChangeNotify(v50, v49);
          DispBrokerAsyncSessionSwitched();
          return (unsigned int)Win32kDriverObject;
        }
        if ( *(_DWORD *)(v68 + 288) )
          DrvCloseRemoteGraphicsDevices();
        if ( v25 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v80) )
        {
LABEL_103:
          Win32kDriverObject = -1073741823;
          goto LABEL_75;
        }
      }
      SetProtocolType(v87);
      if ( !gProtocolType )
        DrvNotifySessionStateChange(3LL);
      v62 = 1;
      if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      {
        if ( gProtocolType == gPreviousProtocolType )
        {
          Win32kDriverObject = GreDrvReconnect(RemoteContext);
          LOBYTE(v29) = Win32kDriverObject >= 0;
          v58 = v29;
          v30 = 0;
        }
        else
        {
          v30 = 1;
          Win32kDriverObject = GreDrvConnect(RemoteContext);
          v58 = Win32kDriverObject >= 0;
        }
      }
      else
      {
        v30 = 1;
        if ( !gProtocolType )
        {
          Win32kDriverObject = DrvOpenLocalGraphicsDevices();
          if ( Win32kDriverObject < 0 )
            goto LABEL_75;
          v61 = 1;
        }
      }
      v63 = 1;
      if ( (unsigned int)DrvSetGraphicsDevices(v80) )
      {
        DispBrokerAsyncSessionSwitched();
        if ( v90 || (v33 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v91 )
        {
          Win32kDriverObject = 0;
          if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
            || (unsigned int)DrvSessionHasAnyGraphicsDevice() )
          {
            if ( v91 || (v34 = 2191LL, !gProtocolType) )
              v34 = 2447LL;
            v54 = 0LL;
            LOBYTE(HandleInformation) = 0;
            Object = (PVOID *)gspdeskShouldBeForeground;
            Win32kDriverObject = xxxUserSetDisplayConfig(0LL, 0LL, v34, 2LL);
            if ( Win32kDriverObject < 0 )
            {
              LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v51 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v35,
                  (_DWORD)v51,
                  17,
                  4,
                  3,
                  17,
                  (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
              }
              goto LABEL_75;
            }
          }
        }
        v36 = gProtocolType;
        if ( gProtocolType )
        {
          if ( v30
            && !(unsigned int)DrvEscapeRemoteDrivers(
                                *(_QWORD *)(gpDispInfo + 16LL),
                                gProtocolType,
                                *(_QWORD *)(RemoteContext + 40),
                                2LL,
                                gptmrWD,
                                8) )
          {
            Win32kDriverObject = -1073741823;
          }
          AttachInputDevices(0LL);
        }
        else
        {
          if ( gPreviousProtocolType )
            RemoveInputDevices(v33);
          if ( !gpWin32kDriverObject )
            Win32kDriverObject = GetWin32kDriverObject(v33, v36, v31, v32, Object, HandleInformation, v54);
          AttachInputDevices(1LL);
          (**(void (__fastcall ***)(PVOID))P)(P);
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v55);
          RegisterCDROMNotify();
          v60 = 1;
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v55);
        }
        RemoteRedrawScreen();
        InitKeyboard();
        UpdateKeyLights(0LL);
        SetPointer(1LL);
        v37 = gCursorSuppressionState;
        gCursorSuppressionState = 9;
        TransitionCursorSuppressionState(0xAu, 0);
        if ( ((v37 - 1) & 0xFFFFFFFB) != 0 )
          v37 = 2;
        TransitionCursorSuppressionState(v37, 0);
        SetConnectedState(1LL, gbConnectCompleted);
        if ( gProtocolType )
        {
          FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v56, 0);
          v39 = gpsi;
          if ( !v56 )
          {
            *(_DWORD *)(gpsi + 2236LL) &= ~4u;
            goto LABEL_74;
          }
        }
        else
        {
          v39 = gpsi;
        }
        *(_DWORD *)(v39 + 2236) |= 4u;
LABEL_74:
        v40 = *(void (__fastcall **)(__int64, _QWORD))(DxDdGetDxgkWin32kInterface(v39, v38) + 384);
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v42) = gProtocolType == 0;
        v40(v42, RemoteDeviceCount);
        LOBYTE(v43) = gProtocolType == 0;
        LOBYTE(v44) = 1;
        CitSessionConnectChange(v44, v43);
        v25 = v59;
        goto LABEL_75;
      }
      if ( gnShadowers )
        RemoteRedrawScreen();
      goto LABEL_103;
    }
  }
  return result;
}
