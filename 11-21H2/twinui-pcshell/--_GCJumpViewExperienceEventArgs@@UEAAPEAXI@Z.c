/*
 * XREFs of ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x1803717A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x18037152C (--1StateChangedEventArgsImpl@@UEAA@XZ.c)
 */

HSTRING *__fastcall CJumpViewExperienceEventArgs::`scalar deleting destructor'(HSTRING *this, char a2)
{
  StateChangedEventArgsImpl::~StateChangedEventArgsImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
