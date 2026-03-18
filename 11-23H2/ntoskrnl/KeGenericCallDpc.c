/*
 * XREFs of KeGenericCallDpc @ 0x14036BDB0
 * Callers:
 *     MiDbgCopyMemory @ 0x1402E5E58 (MiDbgCopyMemory.c)
 *     KeSwapDirectoryTableBase @ 0x1403D7C34 (KeSwapDirectoryTableBase.c)
 *     EtwpUpdateGuidFilterData @ 0x140780B00 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x14078DC9C (EtwpFreeLoggerContext.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x140A9F278 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140305B34 (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcInitiatorWorker,
           (__int64)v3,
           1);
}
