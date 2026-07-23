/*
 * XREFs of sub_14021EFFC @ 0x14021EFFC
 * Callers:
 *     RtlDeleteNoSplay @ 0x14021D900 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14021EFFC(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *result; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v25 = v2;
    v2 = a2;
    v4 = v3;
    a2 = v25;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v16 = v2;
    }
    else
    {
      v15 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v15 = 2LL;
      v4[v15] = v2;
      v16 = (_QWORD *)*a2;
    }
    *v2 = v16;
    v17 = v2[1];
    v2[1] = a2[1];
    v18 = a2[2];
    a2[1] = v17;
    v19 = v2[2];
    v2[2] = v18;
    a2[2] = v19;
    v11 = (_QWORD *)v2[1];
    if ( v11 == v2 )
    {
      v2[1] = a2;
      v11 = a2;
    }
    else
    {
      v2[2] = a2;
    }
  }
  else
  {
    v6 = (_QWORD *)v5[1];
    v7 = 1LL;
    if ( v4 == a2 )
    {
      if ( v6 != v2 )
        v7 = 2LL;
      v5[v7] = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v20 = (_QWORD *)v4[1];
      v21 = 1LL;
      v22 = v20;
      if ( v6 != v2 )
        v21 = 2LL;
      if ( v20 != a2 )
        v22 = (_QWORD *)v4[2];
      v23 = v5[v21];
      if ( v20 != a2 )
        v7 = 2LL;
      v5[v21] = v22;
      v4[v7] = v23;
      v24 = *v2;
      *v2 = *a2;
      *a2 = v24;
    }
    v8 = v2[1];
    v2[1] = a2[1];
    v9 = a2[2];
    a2[1] = v8;
    v10 = v2[2];
    v2[2] = v9;
    a2[2] = v10;
    v11 = (_QWORD *)v2[1];
  }
  if ( v11 )
    *v11 = v2;
  v12 = (_QWORD *)v2[2];
  if ( v12 )
    *v12 = v2;
  v13 = (_QWORD *)a2[1];
  if ( v13 )
    *v13 = a2;
  result = (_QWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
