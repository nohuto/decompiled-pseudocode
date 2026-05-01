/*
 * XREFs of ??_EMiniSearchExperienceManager@@UEAAPEAXI@Z @ 0x1803A12E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MiniSearchExperienceManager@@UEAA@XZ @ 0x1803A1028 (--1MiniSearchExperienceManager@@UEAA@XZ.c)
 */

MiniSearchExperienceManager *__fastcall MiniSearchExperienceManager::`vector deleting destructor'(
        MiniSearchExperienceManager *this,
        char a2)
{
  MiniSearchExperienceManager::~MiniSearchExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
