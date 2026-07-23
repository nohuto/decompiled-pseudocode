/*
 * XREFs of sub_14075C380 @ 0x14075C380
 * Callers:
 *     sub_14075C460 @ 0x14075C460 (sub_14075C460.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14078EE18 @ 0x14078EE18 (sub_14078EE18.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140843CD4 @ 0x140843CD4 (sub_140843CD4.c)
 *     sub_140963878 @ 0x140963878 (sub_140963878.c)
 *     sub_140A1329C @ 0x140A1329C (sub_140A1329C.c)
 */

__int64 __fastcall sub_14075C380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7)
{
  _OWORD *v7; // rsi
  _DWORD *v8; // r13
  const wchar_t *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // ebx
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 i; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ebp
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = a7;
  v10 = *(const wchar_t **)(a3 + 8);
  *(_QWORD *)&v27 = 0LL;
  *a6 = 0LL;
  v11 = a5;
  v29 = 0;
  *v8 = 0;
  v12 = sub_14075B6A4(a1, 0, v10, a4, a4, v11, a2);
  if ( !v12
    || !(unsigned int)sub_140843CD4(a1, v12, &v27, &v29)
    || (v15 = v27, (v16 = sub_140792CCC(v27, v29, 28710LL)) == 0) )
  {
    v13 = -1073741275;
LABEL_3:
    sub_14075C424(v7);
    return (unsigned int)v13;
  }
  LODWORD(v17) = 0;
  do
  {
    v16 = sub_14078EE18(v15, v29, v16);
    v17 = (unsigned int)(v17 + 1);
  }
  while ( v16 );
  *v8 = v17;
  v7 = sub_1402D84BC(80 * v17);
  if ( !v7 )
  {
    v13 = -1073741801;
    goto LABEL_3;
  }
  v18 = sub_140792CCC(v15, v29, 28710LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v26 = v18;
    if ( !v18 )
      break;
    if ( (unsigned int)i < *v8 )
    {
      v20 = sub_140792CCC(v15, v18, 36880LL);
      if ( v20 )
      {
        v27 = 0LL;
        v7[5 * i] = *(_OWORD *)sub_140A1329C(v28, v15, v20, &v27);
      }
      v21 = sub_140792CCC(v15, v26, 24577LL);
      v22 = 5 * i;
      if ( v21 )
      {
        v13 = sub_140963878(v15, v21, &v7[v22 + 1]);
        if ( v13 < 0 )
          goto LABEL_3;
      }
      v23 = sub_140792CCC(v15, v26, 24579LL);
      if ( v23 )
      {
        v13 = sub_140963878(v15, v23, &v7[v22 + 2]);
        if ( v13 < 0 )
          goto LABEL_3;
      }
      v24 = sub_140792CCC(v15, v26, 16407LL);
      if ( v24 )
        LODWORD(v7[v22 + 4]) = sub_1407ECF5C(v15, v24, 0LL);
      v25 = sub_140792CCC(v15, v26, 24584LL);
      if ( v25 )
      {
        v13 = sub_140963878(v15, v25, &v7[v22 + 3]);
        if ( v13 < 0 )
          goto LABEL_3;
      }
      DWORD1(v7[v22 + 4]) = 1;
    }
    v18 = sub_14078EE18(v15, v29, v26);
  }
  v13 = 0;
  *a6 = v7;
  return (unsigned int)v13;
}
