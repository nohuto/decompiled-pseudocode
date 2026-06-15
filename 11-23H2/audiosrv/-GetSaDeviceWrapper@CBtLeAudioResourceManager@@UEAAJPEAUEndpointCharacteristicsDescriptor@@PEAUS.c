/*
 * XREFs of ?GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800FB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@MEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800F9550 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@MEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FB68C (-GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA-AW4BTAudio_StreamCon.c)
 *     ?GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800FB85C (-GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@IEAA-AW4BTA.c)
 *     ?SendBtleStreamContext@CBtLeAudioResourceManager@@IEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800FD050 (-SendBtleStreamContext@CBtLeAudioResourceManager@@IEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::GetSaDeviceWrapper(
        CBtLeAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        const struct _GUID *a7,
        const struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  BOOL v13; // ebx
  __int64 v14; // rcx
  unsigned int FixedBTLEAudio_StreamContextFromFlowAndProcessingMode; // eax
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // eax
  int SaDeviceWrapper; // eax
  unsigned int v20; // ebx
  __int128 v22; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 56LL))(*(_QWORD *)a2) != 0;
  CBtLeAudioResourceManager::GetBTLEAudio_StreamContextFromStreamCounts((__int64)this, v13);
  v22 = *((_OWORD *)a3 + 3);
  FixedBTLEAudio_StreamContextFromFlowAndProcessingMode = CBtLeAudioResourceManager::GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode(
                                                            v14,
                                                            v13,
                                                            &v22);
  v18 = CBtLeAudioResourceManager::SendBtleStreamContext(
          this,
          v17,
          v16 | FixedBTLEAudio_StreamContextFromFlowAndProcessingMode);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x267,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v18);
  SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(this, a2, a3, a4, a5, a6, a7, a8, a9);
  v20 = SaDeviceWrapper;
  if ( SaDeviceWrapper >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x268,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
    (const char *)(unsigned int)SaDeviceWrapper);
  return v20;
}
