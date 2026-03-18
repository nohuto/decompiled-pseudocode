/*
 * XREFs of HvcallFastExtended @ 0x1403CC1B0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F59C (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x1403CBEA8 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403CBFD8 (HvlpFastFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403CC050 (KiFlushAddressSpaceTb.c)
 *     HvlpReadPerfRegister @ 0x140541388 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405426B8 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140542900 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405429B0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140542A60 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140542AC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542B80 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140542C70 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140542CD0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140542D20 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140542D70 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542DF0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542EC0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140542F80 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140543030 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405430C0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140543120 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543410 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405436D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405438E0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405439A0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543AD0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140543CB0 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543D00 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140545450 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140545830 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405458D0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140545BD0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140545D20 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140545F30 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140546070 (HvlUnregisterDeviceId.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1405460C0 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x140546118 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140546208 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x1405462B0 (HvlpFlushPasidAddressSpace.c)
 *     HvlParkedVirtualProcessors @ 0x1405469A8 (HvlParkedVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x140548410 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1405498C4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x140549980 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x140678A20 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140678C10 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2FB0 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwTraceTimedEvent @ 0x140338D50 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14042B050 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14042B0B0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+34h] [rbp-54h]
  __int16 v14; // [rsp+35h] [rbp-53h]
  char v15; // [rsp+37h] [rbp-51h]
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v16, 0xA0000010, 0LL);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
  {
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
    if ( !v9 )
      return v10;
LABEL_8:
    v15 = 0;
    v12 = (unsigned __int16)a1;
    v13 = BYTE2(a1) & 1;
    v14 = (int)a1 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v12, 8, 0x401A02u, (__int64)v16);
    return v10;
  }
  v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  if ( v9 )
    goto LABEL_8;
  return v10;
}
