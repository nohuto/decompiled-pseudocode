/*
 * XREFs of ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800EA610
 * Callers:
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x1800EA5D0 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 *     ?SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800EA6E0 (-SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatCommon(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        const struct SpatialAudioSettings *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CEndpointCharacteristics *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(v11, eHostProcessConnector, a3, a4, 1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 1084LL;
  }
  else
  {
    v8 = 1083LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return v7;
}
