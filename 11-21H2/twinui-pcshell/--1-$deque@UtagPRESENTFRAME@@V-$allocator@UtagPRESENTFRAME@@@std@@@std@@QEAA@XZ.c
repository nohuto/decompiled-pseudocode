/*
 * XREFs of ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x18032C024
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$1 @ 0x180337210 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x18033C668 (-_Tidy@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagPRESENTFRAME>::~deque<tagPRESENTFRAME>(void **a1)
{
  void *v2; // rcx

  std::deque<tagPRESENTFRAME>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
