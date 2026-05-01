/*
 * XREFs of ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1803937E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180393288 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::`scalar deleting destructor'(
        CBaseTrayFlyoutExperienceManager *this,
        char a2)
{
  CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
