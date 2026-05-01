/*
 * XREFs of ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1801BE630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::`scalar deleting destructor'(
        CBaseTrayFlyoutExperienceManager *this,
        char a2)
{
  CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1E8uLL);
  return this;
}
