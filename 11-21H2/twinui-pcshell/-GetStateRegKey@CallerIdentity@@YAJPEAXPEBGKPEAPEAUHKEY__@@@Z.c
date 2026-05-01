/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800E7B40
 * Callers:
 *     _lambda_c1e1bf6016a03158d50952b4558ffdc8_::operator() @ 0x1800BB9DC (_lambda_c1e1bf6016a03158d50952b4558ffdc8_--operator().c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800E79B4 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  REGSAM samDesired; // r12d
  int Error; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  LSTATUS v11; // eax
  LSTATUS Key; // eax
  HKEY v13; // rcx
  HKEY v14; // rcx
  LSTATUS v16; // eax
  int phkResult; // [rsp+20h] [rbp-50h]
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-18h] BYREF
  HKEY v20; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+38h] BYREF

  samDesired = (unsigned int)a3;
  *a4 = 0LL;
  v21 = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v21) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error == -2147024774 && v21 )
    {
      lpSubKey = 0LL;
      CoTaskMemFree(0LL);
      Error = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0LL, v21, phkResult, (char **)&lpSubKey);
      if ( Error >= 0 )
      {
        hKey = 0LL;
        if ( (unsigned int)GetSystemAppDataKey(this, &hKey, lpSubKey, &v21)
          || (Error = ResultFromKnownLastError(), Error >= 0) )
        {
          if ( a2 )
          {
            v20 = 0LL;
            v11 = RegOpenKeyExW(hKey, lpSubKey, 0, 0x2001Fu, &v20);
            Error = v11;
            if ( v11 > 0 )
              Error = (unsigned __int16)v11 | 0x80070000;
            if ( Error >= 0 )
            {
              Key = RegCreateKeyExW(v20, a2, 0, 0LL, 0, samDesired, 0LL, a4, 0LL);
              Error = Key;
              if ( Key > 0 )
                Error = (unsigned __int16)Key | 0x80070000;
            }
            v13 = v20;
            v20 = 0LL;
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
