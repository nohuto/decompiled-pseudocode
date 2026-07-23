/*
 * XREFs of HvcallFastExtended @ 0x1403CC390
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     HvlpFastFlushListTb @ 0x1403CC088 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403CC1B8 (HvlpFastFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403CC230 (KiFlushAddressSpaceTb.c)
 *     HvlpReadPerfRegister @ 0x140541A48 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140542D78 (HvlpWritePerfRegister.c)
 *     HvlAttachPasidSpace @ 0x140542FC0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140543070 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140543120 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140543180 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140543240 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140543330 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140543390 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405433E0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140543430 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405434B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140543580 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140543640 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405436F0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140543780 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405437E0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543AD0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543D90 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543FA0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140544060 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140544190 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140544370 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405443C0 (HvlEnablePasid.c)
 *     HvlRestoreTime @ 0x140545B10 (HvlRestoreTime.c)
 *     HvlSetDeviceCapabilities @ 0x140545EF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140545F90 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140546290 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405463E0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405465F0 (HvlUnblockDefaultDma.c)
 *     HvlUnregisterDeviceId @ 0x140546730 (HvlUnregisterDeviceId.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140546780 (HvlpFastAcknowledgePageRequest.c)
 *     HvlpFastFlushPasidAddressList @ 0x1405467D8 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1405468C8 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFlushPasidAddressSpace @ 0x140546970 (HvlpFlushPasidAddressSpace.c)
 *     HvlParkedVirtualProcessors @ 0x140547068 (HvlParkedVirtualProcessors.c)
 *     HvlpProcessIommuPrq @ 0x140548AD0 (HvlpProcessIommuPrq.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140549F84 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x14054A040 (HvlpFastFlushListTbEx.c)
 *     HvlpGetVtlCallVa @ 0x140678F70 (HvlpGetVtlCallVa.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140679160 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941798 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A3240 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwTraceTimedEvent @ 0x140338FE0 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14042B3E0 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14042B440 (HvcallpExtendedFastHypercallWithOutput.c)
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
