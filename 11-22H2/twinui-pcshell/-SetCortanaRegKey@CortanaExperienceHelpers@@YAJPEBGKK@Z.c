/*
 * XREFs of ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x1800C58F8
 * Callers:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800C5528 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaExperienceHelpers::SetCortanaRegKey(LPCWSTR lpValueName, const unsigned __int16 *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  bool v5; // cc
  int Data; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  Data = (int)a2;
  hKey = 0LL;
  v3 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Cortana",
         0,
         0LL,
         0,
         2u,
         0LL,
         &hKey,
         0LL);
  v4 = v3;
  v5 = v3 <= 0;
  if ( v3 || (v3 = RegSetValueExW(hKey, lpValueName, 0, 4u, (const BYTE *)&Data, 4u), v4 = v3, v5 = v3 <= 0, v3) )
  {
    if ( !v5 )
      v4 = (unsigned __int16)v3 | 0x80070000;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
