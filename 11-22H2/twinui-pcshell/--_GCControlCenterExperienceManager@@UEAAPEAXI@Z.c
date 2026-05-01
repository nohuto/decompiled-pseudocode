/*
 * XREFs of ??_GCControlCenterExperienceManager@@UEAAPEAXI@Z @ 0x18041E200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18041DC28 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
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
