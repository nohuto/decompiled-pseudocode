/*
 * XREFs of KiVerifyXcpt15 @ 0x140B17320
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     RtlCaptureImageExceptionValues @ 0x140290984 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     MmMapIoSpaceEx @ 0x1403359B0 (MmMapIoSpaceEx.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D68E0 (KeExpandKernelStackAndCallout.c)
 *     _local_unwind @ 0x1403D9510 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x140567510 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140567740 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140B5C490 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140B679C0 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B75E70 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[42]; // [rsp+0h] [rbp-198h] BYREF

  v1[21] = v1;
  KiVerifyXcpt2();
  return local_unwind((ULONG_PTR)v1, (__int64)&loc_140B17345);
}
