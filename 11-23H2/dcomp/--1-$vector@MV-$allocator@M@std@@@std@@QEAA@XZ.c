/*
 * XREFs of ??1?$vector@MV?$allocator@M@std@@@std@@QEAA@XZ @ 0x18017028C
 * Callers:
 *     _CCompFrameStats::TargetAverageFrameDuration_::_1_::dtor$0 @ 0x1800B1F5D (_CCompFrameStats--TargetAverageFrameDuration_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageAppCommitLatency_::_1_::dtor$0 @ 0x1801A6E41 (_CTouchFrameStats--CalcAverageAppCommitLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageAppDeliveryLatency_::_1_::dtor$0 @ 0x1801A6F9D (_CTouchFrameStats--CalcAverageAppDeliveryLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageAppInputLatency_::_1_::dtor$0 @ 0x1801A7102 (_CTouchFrameStats--CalcAverageAppInputLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageAppLatency_::_1_::dtor$0 @ 0x1801A725D (_CTouchFrameStats--CalcAverageAppLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageDwmPresentLatency_::_1_::dtor$0 @ 0x1801A73CB (_CTouchFrameStats--CalcAverageDwmPresentLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageDwmRenderLatency_::_1_::dtor$0 @ 0x1801A753B (_CTouchFrameStats--CalcAverageDwmRenderLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageGestureTargetingLatency_::_1_::dtor$0 @ 0x1801A7699 (_CTouchFrameStats--CalcAverageGestureTargetingLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageInputProcessorLatency_::_1_::dtor$0 @ 0x1801A77F5 (_CTouchFrameStats--CalcAverageInputProcessorLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageIsmLatency_::_1_::dtor$0 @ 0x1801A7951 (_CTouchFrameStats--CalcAverageIsmLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageRimQueueLatency_::_1_::dtor$0 @ 0x1801A7AB6 (_CTouchFrameStats--CalcAverageRimQueueLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageRimReadLatency_::_1_::dtor$0 @ 0x1801A7C11 (_CTouchFrameStats--CalcAverageRimReadLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageRimSignalLatency_::_1_::dtor$0 @ 0x1801A7D6D (_CTouchFrameStats--CalcAverageRimSignalLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageTotalLatency_::_1_::dtor$0 @ 0x1801A7EDD (_CTouchFrameStats--CalcAverageTotalLatency_--_1_--dtor$0.c)
 *     _CTouchFrameStats::CalcAverageVSyncsMissed_::_1_::dtor$0 @ 0x1801A8028 (_CTouchFrameStats--CalcAverageVSyncsMissed_--_1_--dtor$0.c)
 *     _CCompFrameStats::TargetAverageGlitchDuration_::_1_::dtor$0 @ 0x1801A9BDC (_CCompFrameStats--TargetAverageGlitchDuration_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<float>::~vector<float>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
