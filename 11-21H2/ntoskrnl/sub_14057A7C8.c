/*
 * XREFs of sub_14057A7C8 @ 0x14057A7C8
 * Callers:
 *     sub_14057A7C8 @ 0x14057A7C8 (sub_14057A7C8.c)
 *     sub_140A69EB4 @ 0x140A69EB4 (sub_140A69EB4.c)
 * Callees:
 *     sub_14057A7C8 @ 0x14057A7C8 (sub_14057A7C8.c)
 */

void __fastcall sub_14057A7C8(__int64 a1, _QWORD **a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx

  v3 = *a2;
  if ( *a2 != a2 )
  {
    v7 = 53LL * a3;
    v8 = a1 + 34184;
    do
    {
      v9 = *(_QWORD **)(v8 + 8);
      v10 = &v3[v7 + 18];
      if ( *v9 != v8 )
        __fastfail(3u);
      v10[1] = v9;
      *v10 = v8;
      *v9 = v10;
      v11 = v3 + 3;
      *(_QWORD *)(v8 + 8) = v10;
      if ( (_QWORD *)*v11 != v11 )
        sub_14057A7C8(a1, v11, a3);
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a2 );
  }
}
