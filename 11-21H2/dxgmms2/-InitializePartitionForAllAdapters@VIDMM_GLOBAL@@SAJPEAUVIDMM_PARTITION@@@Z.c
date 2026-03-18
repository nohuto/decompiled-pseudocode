/*
 * XREFs of ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C00B87FC
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001658 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C001C768 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *i; // rbx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  ExAcquirePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  for ( i = VIDMM_GLOBAL::_AdapterListHead.Flink; i != &VIDMM_GLOBAL::_AdapterListHead; i = i->Flink )
  {
    v5 = VIDMM_PARTITION::EnsureAdapter(this, (struct VIDMM_GLOBAL *)&i[-2796]);
    v2 = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry3(1LL, &i[-2796], this, v5);
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      break;
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  return v2;
}
