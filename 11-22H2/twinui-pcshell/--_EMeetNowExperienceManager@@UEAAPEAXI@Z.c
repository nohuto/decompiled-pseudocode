/*
 * XREFs of ??_EMeetNowExperienceManager@@UEAAPEAXI@Z @ 0x1804717F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18047148C (--1MeetNowExperienceManager@@UEAA@XZ.c)
 */

MeetNowExperienceManager *__fastcall MeetNowExperienceManager::`vector deleting destructor'(
        MeetNowExperienceManager *this,
        char a2)
{
  MeetNowExperienceManager::~MeetNowExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
