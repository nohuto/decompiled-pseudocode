/*
 * XREFs of sub_14095BE9C @ 0x14095BE9C
 * Callers:
 *     sub_14095DC2C @ 0x14095DC2C (sub_14095DC2C.c)
 * Callees:
 *     iswalnum @ 0x1403E1BB0 (iswalnum.c)
 *     sub_1403E1BCC @ 0x1403E1BCC (sub_1403E1BCC.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 */

PWCHAR __fastcall sub_14095BE9C(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  wchar_t *v5; // rsi
  unsigned __int16 Length; // r15
  PWCHAR UnicodeSubstring; // rax
  PWCHAR v8; // rdi
  __int64 v9; // r14
  wint_t v10; // r12
  __int16 v11; // cx
  wchar_t *Buffer; // r8
  wchar_t v13; // ax
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
        else if ( (unsigned int)sub_1403E1BCC(v11) && iswalnum(v10) )
        {
          goto LABEL_17;
        }
      }
      if ( Length == a2->Length && !v8[v9] )
        return v8;
      Buffer = a2->Buffer;
      v13 = Buffer[(unsigned int)(v9 - 1)];
      if ( v13 == 92 || v8[v9] == 92 || v13 == 37 && *Buffer == 37 )
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
