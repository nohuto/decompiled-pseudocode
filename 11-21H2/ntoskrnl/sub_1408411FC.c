/*
 * XREFs of sub_1408411FC @ 0x1408411FC
 * Callers:
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408411FC(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 *p_Src; // r12
  const wchar_t *v8; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  wchar_t *v13; // rax
  wchar_t *Str1; // r15
  wchar_t *v15; // rax
  unsigned int v16; // eax
  int v17; // r15d
  unsigned int v18; // eax
  int v19; // eax
  int v20; // r14d
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // ax
  unsigned int v26; // ebx
  unsigned int *v27; // rax
  unsigned int v28; // ebx
  unsigned __int64 v30; // rbp
  __int64 v31; // r11
  __int64 v32; // rax
  wchar_t *P; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+38h] [rbp-40h] BYREF
  int Src; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+94h] [rbp+1Ch]
  _DWORD *v37; // [rsp+98h] [rbp+20h]

  v37 = a4;
  v36 = HIDWORD(a3);
  p_Src = 0LL;
  v8 = L"Policy";
  Src = 0;
  v34 = 0LL;
  if ( !a5 && !a6 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbQueryDataExTagID");
    return 87;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( aPolicy[v11] );
  v12 = (int)v11 + 1;
  v13 = (wchar_t *)sub_14075B444(a1, 2 * v12);
  P = v13;
  if ( !v13 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbQueryDataExTagID");
    return 8;
  }
  Str1 = v13;
  while ( 1 )
  {
    v15 = wcschr(v8, 0x5Cu);
    if ( v15 )
    {
      v30 = v15 - v8;
      if ( (int)sub_1402D88AC(P, v12, (__int64)v8, v30) < 0 )
      {
LABEL_63:
        v28 = 122;
        goto LABEL_31;
      }
      Str1 = P;
      P[v30] = 0;
      v8 = (const wchar_t *)(v31 + 2);
    }
    else
    {
      if ( (int)sub_1402E0200(Str1, v12, (__int64)v8) < 0 )
        goto LABEL_63;
      v8 = 0LL;
    }
    v16 = sub_140841428(a1, a2, 28687, 24577, Str1);
    a2 = v16;
    if ( !v8 || !*v8 )
      break;
    if ( !v16 )
      goto LABEL_45;
  }
  if ( !v16 )
  {
LABEL_45:
    v28 = 1168;
    goto LABEL_31;
  }
  v17 = 0;
  v18 = sub_140792CCC(a1, v16, 16408);
  if ( !v18 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbQueryDataExTagID");
    v21 = 0;
    v28 = 0;
    goto LABEL_33;
  }
  v19 = sub_1407ECF5C(a1, v18, 0);
  v20 = v19;
  v21 = 0;
  v17 = v19;
  if ( !v19 )
    goto LABEL_61;
  v22 = v19 - 1;
  if ( v22 )
  {
    v23 = v22 - 2;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        v25 = 16409;
        goto LABEL_17;
      }
      if ( v24 != 7 )
      {
        sub_1406E0C3C(1LL, (__int64)"SdbQueryDataExTagID");
        v28 = 1358;
        goto LABEL_31;
      }
      v25 = 20487;
    }
    else
    {
      v25 = -28667;
    }
  }
  else
  {
    v25 = 24606;
  }
LABEL_17:
  v26 = sub_140792CCC(a1, a2, v25);
  if ( !v26 )
    goto LABEL_44;
  if ( v20 == 1 )
  {
    p_Src = (__int64 *)sub_140842A24(a1, v26);
    if ( p_Src )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_WORD *)p_Src + v32) );
      v21 = 2 * v32 + 2;
      goto LABEL_61;
    }
LABEL_44:
    sub_1406E0C3C(1LL, (__int64)"SdbQueryDataExTagID");
    goto LABEL_45;
  }
  if ( v20 == 3 )
  {
    v21 = sub_14079422C(a1, v26);
    p_Src = (__int64 *)sub_14075B988(a1, v26);
    if ( !p_Src )
      goto LABEL_44;
LABEL_61:
    v28 = 0;
    if ( v21 )
      goto LABEL_22;
    goto LABEL_33;
  }
  if ( v20 != 4 )
  {
    if ( v20 == 11 )
    {
      v34 = sub_140842904(a1, v26, 0LL);
      p_Src = &v34;
      v21 = 8;
      goto LABEL_22;
    }
    goto LABEL_61;
  }
  Src = sub_1407ECF5C(a1, v26, 0);
  p_Src = (__int64 *)&Src;
  v21 = 4;
LABEL_22:
  if ( a5 && a6 && *a6 >= v21 )
  {
    memmove(a5, p_Src, *a6);
    v27 = a6;
    v28 = 0;
    goto LABEL_26;
  }
  v28 = 122;
LABEL_33:
  v27 = a6;
  if ( a6 )
LABEL_26:
    *v27 = v21;
  if ( v37 )
    *v37 = v17;
  if ( a7 )
    *a7 = a2;
LABEL_31:
  ExFreePoolWithTag(P, 0x74705041u);
  return v28;
}
