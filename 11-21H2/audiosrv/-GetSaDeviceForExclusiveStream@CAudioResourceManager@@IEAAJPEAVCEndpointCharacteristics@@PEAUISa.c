/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180100778
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101728 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaD.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101924 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIS.c)
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForExclusiveStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        bool a8,
        struct IAudioProcess *a9,
        struct CAudioSessionManager *a10,
        struct ISaDeviceProxy **a11)
{
  unsigned int v13; // eax
  unsigned int v14; // ebx
  CAudioResourceManager *v15; // rcx
  struct ISaDeviceResourceManager *v16; // r8

  if ( a3 )
    v13 = (*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)a3 + 56LL))(
            a3,
            a2,
            a4,
            a5,
            a6,
            a7,
            a11);
  else
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5,
            a6,
            a7,
            0LL,
            0LL,
            a11);
  v14 = v13;
  if ( v13 == -2005139364 || v13 == -2005139363 && a8 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a9 + 96LL))(a9) )
      return (unsigned int)CAudioResourceManager::RetryGetSaDeviceForPackagedApp(v15, a2, v16, a4, a5, a6, a7, a10, a11);
    if ( v14 == -2005139363 && a8 )
      return (unsigned int)CAudioResourceManager::RetryGetSaDeviceForExclusive(v15, a2, v16, a4, a5, a6, a7, a10, a11);
  }
  return v14;
}
