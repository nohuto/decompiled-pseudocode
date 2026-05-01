/*
 * XREFs of ??_GCInsightsExperienceManager@@EEAAPEAXI@Z @ 0x18012D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18012D72C (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CInsightsExperienceManager *__fastcall CInsightsExperienceManager::`scalar deleting destructor'(
        CInsightsExperienceManager *this,
        char a2)
{
  CInsightsExperienceManager::~CInsightsExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x150uLL);
  return this;
}
