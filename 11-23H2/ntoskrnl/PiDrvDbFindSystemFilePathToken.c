/*
 * XREFs of PiDrvDbFindSystemFilePathToken @ 0x14097011C
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x140971298 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     iswalnum @ 0x1403DA350 (iswalnum.c)
 *     iswalpha @ 0x1403DA36C (iswalpha.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9360 (RtlFindUnicodeSubstring.c)
 */

PWCHAR __fastcall PiDrvDbFindSystemFilePathToken(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  wchar_t *v5; // rsi
  unsigned __int16 Length; // r15
  PWCHAR UnicodeSubstring; // rax
  PWCHAR v8; // rdi
  __int64 v9; // r14
  wint_t v10; // r12
  wint_t v11; // cx
  __int64 v12; // rdx
  wchar_t *Buffer; // r8
  wchar_t v14; // ax
  UNICODE_STRING FullString; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  FullString = *a1;
  v5 = (wchar_t *)_mm_srli_si128((__m128i)FullString, 8).m128i_u64[0];
  FullString.Buffer = v5;
  if ( *v5 )
  {
    Length = FullString.Length;
    do
    {
      UnicodeSubstring = RtlFindUnicodeSubstring(&FullString, a2, 1u);
      v8 = UnicodeSubstring;
      if ( !UnicodeSubstring )
        return (PWCHAR)v2;
      v9 = a2->Length >> 1;
      if ( UnicodeSubstring > a1->Buffer )
      {
        v10 = *(UnicodeSubstring - 1);
        v11 = *a2->Buffer;
        if ( v11 == 92 )
        {
          if ( iswalnum(v10) || v10 == 92 )
            goto LABEL_17;
        }
        else if ( iswalpha(v11) && iswalnum(v10) )
        {
          goto LABEL_17;
        }
      }
      v12 = (unsigned int)v9;
      if ( Length == a2->Length && !v8[v12] )
        return v8;
      Buffer = a2->Buffer;
      v14 = Buffer[(unsigned int)(v9 - 1)];
      if ( v14 == 92 || v8[v12] == 92 || v14 == 37 && *Buffer == 37 )
        return v8;
LABEL_17:
      Length -= a2->Length;
      v5 += v9;
      FullString.Buffer = v5;
      FullString.Length = Length;
    }
    while ( *v5 );
  }
  return (PWCHAR)v2;
}
