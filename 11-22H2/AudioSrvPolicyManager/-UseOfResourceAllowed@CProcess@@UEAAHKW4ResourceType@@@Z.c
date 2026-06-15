/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18002ADB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18001F3BC (WPP_SF_.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18002CCFC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 */

__int64 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, int a2, enum ResourceType a3)
{
  unsigned int v3; // ebx
  _DWORD pvData[6]; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( g_PlaybackManager )
  {
    if ( a3 )
    {
      if ( a3 != ResourceTypeTheme || !(unsigned int)CApplicationManager::GetSoundLevel(this, this, 0LL, 0LL, 0LL) )
        return v3;
      return 1;
    }
    if ( ((unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 10) <= 1)
      && (unsigned int)CApplicationManager::GetSoundLevel(this, this, 0LL, 0LL, 0LL) )
    {
      if ( !*((_DWORD *)this + 105) && !*((_DWORD *)this + 117) && !*((_DWORD *)this + 118) )
      {
        pcbData = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AllowClassicOffload",
               0x18u,
               0LL,
               pvData,
               &pcbData)
          || !pvData[0] )
        {
          return 0;
        }
      }
      return 1;
    }
  }
  else if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
  }
  return v3;
}
