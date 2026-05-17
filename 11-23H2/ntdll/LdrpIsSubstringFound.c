/*
 * XREFs of LdrpIsSubstringFound @ 0x1800DFE20
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800DFEE4 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  _WORD *i; // rsi

  v4 = 0;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    8229LL,
    (__int64)"LdrpIsSubstringFound",
    2LL,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    a2,
    a1);
  v5 = *a2;
  if ( *a1 >= (unsigned __int16)v5 )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = ((unsigned __int64)*a1 - v5) >> 1;
    v8 = (unsigned __int64)*a2 >> 1;
    for ( i = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7); (unsigned int)RtlCompareUnicodeStrings(i, v8, v6, v8, 1); --i )
    {
      if ( !v7 )
        return v4;
      --v7;
    }
    return 1;
  }
  return v4;
}
