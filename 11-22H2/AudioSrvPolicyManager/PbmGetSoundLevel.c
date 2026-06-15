/*
 * XREFs of PbmGetSoundLevel @ 0x1800315F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18002CCFC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F6C4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_dS @ 0x1800302F0 (WPP_SF_dS.c)
 */

__int64 __fastcall PbmGetSoundLevel(
        void *a1,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        unsigned __int16 *a4,
        int *a5)
{
  int Process; // ebx
  __int64 v9; // rcx
  struct CProcess *v10; // r8
  const wchar_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  struct CProcess *v15; // [rsp+30h] [rbp-18h] BYREF

  Process = 0;
  v15 = 0LL;
  if ( a5 )
  {
    *a5 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v15);
      if ( Process >= 0 )
        *a5 = CApplicationManager::GetSoundLevel(v9, (__int64)v15, a2, a3, a4);
      v10 = v15;
      if ( v15 )
      {
        if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v11 = SoundLevelToString(*a5);
          WPP_SF_dS(
            *(_QWORD *)(v13 + 16),
            0xBu,
            &WPP_07b734c94d88371036da2903467df5b5_Traceguids,
            *(_DWORD *)(v12 + 160),
            v11);
          v10 = v15;
        }
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v10);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Process;
}
