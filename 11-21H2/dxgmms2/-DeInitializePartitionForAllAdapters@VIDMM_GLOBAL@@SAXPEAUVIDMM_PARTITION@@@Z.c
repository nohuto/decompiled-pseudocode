/*
 * XREFs of ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00D5BD4
 * Callers:
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0031208 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 * Callees:
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00029E4 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C003134C (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DeInitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  struct _LIST_ENTRY *i; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax

  ExAcquirePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  for ( i = VIDMM_GLOBAL::_AdapterListHead.Flink; i != &VIDMM_GLOBAL::_AdapterListHead; i = i->Flink )
  {
    AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, (struct VIDMM_GLOBAL *)&i[-2796]);
    VidMmiClosePerfCounters(AdapterInfo);
  }
  ExReleasePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
}
