/*
 * XREFs of sub_140657950 @ 0x140657950
 * Callers:
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140657950(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( (int)v2 + 2 > (unsigned int)a1[1] )
    return 2147483653LL;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v2 >> 1)) = 92;
  result = 0LL;
  *a1 += 2;
  return result;
}
