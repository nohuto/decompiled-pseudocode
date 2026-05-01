/*
 * XREFs of ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x1800C59B4
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsDeveloperOverrideEnabled(CortanaAvailability *this, unsigned __int8 *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  bool v5; // cc
  int phkResult; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int Data; // [rsp+40h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  Data = 0;
  hKey = 0LL;
  *(_BYTE *)this = 0;
  v3 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Cortana", 0, 0x20019u, &hKey);
  v4 = v3;
  v5 = v3 <= 0;
  if ( !v3 )
  {
    cbData = 4;
    v3 = RegQueryValueExW(hKey, L"DevOverrideOneSettings", 0LL, 0LL, (LPBYTE)&Data, &cbData);
    v4 = v3;
    v5 = v3 <= 0;
    if ( !v3 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      goto LABEL_11;
    }
  }
  if ( !v5 )
    v4 = (unsigned __int16)v3 | 0x80070000;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v4 == -2147024894 )
    return 0LL;
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_11:
    if ( Data == 1 )
      *(_BYTE *)this = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
    (const char *)v4,
    phkResult);
  return v4;
}
