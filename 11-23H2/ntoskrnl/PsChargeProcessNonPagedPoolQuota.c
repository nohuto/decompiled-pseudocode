/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x140289B40
 * Callers:
 *     MiFreeVadRange @ 0x140309BA0 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663A1C (MiCreateCloneChain.c)
 *     MiInsertVadCharges @ 0x1406FA8B0 (MiInsertVadCharges.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     MiCreateVadEventBitmap @ 0x1407CCE04 (MiCreateVadEventBitmap.c)
 *     ExEnableHandleTracing @ 0x1409F8D00 (ExEnableHandleTracing.c)
 *     MiCreateRotateView @ 0x140A31210 (MiCreateRotateView.c)
 *     MiCreateAweInfoBitMap @ 0x140A41540 (MiCreateAweInfoBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x140A47C30 (MiCreatePlaceholderStorage.c)
 *     MiBuildNewCloneDescriptor @ 0x140A487F8 (MiBuildNewCloneDescriptor.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACDC94 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspChargeQuota @ 0x14022EBF0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 0, a2);
}
