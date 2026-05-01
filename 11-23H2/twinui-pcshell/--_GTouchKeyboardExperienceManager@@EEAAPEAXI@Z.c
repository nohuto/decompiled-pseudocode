/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18050D524
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z @ 0x1802A0DD0 (--_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::`scalar deleting destructor'(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
