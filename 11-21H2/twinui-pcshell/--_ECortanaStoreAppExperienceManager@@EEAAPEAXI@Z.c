/*
 * XREFs of ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x180180C8C
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z @ 0x1801F5640 (--_ECortanaStoreAppExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800E35DC (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
