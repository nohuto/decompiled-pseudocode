/*
 * XREFs of ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800F88D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800FE16C (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 */

KeyboardOverriderDispatcher *__fastcall KeyboardOverriderDispatcher::`scalar deleting destructor'(
        KeyboardOverriderDispatcher *this,
        char a2)
{
  KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
