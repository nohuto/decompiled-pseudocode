/*
 * XREFs of ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x180105400
 * Callers:
 *     ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800653DC (-IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065844 (-IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065B08 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180065CC0 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x18006625C (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066930 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x180066BB8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 *     ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066F94 (-IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x180104D60 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
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
