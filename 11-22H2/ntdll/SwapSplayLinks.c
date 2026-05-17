/*
 * XREFs of SwapSplayLinks @ 0x180063138
 * Callers:
 *     RtlDeleteNoSplay @ 0x180062AB0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x180063070 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD **v9; // r11
  _QWORD **v10; // rbx
  _QWORD *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v20 = v2;
    v2 = a2;
    v4 = v3;
    a2 = v20;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v6 = v2;
    }
    else
    {
      v19 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v19 = 2LL;
      v4[v19] = v2;
      v6 = (_QWORD *)*a2;
    }
    *v2 = v6;
    v7 = v2 + 1;
    v8 = v2[1];
    v9 = (_QWORD **)(a2 + 1);
    v10 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v11 = v2 + 2;
    v12 = a2[2];
    a2[1] = v8;
    v13 = v2[2];
    v2[2] = v12;
    a2[2] = v13;
    if ( (_QWORD *)v2[1] == v2 )
      *v7 = a2;
    else
      *v11 = a2;
  }
  else
  {
    v15 = 1LL;
    if ( v4 == a2 )
    {
      if ( (_QWORD *)v5[1] != v2 )
        v15 = 2LL;
      v5[v15] = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v21 = 1LL;
      v22 = (_QWORD *)v4[1];
      if ( (_QWORD *)v5[1] != v2 )
        v21 = 2LL;
      v23 = v4[1];
      if ( v22 != a2 )
        v23 = v4[2];
      v24 = v5[v21];
      if ( v22 != a2 )
        v15 = 2LL;
      v5[v21] = v23;
      v4[v15] = v24;
      v25 = *v2;
      *v2 = *a2;
      *a2 = v25;
    }
    v9 = (_QWORD **)(a2 + 1);
    v7 = v2 + 1;
    v16 = v2[1];
    v10 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v11 = v2 + 2;
    v17 = a2[2];
    a2[1] = v16;
    v18 = v2[2];
    v2[2] = v17;
    a2[2] = v18;
  }
  if ( *v7 )
    *(_QWORD *)*v7 = v2;
  if ( *v11 )
    *(_QWORD *)*v11 = v2;
  if ( *v9 )
    **v9 = a2;
  result = *v10;
  if ( *v10 )
    *result = a2;
  return result;
}
