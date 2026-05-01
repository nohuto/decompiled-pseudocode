/*
 * XREFs of ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x1805406B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopRegistryHelpers@@UEAA@XZ @ 0x180540678 (--1VirtualDesktopRegistryHelpers@@UEAA@XZ.c)
 */

HKEY *__fastcall VirtualDesktopRegistryHelpers::`vector deleting destructor'(HKEY *this, char a2)
{
  VirtualDesktopRegistryHelpers::~VirtualDesktopRegistryHelpers(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
