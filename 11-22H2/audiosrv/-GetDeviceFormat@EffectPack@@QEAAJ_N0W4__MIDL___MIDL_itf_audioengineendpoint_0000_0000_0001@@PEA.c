/*
 * XREFs of ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x18003E598 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800600C0 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     _lambda_467fc3282994b32af598667e1ec5bffc_::operator() @ 0x18014AB34 (_lambda_467fc3282994b32af598667e1ec5bffc_--operator().c)
 * Callees:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 */

__int64 __fastcall EffectPack::GetDeviceFormat(
        CEndpointCharacteristics **this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct tWAVEFORMATEX **a5)
{
  CEndpointCharacteristics *v7; // rcx
  __m256i v9; // [rsp+30h] [rbp-48h] BYREF
  __m256i v10; // [rsp+50h] [rbp-28h]

  EffectPack::GetDefaultConnectorProcessingModeInternal(this, &v9, a4, 1LL);
  v7 = this[161];
  *(_OWORD *)((char *)&v10.m256i_u64[1] + 4) = *(_OWORD *)v9.m256i_i8;
  v10.m256i_i64[0] = (__int64)this;
  v10.m256i_i32[2] = a4;
  v9 = v10;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
           v7,
           (__int64)&v9,
           (__int64)a5);
}
