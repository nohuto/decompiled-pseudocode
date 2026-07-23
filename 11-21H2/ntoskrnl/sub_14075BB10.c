/*
 * XREFs of sub_14075BB10 @ 0x14075BB10
 * Callers:
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 *     sub_14075BCC0 @ 0x14075BCC0 (sub_14075BCC0.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_140842820 @ 0x140842820 (sub_140842820.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140843098 @ 0x140843098 (sub_140843098.c)
 *     sub_140A1311C @ 0x140A1311C (sub_140A1311C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 */

__int64 __fastcall sub_14075BB10(int a1, void *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  WCHAR *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int v15; // eax
  int v16; // r14d
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // eax
  int i; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r12
  int v25; // eax
  int v26; // eax
  int v27; // r14d
  int j; // eax
  int v29; // eax
  wchar_t *v30; // [rsp+40h] [rbp-30h]
  _OWORD v31[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  int v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  LODWORD(v35) = 0;
  a6 = 0;
  v32 = 0LL;
  v9 = 0;
  v34 = 0;
  memset(v31, 0, sizeof(v31));
  memset(a5, 0, 0x80uLL);
  Str1 = *(WCHAR **)(a4 + 40);
  v30 = Str1;
  v13 = 16LL;
  if ( (unsigned int)sub_14075BCC0(a2) )
  {
    for ( i = sub_14075B48C(a2, 28679LL, v12, Str1, (unsigned int *)v31); i; i = sub_140A146FC(a2, v31) )
    {
      v22 = sub_140843098(a1, (int)a2, i, (int)&v34, a4, 1, (__int64)&v35, v6);
      v9 = v34;
      if ( v22 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( (unsigned int)sub_14075BCC0(a2) )
  {
    v14 = 1LL;
    v15 = sub_14075B7F4(a2, 28679LL, 24577, (__int64)Str1, (unsigned int *)v31);
    goto LABEL_4;
  }
  v14 = 0LL;
  v23 = sub_140792CCC(a2, 0LL, 28673LL);
  a6 = v23;
  if ( !v23 )
    goto LABEL_28;
  v15 = sub_140841428((int)a2, v23, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = v15;
    if ( !v15 )
      break;
    v19 = sub_140843098(a1, (int)a2, v15, (int)&v34, a4, 0, (__int64)&v35, v6);
    v9 = v34;
    if ( v19 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v34 > 0x10 )
    {
      goto LABEL_15;
    }
    if ( v14 )
      v15 = sub_140842820(a2, v31);
    else
      v15 = sub_140A1311C((int)a2, a6, v16, 24577, v30);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)sub_14075BCC0(a2) )
    {
      v24 = 1LL;
      v25 = sub_14075B7F4(a2, 28679LL, 24608, *(_QWORD *)(a4 + 48), (unsigned int *)v31);
      goto LABEL_42;
    }
    v24 = 0LL;
    a6 = sub_140792CCC(a2, 0LL, 28673LL);
    if ( a6 )
    {
LABEL_28:
      sub_1406E0C3C(1LL, (__int64)"SdbpSearchDB");
      goto LABEL_7;
    }
    v25 = sub_140841428((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_42:
    while ( 1 )
    {
      v27 = v25;
      if ( !v25 )
        break;
      v26 = sub_140843098(a1, (int)a2, v25, (int)&v34, a4, 0, (__int64)&v35, v6);
      v9 = v34;
      if ( v26 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
      if ( v24 )
        v25 = sub_140842820(a2, v31);
      else
        v25 = sub_140A1311C((int)a2, a6, v27, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)sub_14075BCC0(a2) )
  {
    for ( j = sub_14075B48C(a2, 28679LL, v17, v30, (unsigned int *)v31); j; j = sub_140A146FC(a2, v31) )
    {
      v29 = sub_140843098(a1, (int)a2, j, (int)&v34, a4, 2, (__int64)&v35, v6);
      v9 = v34;
      if ( v29 )
      {
        if ( (_DWORD)v35 != 2 )
          break;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
    do
    {
LABEL_15:
      v20 = sub_140792CCC(a2, *v6, 24582LL);
      if ( v20 )
        sub_140842A24(a2, v20);
      v6 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v9;
}
