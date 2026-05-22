/*
 * XREFs of ??_EHotkeyClientRegistration@@UEAAPEAXI@Z @ 0x1801D2710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1HotkeyClientRegistration@@UEAA@XZ @ 0x1801D2168 (--1HotkeyClientRegistration@@UEAA@XZ.c)
 */

HotkeyClientRegistration *__fastcall HotkeyClientRegistration::`vector deleting destructor'(
        HotkeyClientRegistration *this,
        char a2)
{
  HotkeyClientRegistration::~HotkeyClientRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
