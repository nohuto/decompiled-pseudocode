/*
 * XREFs of LdrpCompareRedirectedFunction @ 0x1800DFC24
 * Callers:
 *     LdrpAddRedirectedFunction @ 0x1800DF694 (LdrpAddRedirectedFunction.c)
 *     LdrpCheckRedirection @ 0x1800DFA4C (LdrpCheckRedirection.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 */

LONG __fastcall LdrpCompareRedirectedFunction(__int64 a1, __int64 a2)
{
  LONG result; // eax
  char *v5; // rax
  __int64 v6; // rcx
  char v7; // r9

  result = *(_DWORD *)(a2 + 24) - *(_DWORD *)a1;
  if ( !result )
  {
    result = *(_DWORD *)(a2 + 28) - *(_DWORD *)(a1 + 4);
    if ( !result )
    {
      v5 = *(char **)(a2 + 32);
      v6 = *(_QWORD *)(a1 + 8) - (_QWORD)v5;
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 != v5[v6] )
          break;
        ++v5;
        if ( !v7 )
        {
          result = 0;
          goto LABEL_8;
        }
      }
      result = (unsigned __int8)*v5 < (unsigned __int8)v5[v6] ? -1 : 1;
LABEL_8:
      if ( !result )
        return RtlCompareUnicodeString((PUNICODE_STRING)(a2 + 40), (PUNICODE_STRING)(a1 + 16), 1u);
    }
  }
  return result;
}
