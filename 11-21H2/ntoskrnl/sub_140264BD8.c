/*
 * XREFs of sub_140264BD8 @ 0x140264BD8
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_140267CA8 @ 0x140267CA8 (sub_140267CA8.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     sub_14045C75A @ 0x14045C75A (sub_14045C75A.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     sub_1405AD910 @ 0x1405AD910 (sub_1405AD910.c)
 *     sub_1405AF594 @ 0x1405AF594 (sub_1405AF594.c)
 * Callees:
 *     sub_140264C90 @ 0x140264C90 (sub_140264C90.c)
 */

__int64 __fastcall sub_140264BD8(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int v9; // r15d
  _QWORD *v11; // rax

  v3 = a2;
  v4 = (_QWORD *)(a1 + 22560);
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)dword_140D05004 > 1 )
      v11 = (_QWORD *)(a1 + 8 * (v8 + 2 * (v3 + 1420)));
    else
      v11 = v4;
    v6 += *v11;
    if ( v9 )
      v6 += sub_140264C90(a1, (unsigned int)v3, v7);
    ++v7;
    ++v8;
    ++v4;
  }
  while ( v8 <= v5 );
  return v6;
}
