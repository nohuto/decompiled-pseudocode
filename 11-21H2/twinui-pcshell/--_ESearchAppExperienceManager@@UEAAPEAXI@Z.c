/*
 * XREFs of ??_ESearchAppExperienceManager@@UEAAPEAXI@Z @ 0x180389B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x180389960 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 */

SearchAppExperienceManager *__fastcall SearchAppExperienceManager::`vector deleting destructor'(
        SearchAppExperienceManager *this,
        char a2)
{
  SearchAppExperienceManager::~SearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
