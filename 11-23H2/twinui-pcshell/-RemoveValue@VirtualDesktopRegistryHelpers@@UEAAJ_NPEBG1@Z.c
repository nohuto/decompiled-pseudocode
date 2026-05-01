/*
 * XREFs of ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x1805FB940
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RemoveValue(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  const WCHAR *v7; // r9
  LSTATUS v9; // eax
  unsigned int v10; // ebx
  bool v11; // cc
  HKEY phkResult; // [rsp+20h] [rbp-18h] BYREF

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  phkResult = 0LL;
  v9 = RegOpenKeyW(*(HKEY *)(v6 + 8LL * v5 + 16), v7, &phkResult);
  v10 = v9;
  v11 = v9 <= 0;
  if ( v9 || (v9 = RegDeleteValueW(phkResult, a4), v10 = v9, v11 = v9 <= 0, v9) )
  {
    if ( !v11 )
      v10 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    v10 = 0;
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  return v10;
}
