/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18004E9BC
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18004E7EC (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     _lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_::operator() @ 0x1801DA2A4 (_lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_--operator().c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  REGSAM samDesired; // r12d
  signed int Error; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  LSTATUS v11; // eax
  LSTATUS Key; // eax
  HKEY v13; // rcx
  HKEY v14; // rcx
  LSTATUS v16; // eax
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-18h]
  HKEY phkResult; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+38h] BYREF

  samDesired = (unsigned int)a3;
  *a4 = 0LL;
  v20 = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v20) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error == -2147024774 && v20 )
    {
      lpSubKey = 0LL;
      CoTaskMemFree(0LL);
      Error = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0LL, v20);
      if ( Error >= 0 )
      {
        hKey = 0LL;
        if ( (unsigned int)GetSystemAppDataKey(this, &hKey, lpSubKey, &v20)
          || (Error = ResultFromKnownLastError(), Error >= 0) )
        {
          if ( a2 )
          {
            phkResult = 0LL;
            v11 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x2001Fu, &phkResult);
            Error = v11;
            if ( v11 > 0 )
              Error = (unsigned __int16)v11 | 0x80070000;
            if ( Error >= 0 )
            {
              Key = RegCreateKeyExW(phkResult, a2, 0, 0LL, 0, samDesired, 0LL, a4, 0LL);
              Error = Key;
              if ( Key > 0 )
                Error = (unsigned __int16)Key | 0x80070000;
            }
            v13 = phkResult;
            phkResult = 0LL;
            if ( v13 )
              RegCloseKey(v13);
          }
          else
          {
            v16 = RegOpenKeyExW(hKey, lpSubKey, 0, samDesired, a4);
            Error = v16;
            if ( v16 > 0 )
              Error = (unsigned __int16)v16 | 0x80070000;
          }
        }
        v14 = hKey;
        hKey = 0LL;
        if ( v14 )
          RegCloseKey(v14);
      }
      CoTaskMemFree((LPVOID)lpSubKey);
    }
  }
  return (unsigned int)Error;
}
