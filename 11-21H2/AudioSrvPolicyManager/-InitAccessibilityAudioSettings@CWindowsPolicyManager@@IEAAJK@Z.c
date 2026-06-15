/*
 * XREFs of ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000A100
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800098D0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009FA0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002F0DC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 */

// Hidden C++ exception states: #wind=7
int __fastcall CWindowsPolicyManager::InitAccessibilityAudioSettings(CWindowsPolicyManager *this, DWORD a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // ebx
  HKEY v7; // rcx
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+20h] [rbp-28h]
  HKEY phkResult; // [rsp+30h] [rbp-18h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  CWindowsPolicyManager *Type; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+69h] [rbp+21h]
  DWORD cbData; // [rsp+70h] [rbp+28h] BYREF
  int Data; // [rsp+78h] [rbp+30h] BYREF

  Type = this;
  if ( !a2 )
    return 0;
  v4 = RpcImpersonateClient(0LL);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x232,
             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v4,
             v10);
  v16 = 1;
  phkResult = 0LL;
  v5 = RegOpenCurrentUser(0x20019u, &phkResult);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x237,
           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v5,
           v10);
    v7 = phkResult;
    if ( phkResult )
LABEL_7:
      RegCloseKey(v7);
  }
  else
  {
    hKey = 0LL;
    v8 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
    if ( !v8 )
    {
      LODWORD(Type) = 4;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, &cbData)
        && (_DWORD)Type == 4
        && cbData == 4 )
      {
        v9 = Data;
      }
      else
      {
        v9 = 0;
        Data = 0;
      }
      TsSessionIdInitAccessibilityAudioSettings(a2, v9);
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
      v6 = 0;
      goto LABEL_23;
    }
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x23A,
           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v8,
           v11);
    if ( hKey )
      RegCloseKey(hKey);
    v7 = phkResult;
    if ( phkResult )
      goto LABEL_7;
  }
LABEL_23:
  RpcRevertToSelf();
  return v6;
}
