/*
 * XREFs of sub_140532404 @ 0x140532404
 * Callers:
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 *     sub_140533370 @ 0x140533370 (sub_140533370.c)
 *     sub_140533520 @ 0x140533520 (sub_140533520.c)
 * Callees:
 *     sub_14052266C @ 0x14052266C (sub_14052266C.c)
 */

__int64 __fastcall sub_140532404(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = WORD1(a1);
  if ( (unsigned int)v1 >= 0x20 )
    sub_14052266C(a1, 0LL, 0LL, 0LL, 0LL);
  v2 = qword_140C49CA0[v1];
  result = 0LL;
  if ( v2 )
    return v2 + 56LL * ((unsigned __int16)a1 >> 9);
  return result;
}
