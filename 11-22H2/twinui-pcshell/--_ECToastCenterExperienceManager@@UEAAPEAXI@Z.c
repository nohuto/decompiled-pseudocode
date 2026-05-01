/*
 * XREFs of ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x1804358F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180435284 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
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
