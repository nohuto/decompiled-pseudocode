/*
 * XREFs of ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x18003E598
 * Callers:
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x18003E508 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::HardwareLoopbackEnabled(EffectPack *this)
{
  bool v3; // di
  void *v4; // rcx
  void *v5; // rbx
  struct tWAVEFORMATEX *v6; // [rsp+38h] [rbp-28h] BYREF
  char v7; // [rsp+40h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp-8h]
  LPVOID pv; // [rsp+70h] [rbp+10h] BYREF

  *(_OWORD *)pvar = 0LL;
  v9 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL) + 40LL))(
         *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    goto LABEL_3;
  }
  pv = 0LL;
  v6 = 0LL;
  v7 = 1;
  v3 = (int)EffectPack::GetDeviceFormat((CEndpointCharacteristics **)this, 0LL, 0LL, 0, &v6) >= 0;
  if ( v7 )
  {
    v4 = pv;
    pv = v6;
    if ( v4 )
      CoTaskMemFree(v4);
  }
  v5 = pv;
  if ( v3 && (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pv) == 1 )
  {
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
LABEL_3:
    PropVariantClear(pvar);
    return 0LL;
  }
  pv = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
  PropVariantClear(pvar);
  return 1LL;
}
