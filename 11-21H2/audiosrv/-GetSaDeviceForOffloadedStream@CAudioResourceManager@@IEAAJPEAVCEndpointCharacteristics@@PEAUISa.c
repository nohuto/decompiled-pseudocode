/*
 * XREFs of ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x180100930
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101924 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIS.c)
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForOffloadedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        struct IAudioProcess *a8,
        struct CAudioSessionManager *a9,
        const struct _GUID *a10,
        const struct _GUID *a11,
        struct ISaDeviceProxy **a12)
{
  unsigned int v14; // eax
  unsigned int v15; // ebx
  CAudioResourceManager *v16; // rcx
  struct ISaDeviceResourceManager *v17; // r8

  if ( a3 )
    v14 = (*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, const struct _GUID *, const struct _GUID *, struct ISaDeviceProxy **))(*(_QWORD *)a3 + 64LL))(
            a3,
            a2,
            a4,
            a5,
            a6,
            a7,
            a10,
            a11,
            a12);
  else
    v14 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, const struct _GUID *, const struct _GUID *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5,
            a6,
            a7,
            a10,
            a11,
            a12);
  v15 = v14;
  if ( v14 == -2005139364 && (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a8 + 96LL))(a8) )
    return (unsigned int)CAudioResourceManager::RetryGetSaDeviceForPackagedApp(v16, a2, v17, a4, a5, a6, a7, a9, a12);
  return v15;
}
