/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180074340
 * Callers:
 *     <none>
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010048 (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NLS_DOWNCASE @ 0x1800743E4 (NLS_DOWNCASE.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 result; // rax
  unsigned int v8; // r11d

  v5 = 0LL;
  if ( a3 || *a2 )
  {
    v6 = qword_180184810;
    result = AllocateOrValidateUnicodeStringBuffer(a3, *a2, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
    if ( (int)result < 0 )
      return result;
    v8 = *a2 >> 1;
    while ( (unsigned int)v5 < v8 )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v5) = NLS_DOWNCASE(v6, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * v5));
      v5 = (unsigned int)(v5 + 1);
    }
    *(_WORD *)a1 = *a2;
  }
  else
  {
    *(_WORD *)a1 = 0;
  }
  return 0LL;
}
