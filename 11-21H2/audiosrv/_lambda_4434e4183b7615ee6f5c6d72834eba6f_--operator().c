/*
 * XREFs of _lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator() @ 0x1800685CC
 * Callers:
 *     wil::details::lambda_call__lambda_4434e4183b7615ee6f5c6d72834eba6f___::_lambda_call__lambda_4434e4183b7615ee6f5c6d72834eba6f___ @ 0x1800683F0 (wil--details--lambda_call__lambda_4434e4183b7615ee6f5c6d72834eba6f___--_lambda_call__lambda_4434.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18006A144 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014C2C8 (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

__int64 __fastcall lambda_4434e4183b7615ee6f5c6d72834eba6f_::operator()(_QWORD *a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         (CEndpointCharacteristics *)*a1,
         *(const struct SpatialAudioSettings **)a1[1],
         *(const struct tWAVEFORMATEX **)a1[2],
         0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2017,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2,
      v6);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              (CEndpointCharacteristics *)*a1,
              0,
              eHostProcessConnector,
              *(const struct tWAVEFORMATEX **)a1[2]);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2018,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated,
      v6);
  if ( *(_DWORD *)a1[3] )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           (CEndpointCharacteristics *)*a1,
           *(const struct tWAVEFORMATEX **)a1[2]);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x201D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4,
        v6);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*a1, 0LL);
}
