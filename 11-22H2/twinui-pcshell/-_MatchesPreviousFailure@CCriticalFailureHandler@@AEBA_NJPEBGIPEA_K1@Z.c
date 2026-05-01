/*
 * XREFs of ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x18073D61C
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

bool __fastcall CCriticalFailureHandler::_MatchesPreviousFailure(
        CCriticalFailureHandler *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  bool v9; // bl
  unsigned int v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v14[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  WCHAR psz2[264]; // [rsp+58h] [rbp-B0h] BYREF

  v9 = 0;
  if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0x20019u, &hKey) )
  {
    if ( SHRegGetDWORD(hKey, 0LL, L"PreviousFailure_Result", &v13) < 0
      || a2 != v13
      || SHRegGetDWORD(hKey, 0LL, L"PreviousFailure_SourceLine", v14) < 0
      || a4 != v14[0]
      || SHRegGetStringEx(hKey, 0LL, L"PreviousFailure_SourceFile", 2u, psz2, 0x104u) < 0
      || StrCmpIW(a3, psz2) )
    {
      goto LABEL_19;
    }
    if ( SHRegGetDWORD(hKey, 0LL, L"PreviousFailure_Arg1", v11) < 0 )
    {
      v9 = a5 == 0LL;
      if ( a5 )
      {
LABEL_19:
        RegCloseKey(hKey);
        return v9;
      }
    }
    else if ( !a5 || *a5 != v11[0] )
    {
      goto LABEL_19;
    }
    if ( SHRegGetDWORD(hKey, 0LL, L"PreviousFailure_Arg2", v11) < 0 )
      v9 = a6 == 0LL;
    else
      v9 = a6 && *a6 == v11[0];
    goto LABEL_19;
  }
  return v9;
}
