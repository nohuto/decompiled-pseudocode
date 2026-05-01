/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18036ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18036AAF0 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(
        CPeopleBarJumpViewExperienceManager *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
