/*
 * XREFs of ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180083BA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801B2A74 (-GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x1803D99DC (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 *     ?SendNewNotificationTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@W4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x1803DB880 (-SendNewNotificationTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@W4ShellNotificationType@Interna.c)
 *     ?SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x1803DB99C (-SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Intern.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 */

__int64 __fastcall BroadcastDVRComponent::SendShellNotificationToDVR2(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( a2 )
  {
    case 1u:
      v10 = 3;
      break;
    case 2u:
      v10 = 1;
      break;
    case 3u:
      v10 = 2;
      break;
    default:
      goto LABEL_11;
  }
  if ( !WindowsIsStringEmpty((HSTRING)a3[6]) )
  {
    v11 = a3[8];
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool))(*(_QWORD *)v11 + 48LL))(
              v11,
              *a3,
              v10,
              a3[6],
              *((_BYTE *)a3 + 19) == 0);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDEB,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v12);
    }
  }
LABEL_11:
  LOBYTE(v14) = a5;
  return BroadcastDVRComponent::SendShellNotificationToDVR(a1, a2, *a3, a4, v14, a6, a3);
}
