/*
 * XREFs of RtlpAutoCompleteLanguageFallback @ 0x1800FBBAC
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800FC618 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180112F54 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpAutoCompleteLanguageFallback(__int64 a1, const WCHAR *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // rax
  const WCHAR *i; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-40h] BYREF

  if ( !a1 || !a2 || !*a2 )
    return 3221225485LL;
  result = RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v12);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 3221226021LL;
  if ( *(unsigned __int16 *)(v6 + 6) <= (unsigned int)v12 )
    return 3221226021LL;
  if ( !*(_QWORD *)(v6 + 16) )
    return 3221226021LL;
  v7 = (_BYTE *)(*(_QWORD *)(v6 + 16) + 28LL * (unsigned int)v12);
  if ( !v7 )
    return 3221226021LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  for ( i = &a2[v8 + 1]; i; i += v10 + 1 )
  {
    if ( !*i )
      break;
    LOBYTE(v5) = 1;
    result = RtlpMuiRegGetFallbackLanguageInfoByName(a1, v7, i, v5, v13);
    if ( (int)result < 0 )
      return result;
    v7 = v13;
    v10 = -1LL;
    do
      ++v10;
    while ( i[v10] );
  }
  if ( (*v7 & 6) == 0 )
    return 0LL;
  v11 = i - a2;
  if ( (unsigned int)v11 >= 0x105 )
    return 3221225507LL;
  result = RtlpGetCompleteLanguageFallback(a1, (_DWORD)v7, 0, (_DWORD)i, 261 - (int)v11);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
