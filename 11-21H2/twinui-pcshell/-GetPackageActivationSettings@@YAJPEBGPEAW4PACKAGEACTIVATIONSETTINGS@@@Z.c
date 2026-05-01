/*
 * XREFs of ?GetPackageActivationSettings@@YAJPEBGPEAW4PACKAGEACTIVATIONSETTINGS@@@Z @ 0x18061B068
 * Callers:
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1805E8058 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageActivationSettings(LPCWSTR lpValue, enum PACKAGEACTIVATIONSETTINGS *a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = RegOpenCurrentUser(0x20019u, &phkResult);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  if ( !v5 )
  {
    pcbData = 4;
    if ( !RegGetValueW(
            phkResult,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\PackageActivate",
            lpValue,
            0x18u,
            0LL,
            &pvData,
            &pcbData) )
      *(_DWORD *)a2 = pvData;
    RegCloseKey(phkResult);
  }
  return 0LL;
}
