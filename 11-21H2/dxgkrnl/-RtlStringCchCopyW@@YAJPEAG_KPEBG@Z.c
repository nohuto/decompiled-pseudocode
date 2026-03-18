/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C0161AB8 (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01D6B10 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01D7008 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C0205788 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C02090E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C0392574 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000F01C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, const unsigned __int16 *a3)
{
  NTSTATUS result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, 0LL, a3, 0x7FFFFFFEuLL);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
