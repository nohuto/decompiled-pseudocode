/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968
 * Callers:
 *     ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x18000C2A0 (-ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x180064998 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800653DC (-IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065844 (-IsParserValid@HidLampAttributesRequestReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18006591C (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180065B08 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x18006625C (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066930 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x180066F94 (-IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x18010119C (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x180101E34 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     atexit @ 0x180056E08 (atexit.c)
 *     _Init_thread_footer @ 0x180057938 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800579A0 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800FD81C (wil--init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___.c)
 */

struct LampArrayTelemetry *__fastcall LampArrayTelemetry::GetInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180278C60 > *(_DWORD *)(v3 + 16) )
  {
    Init_thread_header(&dword_180278C60);
    if ( dword_180278C60 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180278C60);
    }
  }
  wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___(v3, 0LL, a3);
  return qword_180278230;
}
