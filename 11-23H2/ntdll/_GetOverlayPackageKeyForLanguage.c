/*
 * XREFs of _GetOverlayPackageKeyForLanguage @ 0x18000B254
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

__int64 __fastcall GetOverlayPackageKeyForLanguage(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  char *v6; // [rsp+48h] [rbp-B8h]
  int v7; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-A8h]
  int *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int128 v11; // [rsp+70h] [rbp-90h]
  _BYTE v12[512]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+280h] [rbp+180h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v5 = 0x2000000;
  v6 = &v13;
  result = RtlAppendUnicodeToString(&v5, L"\\Registry\\Machine\\");
  if ( (int)result >= 0 )
  {
    result = RtlGetPersistedStateLocation(L"LanguageOverlayKeyName", v12, 512, 0LL);
    if ( (int)result >= 0 )
    {
      result = RtlAppendUnicodeToString(&v5, v12);
      if ( (int)result >= 0 )
      {
        result = RtlAppendUnicodeToString(&v5, L"\\");
        if ( (int)result >= 0 )
        {
          result = RtlAppendUnicodeToString(&v5, L"OverlayPackages");
          if ( (int)result >= 0 )
          {
            result = RtlAppendUnicodeToString(&v5, L"\\");
            if ( (int)result >= 0 )
            {
              result = RtlAppendUnicodeToString(&v5, a1);
              if ( (int)result >= 0 )
              {
                *a2 = 0LL;
                v9 = &v5;
                v7 = 48;
                v8 = 0LL;
                v10 = 64;
                v11 = 0LL;
                return NtOpenKey(a2, 131097LL, &v7);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
