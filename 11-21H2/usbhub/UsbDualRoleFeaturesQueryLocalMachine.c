/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005C534
 * Callers:
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     CheckUSBFnConfiguration @ 0x1C005B99C (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005BC48 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005BF98 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005C094 (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005C1EC (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C005C3A0 (UpdateUcmIsPresentBit.c)
 */

void __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r9
  int v5; // [rsp+28h] [rbp-10h]

  if ( (int)ReadTestOverrideValue(a1) < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v2) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  UpdateUcmIsPresentBit(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *a1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x25u,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v5);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v3 = 38;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v3 = 39;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v3,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 41;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v4,
    (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids);
}
