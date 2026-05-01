/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x18022C7F0
 * Callers:
 *     ?Release@MeetNowExperienceManager@@W7EAAKXZ @ 0x1801F3250 (-Release@MeetNowExperienceManager@@W7EAAKXZ.c)
 *     ?Release@MeetNowExperienceManager@@WBA@EAAKXZ @ 0x1801F3270 (-Release@MeetNowExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@MeetNowExperienceManager@@WBI@EAAKXZ @ 0x1801F3290 (-Release@MeetNowExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Release(
        CTaskContinuityActivitiesExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::Release(this);
}
