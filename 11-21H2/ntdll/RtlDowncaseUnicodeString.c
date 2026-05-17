/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18000E340
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x18000E3E4 (NLS_DOWNCASE.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(_WORD *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v5; // rsi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r15
  _WORD *v9; // r9
  _WORD *v10; // r8
  unsigned int v11; // r10d

  v5 = a1;
  v6 = 0LL;
  if ( !a3 && !*a2 )
  {
    *a1 = 0;
    return 0LL;
  }
  v8 = qword_180177700;
  v9 = a1 + 1;
  v10 = a1 + 4;
  LOBYTE(a1) = a3;
  result = AllocateOrValidateUnicodeStringBuffer(a1, *a2, v10, v9);
  if ( (int)result >= 0 )
  {
    v11 = *a2 >> 1;
    while ( (unsigned int)v6 < v11 )
    {
      *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * v6) = NLS_DOWNCASE(v8, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * v6));
      v6 = (unsigned int)(v6 + 1);
    }
    *v5 = *a2;
    return 0LL;
  }
  return result;
}
