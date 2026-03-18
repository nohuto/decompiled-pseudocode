/*
 * XREFs of ??1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ @ 0x180074CA4
 * Callers:
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180074C7C (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CAnimationTracking::AnimationScenarioRunningStatistics::~AnimationScenarioRunningStatistics(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    DefaultHeap::Free(v2);
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 && *((_QWORD *)this + 18) )
    DefaultHeap::Free(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
}
