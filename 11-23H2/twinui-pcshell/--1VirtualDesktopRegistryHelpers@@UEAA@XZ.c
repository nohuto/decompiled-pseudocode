/*
 * XREFs of ??1VirtualDesktopRegistryHelpers@@UEAA@XZ @ 0x1805FB478
 * Callers:
 *     ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x1805FB4D0 (--_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopRegistryHelpers::~VirtualDesktopRegistryHelpers(VirtualDesktopRegistryHelpers *this)
{
  HKEY v2; // rcx
  HKEY v3; // rcx

  v2 = (HKEY)*((_QWORD *)this + 3);
  if ( v2 )
    RegCloseKey(v2);
  v3 = (HKEY)*((_QWORD *)this + 2);
  if ( v3 )
    RegCloseKey(v3);
  *((_DWORD *)this + 3) = -1073741823;
}
