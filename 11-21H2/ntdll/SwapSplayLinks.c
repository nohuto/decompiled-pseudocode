/*
 * XREFs of SwapSplayLinks @ 0x18006A8D0
 * Callers:
 *     RtlDelete @ 0x18006A780 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x18006A820 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *result; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r10
  _QWORD *v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v19 = v2;
    v2 = a2;
    a2 = v19;
    v4 = v3;
  }
  if ( v5 != a2 )
  {
    v11 = 1LL;
    if ( v4 == a2 )
    {
      if ( (_QWORD *)v5[1] != v2 )
        v11 = 2LL;
      v5[v11] = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      if ( (_QWORD *)v5[1] != v2 )
        v11 = 2LL;
      v20 = v4 + 1;
      v21 = (_QWORD *)v4[1];
      if ( v21 != a2 )
      {
        v20 = v4 + 2;
        v21 = (_QWORD *)v4[2];
      }
      v22 = v5[v11];
      v5[v11] = v21;
      *v20 = v22;
      v23 = *v2;
      *v2 = *a2;
      *a2 = v23;
    }
    v12 = v2[1];
    v2[1] = a2[1];
    v13 = a2[2];
    a2[1] = v12;
    v14 = v2[2];
    v2[2] = v13;
    a2[2] = v14;
    v10 = (_QWORD *)v2[1];
LABEL_13:
    if ( !v10 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v4 == a2 )
  {
    v6 = v2;
  }
  else
  {
    v18 = 1LL;
    if ( (_QWORD *)v4[1] != a2 )
      v18 = 2LL;
    v4[v18] = v2;
    v6 = (_QWORD *)*a2;
  }
  *v2 = v6;
  v7 = v2[1];
  v2[1] = a2[1];
  v8 = a2[2];
  a2[1] = v7;
  v9 = v2[2];
  v2[2] = v8;
  a2[2] = v9;
  v10 = (_QWORD *)v2[1];
  if ( v10 != v2 )
  {
    v2[2] = a2;
    goto LABEL_13;
  }
  v2[1] = a2;
  v10 = a2;
LABEL_14:
  *v10 = v2;
LABEL_15:
  v15 = (_QWORD *)v2[2];
  if ( v15 )
    *v15 = v2;
  v16 = (_QWORD *)a2[1];
  if ( v16 )
    *v16 = a2;
  result = (_QWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
