/*
 * XREFs of ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800608A8
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060688 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF1C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180060938 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180060A20 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 */

__int64 __fastcall EffectPack::ConfirmDeviceFormat(
        EffectPack *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  CEndpointCharacteristics *v5; // rdi
  struct CAudioSignalProcessingModeMap *v9; // rax
  unsigned int CanRenderFormat; // ebx
  int v11; // edx
  int v12; // ecx
  struct _GUID v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (CEndpointCharacteristics *)*((_QWORD *)this + 161);
  v9 = (struct CAudioSignalProcessingModeMap *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                                                 (unsigned __int64 *)this + 192,
                                                 a4);
  v14 = *a3;
  CanRenderFormat = CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(v5, a2, &v14, v9, a4, a5);
  if ( AEError::DeviceInUse((AEError *)CanRenderFormat, v11) || v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FE2,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)CanRenderFormat);
  return CanRenderFormat;
}
