/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1802E7110
 * Callers:
 *     <none>
 * Callees:
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *a6,
        unsigned __int64 cbData)
{
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  const WCHAR *v10; // r10
  HKEY v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int lpData; // [rsp+20h] [rbp-28h]
  HKEY phkResult; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  phkResult = 0LL;
  v12 = *(HKEY *)(v9 + 8LL * v8 + 16);
  if ( v10 )
  {
    v13 = RegCreateKeyW(v12, v10, &phkResult);
    if ( v13 )
    {
      v14 = 93LL;
      goto LABEL_9;
    }
    v12 = phkResult;
  }
  v13 = RegSetValueExW(v12, a4, 0, dwType, a6, cbData);
  if ( !v13 )
  {
    v15 = 0;
    goto LABEL_11;
  }
  v14 = 100LL;
LABEL_9:
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v14,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
          (const char *)v13,
          lpData);
LABEL_11:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v15;
}
