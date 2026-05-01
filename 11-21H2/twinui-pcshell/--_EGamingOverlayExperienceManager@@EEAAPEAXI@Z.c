/*
 * XREFs of ??_EGamingOverlayExperienceManager@@EEAAPEAXI@Z @ 0x18032D36C
 * Callers:
 *     ??_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z @ 0x1801F0980 (--_EGamingOverlayExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x18032C344 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 */

GamingOverlayExperienceManager *__fastcall GamingOverlayExperienceManager::`vector deleting destructor'(
        GamingOverlayExperienceManager *this,
        char a2)
{
  GamingOverlayExperienceManager::~GamingOverlayExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
