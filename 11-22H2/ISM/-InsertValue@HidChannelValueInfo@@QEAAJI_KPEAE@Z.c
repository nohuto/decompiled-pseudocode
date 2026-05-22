/*
 * XREFs of ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x18010530C
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104A90 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180104FD8 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 * Callees:
 *     ?InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z @ 0x180105338 (-InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z.c)
 */

__int64 __fastcall HidChannelValueInfo::InsertValue(
        HidChannelValueInfo *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  if ( a2 < *((__int64 *)this + 3) || a2 > *((__int64 *)this + 4) )
    return 2147942487LL;
  HidChannelValueInfo::InternalInsertValue(this, a2, a3, a4);
  return 0LL;
}
