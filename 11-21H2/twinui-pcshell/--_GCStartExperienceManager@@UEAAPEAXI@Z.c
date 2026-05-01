/*
 * XREFs of ??_GCStartExperienceManager@@UEAAPEAXI@Z @ 0x18012D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18012D44C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CStartExperienceManager *__fastcall CStartExperienceManager::`scalar deleting destructor'(
        CStartExperienceManager *this,
        char a2)
{
  CStartExperienceManager::~CStartExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2C8uLL);
  return this;
}
