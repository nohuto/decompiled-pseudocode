/*
 * XREFs of ??_GUnlockActionHelper@@UEAAPEAXI@Z @ 0x180054A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1UnlockActionHelper@@UEAA@XZ @ 0x18005364C (--1UnlockActionHelper@@UEAA@XZ.c)
 */

UnlockActionHelper *__fastcall UnlockActionHelper::`scalar deleting destructor'(UnlockActionHelper *this, char a2)
{
  UnlockActionHelper::~UnlockActionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
