/*
 * XREFs of LdrpGetParentLangId @ 0x18008C720
 * Callers:
 *     LdrResFallbackLangList @ 0x180007264 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180015780 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  const WCHAR *v5; // rdi
  int ParentLocaleName; // eax
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-39h] BYREF
  PCWSTR v10[2]; // [rsp+28h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF

  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  SourceString[1] = (PCWSTR)v13;
  WORD1(SourceString[0]) = 30;
  v4 = RtlLcidToLocaleName(a1, (__int64)SourceString, 2, 0);
  if ( v4 >= 0
    || v4 == -1073741789
    && (SourceString[1] = 0LL, WORD1(SourceString[0]) = 0,
                               (int)RtlLcidToLocaleName(v3, (__int64)SourceString, 2, 1) >= 0) )
  {
    v5 = SourceString[1];
    WORD1(v10[0]) = 30;
    v10[1] = (PCWSTR)v12;
    ParentLocaleName = RtlGetParentLocaleName(SourceString[1], (__int64)v10, 6, 0);
    v7 = ParentLocaleName;
    if ( ParentLocaleName >= 0
      || ParentLocaleName == -1073741789
      && (v10[1] = 0LL, WORD1(v10[0]) = 0, v7 = RtlGetParentLocaleName(v5, (__int64)v10, 6, 1), v7 >= 0) )
    {
      if ( LOWORD(v10[0]) )
      {
        v7 = RtlLocaleNameToLcid(v10[1], &v9, 3);
        if ( v7 >= 0 )
          *a2 = v9;
      }
    }
  }
  else
  {
    v5 = SourceString[1];
    v7 = -1073741811;
  }
  if ( (_BYTE *)v10[1] != v12 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10[1]);
    v5 = SourceString[1];
  }
  if ( v5 != (const WCHAR *)v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString[1]);
  return (unsigned int)v7;
}
