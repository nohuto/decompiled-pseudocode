/*
 * XREFs of RtlValidateUnicodeString @ 0x18007E530
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x18007E3F0 (RtlDuplicateUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlValidateUnicodeString(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // cx

  result = 0LL;
  if ( a1 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0 )
      return 3221225485LL;
    v3 = *(_WORD *)(a2 + 2);
    if ( (v3 & 1) != 0 || *(_WORD *)a2 > v3 || v3 == 0xFFFF || !*(_QWORD *)(a2 + 8) && (*(_WORD *)a2 || v3) )
      return 3221225485LL;
  }
  return result;
}
