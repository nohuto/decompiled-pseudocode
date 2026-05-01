/*
 * XREFs of ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x180360F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x180360F34 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 */

CTaskContinuityActivitiesExperienceManager *__fastcall CTaskContinuityActivitiesExperienceManager::`vector deleting destructor'(
        CTaskContinuityActivitiesExperienceManager *this,
        char a2)
{
  CTaskContinuityActivitiesExperienceManager::~CTaskContinuityActivitiesExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
