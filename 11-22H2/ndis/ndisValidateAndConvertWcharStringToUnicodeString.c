/*
 * XREFs of ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C010C638
 * Callers:
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C010C48C (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C010C518 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C012EFA0 (ndisValidateNdisOffsetAndLengthInputString.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateAndConvertWcharStringToUnicodeString(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  __int16 v5; // r10
  char result; // al
  __int64 v7; // rax

  if ( (a2 & 1) == 0 )
  {
    if ( !a2 )
    {
      v5 = 0;
      a1 = 0LL;
      LOWORD(a2) = 0;
LABEL_7:
      result = 1;
      *(_WORD *)(a5 + 2) = a2;
      *(_QWORD *)(a5 + 8) = a1;
      *(_WORD *)a5 = v5;
      return result;
    }
    if ( a2 <= 0x1000 )
    {
      if ( !a4 )
        goto LABEL_5;
      if ( !*(_WORD *)(a1 + 2LL * ((a2 >> 1) - 1)) )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 2 * v7) );
        if ( v7 == (a2 >> 1) - 1 )
        {
LABEL_5:
          v5 = a2;
          if ( a4 )
            v5 = a2 - 2;
          goto LABEL_7;
        }
      }
    }
  }
  return 0;
}
