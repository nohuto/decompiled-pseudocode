/*
 * XREFs of ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54
 * Callers:
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x180002634 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800647D0 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z @ 0x1801020F0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 */

__int64 __fastcall TryGetSaDeviceResourceManagerForEndpoint(
        const struct CEndpointCharacteristics *a1,
        struct ISaDeviceResourceManager **a2)
{
  struct _GUID v2; // xmm0
  __int64 v5; // rax
  CBtAudioResourceManagerCache *v6; // rcx
  __int64 v8; // rax
  int BtAudioResourceManager; // ebx
  __int64 v10; // rdx
  struct _GUID v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(struct _GUID *)((char *)a1 + 9748);
  v5 = *(_QWORD *)((char *)a1 + 9748);
  v6 = (CBtAudioResourceManagerCache *)(v5 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1);
  v11 = v2;
  if ( v5 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v6 = (CBtAudioResourceManagerCache *)(*(_QWORD *)v11.Data4
                                        - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4);
  if ( !v6 )
    return 0LL;
  v8 = v5 - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
  if ( !v8 )
    v8 = *(_QWORD *)v11.Data4 + 0x12C28937D3A30176LL;
  if ( v8 )
  {
    BtAudioResourceManager = -2147418113;
    v10 = 194LL;
  }
  else
  {
    v11 = *(struct _GUID *)((char *)a1 + 9764);
    BtAudioResourceManager = CBtAudioResourceManagerCache::GetBtAudioResourceManager(v6, a1, &v11, a2);
    if ( BtAudioResourceManager >= 0 )
      return 0LL;
    v10 = 196LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)BtAudioResourceManager,
    v11.Data1);
  return (unsigned int)BtAudioResourceManager;
}
