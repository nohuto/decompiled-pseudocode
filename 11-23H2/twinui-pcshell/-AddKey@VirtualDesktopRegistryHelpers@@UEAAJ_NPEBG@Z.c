/*
 * XREFs of ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1805FB510
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::AddKey(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3)
{
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  const WCHAR *v5; // r9
  unsigned int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HKEY phkResult; // [rsp+48h] [rbp+20h] BYREF

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  phkResult = 0LL;
  v7 = RegCreateKeyW(*(HKEY *)(v4 + 8LL * v3 + 16), v5, &phkResult);
  if ( v7 )
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           163LL,
           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
           (const char *)v7);
  else
    v8 = 0;
  if ( phkResult )
    RegCloseKey(phkResult);
  return v8;
}
