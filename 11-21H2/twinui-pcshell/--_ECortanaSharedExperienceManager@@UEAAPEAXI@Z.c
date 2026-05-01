/*
 * XREFs of ??_ECortanaSharedExperienceManager@@UEAAPEAXI@Z @ 0x1803580A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180357C00 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 */

CortanaSharedExperienceManager *__fastcall CortanaSharedExperienceManager::`vector deleting destructor'(
        CortanaSharedExperienceManager *this,
        char a2)
{
  CortanaSharedExperienceManager::~CortanaSharedExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
