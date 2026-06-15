/*
 * XREFs of ?GetSaDeviceForSharedStream@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180116790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 */

__int64 __fastcall CBtAudioResourceManager::GetSaDeviceForSharedStream(
        LPCWCH *this,
        const WCHAR **a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  int v11; // eax
  const WCHAR *v12; // r8
  const char *v13; // r9
  __int64 result; // rax
  int SaDeviceOnHfpMicrophoneEndpoint; // eax
  unsigned int v16; // ebx
  int SaDeviceOnRenderEndpoint; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v11 = (*((__int64 (**)(void))*a2 + 7))();
    v12 = a2[3];
    if ( v11 == 1 )
    {
      if ( CompareStringOrdinal(this[6], -1, v12, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x115,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      SaDeviceOnHfpMicrophoneEndpoint = CBtAudioResourceManager::CreateSaDeviceOnHfpMicrophoneEndpoint(
                                          (RTL_SRWLOCK *)this,
                                          (struct CEndpointCharacteristics *)a2,
                                          a3,
                                          a4,
                                          a5,
                                          a6,
                                          a7);
      v16 = SaDeviceOnHfpMicrophoneEndpoint;
      if ( SaDeviceOnHfpMicrophoneEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x116,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceOnHfpMicrophoneEndpoint);
        return v16;
      }
    }
    else
    {
      if ( CompareStringOrdinal(this[5], -1, v12, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      SaDeviceOnRenderEndpoint = CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint(
                                   (CBtAudioResourceManager *)this,
                                   (struct CEndpointCharacteristics *)a2,
                                   a3,
                                   a4,
                                   a5,
                                   a6,
                                   a7);
      v18 = SaDeviceOnRenderEndpoint;
      if ( SaDeviceOnRenderEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceOnRenderEndpoint);
        return v18;
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                           v13);
  }
  return result;
}
