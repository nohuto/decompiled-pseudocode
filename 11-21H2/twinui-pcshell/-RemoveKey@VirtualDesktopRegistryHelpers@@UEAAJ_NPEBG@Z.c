/*
 * XREFs of ?RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x180540990
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x180160884 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::RemoveKey(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3)
{
  unsigned __int8 v3; // dl
  const WCHAR *v4; // r8
  __int64 v5; // r9
  LSTATUS result; // eax

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0;
  result = RegDeleteTreeW(*(HKEY *)(v5 + 8LL * v3 + 16), v4);
  if ( !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
