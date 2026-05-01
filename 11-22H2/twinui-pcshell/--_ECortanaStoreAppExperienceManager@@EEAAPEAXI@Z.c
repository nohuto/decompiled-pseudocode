/*
 * XREFs of ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x180176EE4
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z @ 0x180298E60 (--_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x180176F20 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CortanaStoreAppExperienceManager *__fastcall CortanaStoreAppExperienceManager::`vector deleting destructor'(
        CortanaStoreAppExperienceManager *this,
        char a2)
{
  CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x190uLL);
  return this;
}
