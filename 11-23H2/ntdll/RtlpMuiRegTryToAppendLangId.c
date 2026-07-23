/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x180012620
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x18001252C (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801130C4 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlpLangNameInMultiSzString_Size @ 0x180010228 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001AF90 (RtlIntegerToUnicode.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // r12
  DWORD v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  __int64 v11; // r13
  unsigned int v12; // edi
  DWORD Lcid; // [rsp+20h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  WCHAR SourceString[4]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v17; // [rsp+40h] [rbp-10h]

  *(_QWORD *)SourceString = 0LL;
  v17 = 0;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      if ( *(__int16 *)(a2 + 6) <= 0 )
        return (unsigned int)-1073741595;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * *(__int16 *)(a2 + 6))));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, SourceString);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( v8 != 4096 )
    {
      v10 = *a3;
      if ( *a3 )
      {
        if ( v10 <= a5 && RtlpLangNameInMultiSzString_Size(a4, DestinationString.Buffer, v10) )
          return v9;
      }
    }
    v11 = (unsigned int)v7 + (DestinationString.Length >> 1);
    v12 = v11 + 1;
    if ( a4 && (unsigned int)v7 < v12 )
    {
      if ( v12 < a5 )
      {
        memmove(&a4[v7], DestinationString.Buffer, DestinationString.Length);
        a4[v11] = 0;
LABEL_15:
        *a3 = v12;
        return v9;
      }
    }
    else if ( v12 < a5 || !a4 )
    {
      goto LABEL_15;
    }
    v9 = -1073741789;
    goto LABEL_15;
  }
  return 3221225485LL;
}
