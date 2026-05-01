/*
 * XREFs of ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x1803626C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180362348 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 */

CToastCenterExperienceManager *__fastcall CToastCenterExperienceManager::`vector deleting destructor'(
        CToastCenterExperienceManager *this,
        char a2)
{
  CToastCenterExperienceManager::~CToastCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
