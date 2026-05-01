/*
 * XREFs of ??_ECJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18012D410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D560 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::`vector deleting destructor'(
        CJumpViewExperienceManager *this,
        char a2)
{
  CJumpViewExperienceManager::~CJumpViewExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x358uLL);
  return this;
}
