/*
 * XREFs of ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x180442470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x1804422F8 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 */

CShoulderTapExperienceManager *__fastcall CShoulderTapExperienceManager::`scalar deleting destructor'(
        CShoulderTapExperienceManager *this,
        char a2)
{
  CShoulderTapExperienceManager::~CShoulderTapExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
