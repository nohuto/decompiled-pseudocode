/*
 * XREFs of sub_140698FBC @ 0x140698FBC
 * Callers:
 *     sub_140785234 @ 0x140785234 (sub_140785234.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1406991C8 @ 0x1406991C8 (sub_1406991C8.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140698FBC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, char a6)
{
  unsigned int *v6; // r12
  __int64 v7; // r15
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  WCHAR *Pool2; // rsi
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // edi
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-Ch]
  unsigned int v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A4h] [rbp+4Ch]
  __int64 v28; // [rsp+A8h] [rbp+50h]
  __int64 v29; // [rsp+B0h] [rbp+58h]
  unsigned int v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v27 = HIDWORD(a1);
  v6 = a5;
  v7 = a3;
  v24 = 0;
  v26 = 0;
  v23 = 0;
  v22 = 0;
  v25 = 0;
  *a5 = 0;
  v8 = sub_1406994BC((unsigned int)&v24, a2, 0, 0, (__int64)&v24, (__int64)&v26, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v24;
  v10 = v26 + 1;
  if ( !v24 )
    return (unsigned int)-1073741275;
  v11 = v26 + 1;
  if ( a6 )
  {
    v11 = v26 + 17;
    v10 = v26 + 17;
  }
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 2LL * v11, 1111770192LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v14 = 0;
  if ( !v9 )
    goto LABEL_22;
  while ( 1 )
  {
    v26 = v10;
    if ( a6 )
    {
      LODWORD(a5) = 4;
      v15 = sub_14069946C(v12, v28, v14, Pool2, &v26, &v23, &v22, &a5);
      v8 = v15;
      if ( v15 < 0 )
        break;
      if ( !v26 )
      {
LABEL_36:
        v8 = -1073741595;
        goto LABEL_26;
      }
      if ( v23 == 3 )
      {
        if ( (_DWORD)a5 != 4 )
          goto LABEL_36;
      }
      else
      {
        v22 = 0;
      }
      v8 = sub_1406991C8(v16, &v22, &Pool2[v26], v10 - v26);
      if ( v8 < 0 )
        goto LABEL_26;
      v17 = -1LL;
      do
        ++v17;
      while ( Pool2[v17] );
      v18 = v17 + 1;
      goto LABEL_16;
    }
    v15 = sub_14069946C(v12, v28, v14, Pool2, &v26, &v23, 0LL, 0LL);
    v8 = v15;
    if ( v15 < 0 )
      break;
    v12 = v26;
    if ( !v26 )
      goto LABEL_36;
    Pool2[v26] = 0;
    v18 = v12 + 1;
LABEL_16:
    if ( v7 )
    {
      v12 = v25;
      v19 = v18 + v25;
      if ( v18 + v25 < v30 )
      {
        sub_1402E0340((_WORD *)(v29 + 2LL * v25), v30 - v25, Pool2, 0LL, 0LL, 2304);
        v25 = v19;
      }
      v7 = v29;
    }
    *v6 += v18;
    if ( ++v14 >= v24 )
      goto LABEL_21;
  }
  if ( v15 != -2147483622 )
    goto LABEL_26;
  v8 = 0;
LABEL_21:
  if ( v8 < 0 )
    goto LABEL_26;
LABEL_22:
  if ( *v6 )
  {
    v20 = *v6 + 1;
    *v6 = v20;
    if ( v7 && v20 <= v30 )
      *(_WORD *)(v7 + 2LL * (v20 - 1)) = 0;
    else
      v8 = -1073741789;
  }
  else
  {
    v8 = -1073741275;
  }
LABEL_26:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
