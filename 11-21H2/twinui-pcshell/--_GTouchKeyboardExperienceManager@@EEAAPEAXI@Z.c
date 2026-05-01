/*
 * XREFs of ??_GTouchKeyboardExperienceManager@@EEAAPEAXI@Z @ 0x18045BAE8
 * Callers:
 *     ??_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z @ 0x180205430 (--_ETouchKeyboardExperienceManager@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 */

TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::`scalar deleting destructor'(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  TouchKeyboardExperienceManager::~TouchKeyboardExperienceManager(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
