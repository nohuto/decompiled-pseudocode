/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0
 * Callers:
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140664390 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x1406FB5A4 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFD4C (MiFreeVadEventBitmapCharges.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8F30 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1409F8F90 (ExEnableHandleTracing.c)
 *     MiFreeRotateVadEvent @ 0x140A31570 (MiFreeRotateVadEvent.c)
 *     MiReturnVadCharges @ 0x140A3C754 (MiReturnVadCharges.c)
 *     MiDeleteAweBitMap @ 0x140A41CA8 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47EE0 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x140A48090 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x140A48C04 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x140A492A4 (MiFreeCloneDescriptor.c)
 *     VfIoFreeIrp @ 0x140ACD804 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACDC84 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD330 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 0LL, a2);
  return result;
}
