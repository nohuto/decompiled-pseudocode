/*
 * XREFs of sprintf_s @ 0x1403DF720
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x1403CDDC0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405AE6E0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405AE750 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1405AE810 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405AEAA0 (RtlIpv6AddressToStringExA.c)
 *     CmpSetVersionData @ 0x14080BA88 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080C91C (CmpAddProcessorConfigurationEntry.c)
 *     CmpFindControlSet @ 0x140825D40 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873344 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140AE9EB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AEA690 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140AEB3D0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140B983F0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403DF750 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
