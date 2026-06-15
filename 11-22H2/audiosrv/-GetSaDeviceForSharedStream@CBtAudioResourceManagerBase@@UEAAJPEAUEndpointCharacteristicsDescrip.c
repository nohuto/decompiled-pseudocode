/*
 * XREFs of ?GetSaDeviceForSharedStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F93C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F611C (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F65A0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::GetSaDeviceForSharedStream(
        LPCWCH *this,
        struct EndpointCharacteristicsDescriptor *a2,
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
  int SaDeviceOnMicrophoneEndpoint; // eax
  unsigned int v16; // ebx
  int SaDeviceOnRenderEndpoint; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v11 = (*(__int64 (**)(void))(**(_QWORD **)a2 + 56LL))();
    v12 = *(const WCHAR **)(*(_QWORD *)a2 + 48LL);
    if ( v11 == 1 )
    {
      if ( CompareStringOrdinal(this[7], -1, v12, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      SaDeviceOnMicrophoneEndpoint = CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint(
                                       (CBtAudioResourceManagerBase *)this,
                                       a2,
                                       a3,
                                       a4,
                                       a5,
                                       a6,
                                       a7);
      v16 = SaDeviceOnMicrophoneEndpoint;
      if ( SaDeviceOnMicrophoneEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB5,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)SaDeviceOnMicrophoneEndpoint);
        return v16;
      }
    }
    else
    {
      if ( CompareStringOrdinal(this[6], -1, v12, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      SaDeviceOnRenderEndpoint = CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint(
                                   (CBtAudioResourceManagerBase *)this,
                                   a2,
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
          (void *)0xBE,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
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
                           (void *)0xC3,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v13);
  }
  return result;
}
