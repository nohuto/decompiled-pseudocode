/*
 * XREFs of ??_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z @ 0x18038E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x18038E2C8 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 */

UndockedSearchAppExperienceManager *__fastcall UndockedSearchAppExperienceManager::`scalar deleting destructor'(
        UndockedSearchAppExperienceManager *this,
        char a2)
{
  UndockedSearchAppExperienceManager::~UndockedSearchAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
