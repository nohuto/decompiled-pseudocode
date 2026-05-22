/*
 * XREFs of ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800DCDC8
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA310 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA7D0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800DADB8 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DB0F4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800DBC28 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800DBC94 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800DC5D0 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DC658 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DCAE0 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
 * Callees:
 *     <none>
 */

bool __fastcall HidChannelValueInfo::IsValid(HidChannelValueInfo *this, __int64 a2, __int64 a3)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 1) && *(_DWORD *)this && !*((_QWORD *)this + 3) && *((_QWORD *)this + 4) <= a3 )
    return *((_QWORD *)this + 4) > 0LL;
  return result;
}
