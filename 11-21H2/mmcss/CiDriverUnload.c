/*
 * XREFs of CiDriverUnload @ 0x1C000C4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00046A8 (WPP_SF_.c)
 *     CsTerminate @ 0x1C000C514 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_0f75fd9923be30bc1807a9ff104f69db_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
