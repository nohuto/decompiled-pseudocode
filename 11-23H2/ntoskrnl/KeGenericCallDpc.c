/*
 * XREFs of KeGenericCallDpc @ 0x14036BF50
 * Callers:
 *     MiDbgCopyMemory @ 0x1402E60E8 (MiDbgCopyMemory.c)
 *     KeSwapDirectoryTableBase @ 0x1403D7E14 (KeSwapDirectoryTableBase.c)
 *     EtwpUpdateGuidFilterData @ 0x140780CF0 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x140A9F0E8 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
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
