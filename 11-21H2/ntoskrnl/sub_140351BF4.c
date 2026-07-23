/*
 * XREFs of sub_140351BF4 @ 0x140351BF4
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_140371218 @ 0x140371218 (sub_140371218.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA72C @ 0x1405EA72C (sub_1405EA72C.c)
 * Callees:
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_140351BF4(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140C5A5D8) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140C5A5D8;
    if ( *a4 )
      v7 = (__int64 *)a4;
    v8 = v7[1];
    if ( v8 )
      sub_1405F1BBC(21, a3, 0, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
