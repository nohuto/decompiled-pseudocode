/*
 * XREFs of ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1805406F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x180160884 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::AddKey(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3)
{
  unsigned __int8 v3; // dl
  __int64 v4; // rcx
  const WCHAR *v5; // r9
  unsigned int v6; // ebx
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HKEY phkResult; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  phkResult = 0LL;
  v8 = RegCreateKeyW(*(HKEY *)(v4 + 8LL * v3 + 16), v5, &phkResult);
  if ( v8 )
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0xA2,
           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
           (const char *)v8);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  return v6;
}
