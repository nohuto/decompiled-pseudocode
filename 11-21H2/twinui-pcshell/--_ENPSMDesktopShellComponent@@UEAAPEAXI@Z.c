/*
 * XREFs of ??_ENPSMDesktopShellComponent@@UEAAPEAXI@Z @ 0x1805DEFDC
 * Callers:
 *     ??_ENPSMDesktopShellComponent@@WCI@EAAPEAXI@Z @ 0x180210470 (--_ENPSMDesktopShellComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1NPSMDesktopShellComponent@@UEAA@XZ @ 0x1800CC6F8 (--1NPSMDesktopShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

NPSMDesktopShellComponent *__fastcall NPSMDesktopShellComponent::`vector deleting destructor'(
        NPSMDesktopShellComponent *this,
        char a2)
{
  NPSMDesktopShellComponent::~NPSMDesktopShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
