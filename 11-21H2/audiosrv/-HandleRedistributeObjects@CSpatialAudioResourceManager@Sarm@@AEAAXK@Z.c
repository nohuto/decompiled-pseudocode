/*
 * XREFs of ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180127110
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_265141a58f10e95f36250ba261e75fde__void_::_Do_call @ 0x180129670 (std--_Func_impl_no_alloc__lambda_265141a58f10e95f36250ba261e75fde__void_--_Do_call.c)
 * Callees:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126760 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180126A94 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180126C50 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18012A420 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x18012B618 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *i; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects", 0x244u);
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream(this, a2) )
  {
    Sarm::CStreamResource::GrantAvailableObjects(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(this, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
