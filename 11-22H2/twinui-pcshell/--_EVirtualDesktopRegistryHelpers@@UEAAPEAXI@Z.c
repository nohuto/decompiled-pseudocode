/*
 * XREFs of ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x1805FB4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopRegistryHelpers@@UEAA@XZ @ 0x1805FB478 (--1VirtualDesktopRegistryHelpers@@UEAA@XZ.c)
 */

VirtualDesktopRegistryHelpers *__fastcall VirtualDesktopRegistryHelpers::`vector deleting destructor'(
        VirtualDesktopRegistryHelpers *this,
        char a2)
{
  VirtualDesktopRegistryHelpers::~VirtualDesktopRegistryHelpers(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
