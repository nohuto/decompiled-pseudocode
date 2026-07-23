/*
 * XREFs of sub_140367C0C @ 0x140367C0C
 * Callers:
 *     sub_140367B44 @ 0x140367B44 (sub_140367B44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140367C0C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return -1LL;
  result = a1 ^ qword_140D06E00 ^ *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2 ^ a1 ^ qword_140D06E00;
  return result;
}
