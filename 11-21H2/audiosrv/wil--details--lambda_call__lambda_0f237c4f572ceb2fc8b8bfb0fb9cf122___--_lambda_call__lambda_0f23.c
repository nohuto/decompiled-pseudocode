/*
 * XREFs of wil::details::lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___::_lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___ @ 0x1800683A0
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$3 @ 0x18014C7B0 (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$3.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___::_lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___(
        __int64 a1)
{
  int updated; // eax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                *(CEndpointCharacteristics **)a1,
                0,
                **(enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 **)(a1 + 8),
                **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1ED8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated,
        v2);
  }
}
