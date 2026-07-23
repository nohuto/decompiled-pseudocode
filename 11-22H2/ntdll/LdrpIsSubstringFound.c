/*
 * XREFs of LdrpIsSubstringFound @ 0x1800DEAF4
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DEBB8 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  const WCHAR *v6; // r15
  unsigned __int64 v7; // rdi
  SIZE_T v8; // rbp
  const WCHAR *i; // rsi

  v4 = 0;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    8223,
    (__int64)"LdrpIsSubstringFound",
    2u,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    a2,
    a1);
  v5 = *a2;
  if ( *a1 >= (unsigned __int16)v5 )
  {
    v6 = (const WCHAR *)*((_QWORD *)a2 + 1);
    v7 = ((unsigned __int64)*a1 - v5) >> 1;
    v8 = (unsigned __int64)*a2 >> 1;
    for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * v7); RtlCompareUnicodeStrings(i, v8, v6, v8, 1u); --i )
    {
      if ( !v7 )
        return v4;
      --v7;
    }
    return 1;
  }
  return v4;
}
