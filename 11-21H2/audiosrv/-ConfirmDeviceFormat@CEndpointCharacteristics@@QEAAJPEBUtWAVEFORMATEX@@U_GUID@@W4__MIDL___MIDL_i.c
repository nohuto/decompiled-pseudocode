/*
 * XREFs of ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145A10
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145910 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180147220 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        unsigned __int32 a4,
        int a5)
{
  unsigned int CanRenderFormat; // ebx
  int v6; // edx
  int v7; // ecx
  struct _GUID v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = *a3;
  CanRenderFormat = CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(this, a2, &v9, a4, a5);
  if ( AEError::DeviceInUse((AEError *)CanRenderFormat, v6) || v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E03,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)CanRenderFormat);
  return CanRenderFormat;
}
