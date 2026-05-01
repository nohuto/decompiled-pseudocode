/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1802D4760
 * Callers:
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ @ 0x180296DB0 (-Release@CTaskContinuityActivitiesExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@WBA@EAAKXZ @ 0x180296DD0 (-Release@CTaskContinuityActivitiesExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CTaskContinuityActivitiesExperienceManager@@WBI@EAAKXZ @ 0x180296DF0 (-Release@CTaskContinuityActivitiesExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Release(
        CTaskContinuityActivitiesExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::Release(this);
}
