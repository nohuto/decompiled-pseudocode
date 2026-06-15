/*
 * XREFs of ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022214
 * Callers:
 *     PbmRegisterPlaybackManagerNotifications @ 0x180028CA0 (PbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A53C (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CApplicationManager::RegisterTrackStateNotificationClient(__int64 a1, struct CProcess *a2, int a3)
{
  CApplicationManager *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx

  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = CApplicationManager::Register(v5, a2);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
    }
    AudPolicyLogError("CApplicationManager::RegisterTrackStateNotificationClient", 541, v7);
  }
  else
  {
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 1, a3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v7;
}
