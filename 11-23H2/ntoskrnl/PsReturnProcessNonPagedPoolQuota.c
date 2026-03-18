/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14028B330
 * Callers:
 *     MiFreeVadRange @ 0x140309BA0 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x140663E40 (MiDeleteCloneDescriptor.c)
 *     MiReturnVadQuota @ 0x1406FB394 (MiReturnVadQuota.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     MiFreeVadEventBitmapCharges @ 0x1407DFA7C (MiFreeVadEventBitmapCharges.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8CA0 (ExDereferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x1409F8D00 (ExEnableHandleTracing.c)
 *     MiFreeRotateVadEvent @ 0x140A312C0 (MiFreeRotateVadEvent.c)
 *     MiReturnVadCharges @ 0x140A3C4A4 (MiReturnVadCharges.c)
 *     MiDeleteAweBitMap @ 0x140A419F8 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47C30 (MiCreatePlaceholderStorage.c)
 *     MiFreePlaceholderVadEvent @ 0x140A47DE0 (MiFreePlaceholderVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x140A487F8 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x140A48954 (MiCloneProcessAddressSpace.c)
 *     MiFreeCloneDescriptor @ 0x140A48FF4 (MiFreeCloneDescriptor.c)
 *     VfIoFreeIrp @ 0x140ACD814 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACDC94 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD0A0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 0LL, a2);
  return result;
}
