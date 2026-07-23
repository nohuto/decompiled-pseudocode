/*
 * XREFs of KiVerifyXcpt15 @ 0x140B18320
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x140290864 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     MmMapIoSpaceEx @ 0x140335810 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D6280 (KeExpandKernelStackAndCallout.c)
 *     _local_unwind @ 0x1403D8EB0 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x1405675B0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405677E0 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140B373F0 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140B5F4D0 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B76E00 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140B18345);
}
