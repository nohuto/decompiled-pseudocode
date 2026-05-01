/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x180540A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x180160884 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *lpData,
        unsigned __int64 cbData)
{
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  const WCHAR *v10; // r10
  unsigned int v11; // ebx
  HKEY v13; // rcx
  unsigned int KeyW; // eax
  __int64 v15; // rdx
  HKEY phkResult[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0;
  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  v13 = *(HKEY *)(v9 + 8LL * v8 + 16);
  phkResult[0] = 0LL;
  if ( v10 )
  {
    KeyW = RegCreateKeyW(v13, v10, phkResult);
    if ( KeyW )
    {
      v15 = 92LL;
LABEL_9:
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)v15,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              (const char *)KeyW);
      goto LABEL_10;
    }
    v13 = phkResult[0];
  }
  KeyW = RegSetValueExW(v13, a4, 0, dwType, lpData, cbData);
  if ( KeyW )
  {
    v15 = 99LL;
    goto LABEL_9;
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
  return v11;
}
