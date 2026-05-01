/*
 * XREFs of ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAAPEAXI@Z @ 0x1800CC6BC
 * Callers:
 *     ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z @ 0x180210450 (--_E-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1800CC760 (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

NPSMDesktopShellComponent *__fastcall wil::details::module_count_wrapper<NPSMDesktopShellComponent>::`vector deleting destructor'(
        NPSMDesktopShellComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<NPSMDesktopShellComponent>::~module_count_wrapper<NPSMDesktopShellComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x120uLL);
  return a1;
}
