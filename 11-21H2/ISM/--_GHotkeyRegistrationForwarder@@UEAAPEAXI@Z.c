/*
 * XREFs of ??_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z @ 0x1800F8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1HotkeyRegistrationForwarder@@UEAA@XZ @ 0x1800F8D80 (--1HotkeyRegistrationForwarder@@UEAA@XZ.c)
 */

HotkeyRegistrationForwarder *__fastcall HotkeyRegistrationForwarder::`scalar deleting destructor'(
        HotkeyRegistrationForwarder *this,
        char a2)
{
  HotkeyRegistrationForwarder::~HotkeyRegistrationForwarder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
