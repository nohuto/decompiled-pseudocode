/*
 * XREFs of KeGenericCallDpc @ 0x14036B760
 * Callers:
 *     MiDbgCopyMemory @ 0x1402E5E58 (MiDbgCopyMemory.c)
 *     KeSwapDirectoryTableBase @ 0x1403D75D4 (KeSwapDirectoryTableBase.c)
 *     EtwpUpdateGuidFilterData @ 0x140781010 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x140A9F338 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140305A04 (KeGenericProcessorCallback.c)
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
