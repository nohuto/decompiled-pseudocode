/*
 * XREFs of sub_140A4D8D8 @ 0x140A4D8D8
 * Callers:
 *     sub_140A4BEC4 @ 0x140A4BEC4 (sub_140A4BEC4.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A4D8D8(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  _QWORD *v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r8

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 < v3 )
  {
    v5 = *(_QWORD **)a1;
    v10 = 0LL;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
    v3 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 8);
    v6 = *v5;
    if ( a2 < *v5 + v3 )
      goto LABEL_3;
    v10 = *(_QWORD *)(a1 + 16);
  }
  v6 = *v5;
  v11 = v3;
  v3 = v10;
  v12 = v5;
  if ( a2 >= *v5 + v10 )
  {
    v6 = *v5;
    v3 = v11;
    do
    {
      v3 += v6;
      v5 = v12 + 2;
      *(_QWORD *)(a1 + 16) = v3;
      v12 = v5;
      *(_QWORD *)(a1 + 8) = v5;
      v6 = *v5;
    }
    while ( a2 >= *v5 + v3 );
  }
LABEL_3:
  v7 = v5[1];
  v8 = a2 - v3;
  *a3 = v6 - v8;
  return v8 + v7;
}
