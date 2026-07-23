/*
 * XREFs of sub_1405F06D8 @ 0x1405F06D8
 * Callers:
 *     sub_1405F0224 @ 0x1405F0224 (sub_1405F0224.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405F06D8(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdx

  v4 = (_QWORD *)a1;
  if ( a1 >= a1 + 4096 )
    return 1;
  while ( *v4 == a3 )
  {
    ++v4;
    a3 = (a3 >> 4) ^ *(_QWORD *)(a4 + 8 * (a3 & 0xF));
    if ( (unsigned __int64)v4 >= a1 + 4096 )
      return 1;
  }
  return 0;
}
