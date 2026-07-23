/*
 * XREFs of sub_14024B1FC @ 0x14024B1FC
 * Callers:
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 * Callees:
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     sub_1405947E0 @ 0x1405947E0 (sub_1405947E0.c)
 */

__int64 __fastcall sub_14024B1FC(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v8; // r13
  _QWORD *v9; // rbx
  int v10; // edi
  _QWORD *v11; // rbx
  unsigned int v13; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v26; // [rsp+28h] [rbp-8h]

  v3 = 0;
  v26 = &v25;
  v4 = 0LL;
  v25 = &v25;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    v13 = *((_DWORD *)v9 + 46);
    if ( v13 < 0x100000 )
    {
      if ( v25 != &v25 )
      {
LABEL_21:
        v17 = v9[12];
        if ( v4 > v17 )
          goto LABEL_30;
        goto LABEL_22;
      }
      if ( a3 && *a3 < 0x100000uLL )
        return 0;
      v4 = v9[12];
      v8 = v9[25];
      v17 = v4;
LABEL_22:
      if ( v8 == v9[25] && (v18 = v17 - v4, v19 = v13 + v18, v18 <= 0x20000) && v19 + v3 <= 0x100000 )
      {
        v20 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 )
          goto LABEL_38;
        v21 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v21 != v9 )
          goto LABEL_38;
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = v26;
        if ( *v26 != &v25 )
          goto LABEL_38;
        v9[1] = v26;
        *v9 = &v25;
        v3 += v19;
        *v22 = v9;
        v4 += v19;
        v26 = (_QWORD **)v9;
        if ( a3 )
          *a3 -= *((unsigned int *)v9 + 46);
      }
      else
      {
LABEL_30:
        v10 = sub_1405947E0(&v25, v3, a2);
        if ( v10 < 0 )
          goto LABEL_5;
        v3 = 0;
      }
    }
    else
    {
      if ( v25 != &v25 )
        goto LABEL_21;
      v14 = (_QWORD *)*v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_38;
      v15 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v15 != v9 )
        goto LABEL_38;
      *v15 = v14;
      v14[1] = v15;
      if ( a3 )
        *a3 -= *((unsigned int *)v9 + 46);
      sub_14027AEA0(v9, 0LL, 0LL);
      v16 = *(_QWORD **)(a2 + 8);
      if ( *v16 != a2 )
LABEL_38:
        __fastfail(3u);
      *v9 = a2;
      v9[1] = v16;
      *v16 = v9;
      *(_QWORD *)(a2 + 8) = v9;
    }
  }
  if ( v25 == &v25 || (v10 = sub_1405947E0(&v25, v3, a2), v10 >= 0) )
    v10 = 0;
LABEL_5:
  if ( !a3 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)*a1;
      if ( (_QWORD *)*a1 == a1 )
        break;
      if ( (_QWORD *)v11[1] != a1 )
        goto LABEL_38;
      v23 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_38;
      *a1 = v23;
      *(_QWORD *)(v23 + 8) = a1;
      sub_14027AEA0(v11, 0LL, 0LL);
      v24 = *(_QWORD **)(a2 + 8);
      if ( *v24 != a2 )
        goto LABEL_38;
      *v11 = a2;
      v11[1] = v24;
      *v24 = v11;
      *(_QWORD *)(a2 + 8) = v11;
    }
  }
  return (unsigned int)v10;
}
