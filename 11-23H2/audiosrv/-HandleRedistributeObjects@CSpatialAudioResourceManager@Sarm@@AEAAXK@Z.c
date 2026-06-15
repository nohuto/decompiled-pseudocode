/*
 * XREFs of ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134B80
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_265141a58f10e95f36250ba261e75fde__void_::_Do_call @ 0x1801370E0 (std--_Func_impl_no_alloc__lambda_265141a58f10e95f36250ba261e75fde__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180019500 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134270 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801345B4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180134730 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x180138EAC (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
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
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects", 580);
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
