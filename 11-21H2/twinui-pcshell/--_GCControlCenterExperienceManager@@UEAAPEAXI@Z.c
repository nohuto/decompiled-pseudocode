/*
 * XREFs of ??_GCControlCenterExperienceManager@@UEAAPEAXI@Z @ 0x180353570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18035335C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 */

CControlCenterExperienceManager *__fastcall CControlCenterExperienceManager::`scalar deleting destructor'(
        CControlCenterExperienceManager *this,
        char a2)
{
  CControlCenterExperienceManager::~CControlCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
