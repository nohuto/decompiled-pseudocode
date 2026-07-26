/*
 * XREFs of ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C010C72C
 * Callers:
 *     ndisValidateNdisVarDataDescInputString @ 0x1C010C6A8 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C0123434 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C0123480 (ndisValidateNdisVarDataDesc32InputString.c)
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
  __int64 v6; // rax
  __int16 v7; // cx
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( (a2 & 1) == 0 )
  {
    if ( !a2 )
    {
      v7 = 0;
      a1 = 0LL;
      LOWORD(a2) = 0;
LABEL_7:
      *(_WORD *)(a5 + 2) = a2;
      result = 1;
      *(_QWORD *)(a5 + 8) = a1;
      *(_WORD *)a5 = v7;
      return result;
    }
    if ( a2 <= 0x1000 )
    {
      v6 = (a2 >> 1) - 1;
      if ( !a4 )
        goto LABEL_5;
      v9 = (unsigned int)v6;
      if ( !*(_WORD *)(a1 + 2 * v6) )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(a1 + 2 * v10) );
        if ( v10 == v9 )
        {
LABEL_5:
          v7 = a2;
          if ( a4 )
            v7 = a2 - 2;
          goto LABEL_7;
        }
      }
    }
  }
  return 0;
}
