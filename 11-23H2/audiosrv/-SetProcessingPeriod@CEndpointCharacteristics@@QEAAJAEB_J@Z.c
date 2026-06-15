/*
 * XREFs of ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x180060A60
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000DCB0 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060688 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180060938 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180117260 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetProcessingPeriod(CEndpointCharacteristics *this, const __int64 *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  const __int64 *v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *a2 && (unsigned __int64)(*a2 - 50000) > 0xE7EF0 )
  {
    v3 = -2005139386;
    v5 = 8199LL;
  }
  else
  {
    v2 = *((_QWORD *)this + 9);
    v7 = a2;
    *(_OWORD *)v6 = 0LL;
    LOWORD(v6[0]) = 65;
    v6[2] = 8;
    v3 = (*(__int64 (__fastcall **)(__int64, void *, int *))(*(_QWORD *)v2 + 48LL))(v2, &PKEY_AudioEngine_Period, v6);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 8207LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
