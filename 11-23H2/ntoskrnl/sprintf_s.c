/*
 * XREFs of sprintf_s @ 0x1403DF900
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x1403CDFA0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405AEC50 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405AECC0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1405AED80 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405AF010 (RtlIpv6AddressToStringExA.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080CBEC (CmpAddProcessorConfigurationEntry.c)
 *     CmpFindControlSet @ 0x140826040 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873584 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140AE9EB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AEA690 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140AEB3D0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140B983F0 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403DF930 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
