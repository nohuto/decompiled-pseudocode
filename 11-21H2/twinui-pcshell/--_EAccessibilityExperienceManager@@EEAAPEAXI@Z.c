/*
 * XREFs of ??_EAccessibilityExperienceManager@@EEAAPEAXI@Z @ 0x180487784
 * Callers:
 *     ??_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z @ 0x180205FB0 (--_EAccessibilityExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x1804874A4 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 */

AccessibilityExperienceManager *__fastcall AccessibilityExperienceManager::`vector deleting destructor'(
        AccessibilityExperienceManager *this,
        char a2)
{
  AccessibilityExperienceManager::~AccessibilityExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
