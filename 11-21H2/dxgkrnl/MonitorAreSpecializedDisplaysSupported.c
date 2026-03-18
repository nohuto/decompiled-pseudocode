/*
 * XREFs of MonitorAreSpecializedDisplaysSupported @ 0x1C0008E58
 * Callers:
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1C0163C60 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F37F4 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

_BOOL8 MonitorAreSpecializedDisplaysSupported()
{
  _BOOL8 result; // rax
  int v1; // ecx
  ULONG ReturnedProductType[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-138h] BYREF

  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  result = 0;
  if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0 )
  {
    ReturnedProductType[0] = 0;
    if ( RtlGetProductInfo(
           VersionInformation[1],
           VersionInformation[2],
           LOWORD(VersionInformation[69]),
           HIWORD(VersionInformation[69]),
           ReturnedProductType) )
    {
      if ( ReturnedProductType[0] == 4 )
        return 1;
      if ( ReturnedProductType[0] - 161 <= 0x1B )
      {
        v1 = 134217737;
        if ( _bittest(&v1, ReturnedProductType[0] - 161) )
          return 1;
      }
    }
  }
  return result;
}
