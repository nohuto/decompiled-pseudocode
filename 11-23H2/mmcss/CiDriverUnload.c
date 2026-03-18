/*
 * XREFs of CiDriverUnload @ 0x1C000D870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004F34 (WPP_SF_.c)
 *     wil_UninitializeFeatureStaging @ 0x1C000B008 (wil_UninitializeFeatureStaging.c)
 *     CsTerminate @ 0x1C000D8D8 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_37e2a5d79757317e233be7546541e116_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  CsTerminate();
  return wil_UninitializeFeatureStaging();
}
