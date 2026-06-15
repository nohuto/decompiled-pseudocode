/*
 * XREFs of _lambda_cc8545399a300f832261433c2fbaac5d_::operator() @ 0x180075510
 * Callers:
 *     wil::details::lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___::_lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___ @ 0x180074198 (wil--details--lambda_call__lambda_cc8545399a300f832261433c2fbaac5d___--_lambda_call__lambda_cc85.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x1800605C8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014F5CC (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_cc8545399a300f832261433c2fbaac5d_::operator()(__int64 a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1288LL),
         *(struct EffectPack **)a1,
         **(const struct SpatialAudioSettings ***)(a1 + 8),
         **(const struct tWAVEFORMATEX ***)(a1 + 16),
         0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21F5,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1288LL),
              0,
              0,
              **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21F6,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
  if ( **(_DWORD **)(a1 + 24) )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1288LL),
           **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21FB,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)(*(_QWORD *)a1 + 1288LL), 0);
}
