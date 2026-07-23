/*
 * XREFs of KiVerifyXcpt15 @ 0x140B17320
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x140290C14 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7420 (RtlSectionTableFromVirtualAddress.c)
 *     MmGetMinWsPagePriority @ 0x1402FC030 (MmGetMinWsPagePriority.c)
 *     MmMapIoSpaceEx @ 0x140335C40 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D6AC0 (KeExpandKernelStackAndCallout.c)
 *     _local_unwind @ 0x1403D96F0 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x140567BD0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140567E00 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140B5C490 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140B679C0 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B75E70 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140B17345);
}
