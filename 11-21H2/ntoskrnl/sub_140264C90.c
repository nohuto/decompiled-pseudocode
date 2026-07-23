/*
 * XREFs of sub_140264C90 @ 0x140264C90
 * Callers:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_1402678C8 @ 0x1402678C8 (sub_1402678C8.c)
 *     sub_140267CA8 @ 0x140267CA8 (sub_140267CA8.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140264C90(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 *v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = qword_14001C780;
  v7 = 0LL;
  v8 = 0LL;
  v9 = a3;
  v10 = 3LL;
  do
  {
    if ( (_DWORD)v5 == 4 )
    {
      if ( (_DWORD)v4 == 2 )
        v12 = *(_QWORD *)(v7 + a1) + *(_QWORD *)(v7 + a1 + 8);
      else
        v12 = *(_QWORD *)(a1 + 8 * (v8 + v4));
      v9 = v4;
    }
    else
    {
      v11 = (_QWORD *)(a1 + v7 + 32 * (v5 + 4 * v9));
      v12 = v11[6]
          + v11[7]
          + v11[9]
          + v11[38]
          + v11[39]
          + v11[41]
          + *(_QWORD *)(v7 + 32 * (v5 + 4 * v9 + 2) + a1)
          + *(_QWORD *)(v7 + 32 * (v5 + 4 * v9 + 10) + a1);
    }
    v13 = v12 * *v6++;
    v8 += 134LL;
    v3 += v13;
    v7 += 1072LL;
    --v10;
  }
  while ( v10 );
  return v3;
}
