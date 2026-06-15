/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x1800293E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A47C (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A53C (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int Process; // ebx
  CApplicationManager *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  CApplicationManager *v8; // rdi
  struct CProcess *v10; // [rsp+48h] [rbp+20h] BYREF

  Process = 0;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v10);
    if ( Process >= 0 )
    {
      if ( !a2 )
      {
        v8 = g_ApplicationManager;
        v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        CProcess::RegisteredForSoundLevelNotifications(0LL, 0, a3);
        CApplicationManager::Unregister(v8, 0LL);
        if ( v7 )
LABEL_8:
          LeaveCriticalSection(v7);
        return 0;
      }
      if ( a2 == 1 )
      {
        v6 = g_ApplicationManager;
        v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        CProcess::RegisteredForTrackStateNotifications(0LL, 0, a3);
        CApplicationManager::Unregister(v6, 0LL);
        if ( v7 )
          goto LABEL_8;
        return 0;
      }
    }
  }
  return (unsigned int)Process;
}
