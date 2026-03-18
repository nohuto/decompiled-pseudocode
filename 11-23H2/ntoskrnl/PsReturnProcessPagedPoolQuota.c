/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1402085B0
 * Callers:
 *     MiPerformVadSplitting @ 0x14030B5F4 (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     LpcExitProcess @ 0x140688B4C (LpcExitProcess.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14068AA8C (FsRtlNotifyCompleteIrp.c)
 *     ExpFreeHandleTable @ 0x14068AC1C (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14068AD30 (ExpFreeTablePagedPool.c)
 *     MiReturnVadQuota @ 0x1406FB394 (MiReturnVadQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14071DBC0 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1407B069C (ExpAllocateHandleTable.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1407C4E38 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     MiReturnVadCharges @ 0x140A3C4A4 (MiReturnVadCharges.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD0A0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 1LL, a2);
  return result;
}
