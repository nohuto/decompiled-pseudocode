/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140289DD0
 * Callers:
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663F6C (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1407CD0D4 (MiCreateVadEventBitmap.c)
 *     ExEnableHandleTracing @ 0x1409F8F90 (ExEnableHandleTracing.c)
 *     MiCreateRotateView @ 0x140A314C0 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x140A417F0 (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47EE0 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACDC84 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14022ED00 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 0, a2);
}
