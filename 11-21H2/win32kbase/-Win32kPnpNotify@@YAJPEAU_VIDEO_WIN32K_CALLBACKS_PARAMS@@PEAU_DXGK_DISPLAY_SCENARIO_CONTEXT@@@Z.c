/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     DrvLogDiagDisplayChange @ 0x1C0067780 (DrvLogDiagDisplayChange.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C007F550 (DxgkEngNotifyDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C0090610 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C014304C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C01735B0 (DrvCleanupGraphicsDevices.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C023E368 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C023E394 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  __int64 v6; // r14
  PVOID PhysDisp; // rbp
  wchar_t *i; // rax
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+60h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp-30h]
  char v13; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
  DrvLogDiagDisplayChange((__int64)a1, 6);
  v6 = *((_QWORD *)gpDispInfo + 2);
  if ( a1->Param )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      v12 = 0LL;
      v11 = 0LL;
      gcLocalNextGlobalDeviceNumber = 0;
      DrvUpdateGraphicsDeviceList(1);
      v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
      if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
        v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
      if ( *v9 )
      {
        if ( gbGDIOn && !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) )
          v4 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___();
        goto LABEL_46;
      }
      if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 )
        goto LABEL_39;
      if ( qword_1C029C358 )
      {
        v4 = qword_1C029C358(grpdeskRitInput, &v11);
        if ( v4 >= 0 )
        {
LABEL_39:
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C029C368 )
            qword_1C029C368(&v11, 0LL);
        }
      }
      else
      {
        v4 = -1073741637;
      }
    }
LABEL_46:
    v10 = PnpNotifyForRemoteSession(0LL, a2);
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      v4 = v10;
    goto LABEL_48;
  }
  PhysDisp = a1->PhysDisp;
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( *((PVOID *)i + 18) == PhysDisp )
      *((_DWORD *)i + 41) |= 1u;
  }
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(v6) || !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_26;
  v12 = 0LL;
  v11 = 0LL;
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 )
    goto LABEL_17;
  if ( qword_1C029C358 )
  {
    v4 = qword_1C029C358(grpdeskRitInput, &v11);
    if ( v4 >= 0 )
    {
LABEL_17:
      v13 = 0;
      v4 = xxxUserSetDisplayConfig(
             0,
             0LL,
             0x88Fu,
             0x406u,
             (__int64)grpdeskRitInput,
             0,
             0LL,
             0LL,
             &v13,
             (__int64)a2,
             0LL);
      if ( v4 < 0 )
      {
        v4 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
      }
      else if ( a1->SurpriseRemoval && v13 )
      {
        DxgkEngNotifyDisplayChange(0);
      }
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C029C368 )
        qword_1C029C368(&v11, 0LL);
    }
  }
  else
  {
    v4 = -1073741637;
  }
LABEL_26:
  PnpNotifyForRemoteSession(PhysDisp, a2);
  if ( v4 >= 0 )
    DrvCleanupGraphicsDevices(PhysDisp);
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    DrvUpdateGraphicsDeviceList(1);
  if ( a1->LockUserSession )
    PostWinlogonMessage(1027LL, 0);
LABEL_48:
  if ( !gProtocolType && !gPowerTransitionsState
    || (unsigned int)UserRemoteConnectedSessionUsingWddm() && gbFreezeScreenUpdates )
  {
    DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
  }
  return (unsigned int)v4;
}
