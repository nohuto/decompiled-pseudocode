/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800243C0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x180029808 (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002994C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180030450 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionState@@@Z @ 0x18003CA78 (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBGHHW4_AudioSessionSt.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180041C60 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180043090 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180043A10 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180043EC8 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180047130 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A714 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x18002A86C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        SIZE_T a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 **a6)
{
  unsigned __int16 **v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // ebx
  int v11; // eax
  unsigned __int16 *v12; // rax
  unsigned __int16 **v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-30h]
  unsigned int v16; // [rsp+30h] [rbp-28h]
  SIZE_T cb; // [rsp+60h] [rbp+8h] BYREF

  cb = a1;
  v6 = a6;
  v7 = a4 + 1;
  v8 = 0;
  *a6 = 0LL;
  if ( a4 + 1 < a4 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    *v6 = 0LL;
    v11 = ULongLongMult(a4 + 1, 2uLL, &cb);
    if ( v11 < 0 )
    {
      return (unsigned int)v11;
    }
    else
    {
      v12 = (unsigned __int16 *)CoTaskMemAlloc(cb);
      *v6 = v12;
      if ( v12 )
        StringCchCopyNExW(v12, v7, a3, a4, v14, v15, v16);
      else
        return (unsigned int)-2147024882;
    }
  }
  return v8;
}
