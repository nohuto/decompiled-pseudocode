/*
 * XREFs of ??_GRetailDemoExperienceManager@@EEAAPEAXI@Z @ 0x1804574F0
 * Callers:
 *     ??_ERetailDemoExperienceManager@@GDA@EAAPEAXI@Z @ 0x180298940 (--_ERetailDemoExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RetailDemoExperienceManager@@EEAA@XZ @ 0x1804572FC (--1RetailDemoExperienceManager@@EEAA@XZ.c)
 */

RetailDemoExperienceManager *__fastcall RetailDemoExperienceManager::`scalar deleting destructor'(
        RetailDemoExperienceManager *this,
        char a2)
{
  RetailDemoExperienceManager::~RetailDemoExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
