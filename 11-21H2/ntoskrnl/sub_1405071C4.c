/*
 * XREFs of sub_1405071C4 @ 0x1405071C4
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 * Callees:
 *     sub_1403AAD30 @ 0x1403AAD30 (sub_1403AAD30.c)
 *     sub_1403AAD84 @ 0x1403AAD84 (sub_1403AAD84.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 *     sub_1405075B4 @ 0x1405075B4 (sub_1405075B4.c)
 *     sub_140509E58 @ 0x140509E58 (sub_140509E58.c)
 *     sub_140509EE4 @ 0x140509EE4 (sub_140509EE4.c)
 */

__int64 __fastcall sub_1405071C4(int a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // r13
  char v13; // cl
  char v14; // al
  __int64 v15; // rax
  char v16; // bl
  char v17; // al
  char v19; // [rsp+38h] [rbp-31h]
  _WORD v20[2]; // [rsp+3Ch] [rbp-2Dh] BYREF
  char v21; // [rsp+40h] [rbp-29h]
  int v22; // [rsp+44h] [rbp-25h]
  unsigned int v23; // [rsp+48h] [rbp-21h]
  int v24; // [rsp+4Ch] [rbp-1Dh]
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-9h]
  __int64 v27; // [rsp+68h] [rbp-1h]
  __int64 v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+78h] [rbp+Fh]
  int *v30; // [rsp+80h] [rbp+17h]

  v29 = a4;
  v5 = 0;
  v26 = 0LL;
  v30 = a3;
  v22 = -1;
  v6 = 0LL;
  v28 = a2;
  v24 = a1;
  v20[0] = 0;
  v19 = 0;
  v25 = 0LL;
  if ( !byte_140C549B0 )
  {
    v7 = __readmsr(0x179u);
    byte_140C549B0 = v7;
  }
  v8 = 0;
  v23 = (unsigned __int8)byte_140C549B0;
  if ( !byte_140C549B0 )
    return (unsigned int)-1073741275;
  v9 = 2;
  while ( 1 )
  {
    v27 = 0LL;
    v10 = sub_1403AAD30(a5, v8);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_39;
    *(_QWORD *)&v25 = v10;
    v12 = 0;
    v21 = byte_140D016C4;
    BYTE8(v25) = byte_140D016C4;
    v26 = a5;
    HIDWORD(v25) = v8;
    v20[0] = 0;
    if ( v24 != 16 )
      break;
    v13 = sub_1403AAE50();
    if ( v13 == 1 )
    {
      sub_140509EE4(&v25, v20);
      v12 = HIBYTE(v20[0]);
      v14 = v20[0];
      v11 = v25;
      goto LABEL_23;
    }
    v15 = (v11 >> 61) & 1;
    if ( v13 == 2 )
    {
      if ( !v15 )
        goto LABEL_39;
      if ( (v11 & 0x1000000000000000LL) == 0 )
        goto LABEL_12;
      if ( (v11 & 0x200000000000000LL) != 0 || !v21 )
      {
        LOBYTE(v20[0]) = 1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_39;
      if ( (v11 & 0x1000000000000000LL) == 0 )
      {
LABEL_12:
        sub_1403AAD84(a5, v8);
        goto LABEL_39;
      }
      if ( (v11 & 0x200000000000000LL) != 0 || !v21 )
      {
        v14 = 1;
LABEL_23:
        if ( v14 )
        {
          if ( !v12 )
          {
LABEL_26:
            v22 = v8;
            v6 = v11;
            v19 = v12;
LABEL_27:
            if ( !v12 )
              goto LABEL_28;
            goto LABEL_39;
          }
LABEL_25:
          if ( v19 )
            goto LABEL_27;
          goto LABEL_26;
        }
        goto LABEL_39;
      }
    }
    if ( (v11 & 0x100000000000000LL) != 0 )
    {
      v12 = 1;
      LOBYTE(v20[0]) = 1;
      goto LABEL_25;
    }
LABEL_39:
    if ( ++v8 >= v23 )
    {
LABEL_28:
      v8 = v22;
LABEL_29:
      v16 = v19;
      goto LABEL_30;
    }
  }
  if ( v24 != 1 )
  {
    if ( v24 == 17 )
    {
      v6 = v10;
      goto LABEL_29;
    }
    goto LABEL_39;
  }
  sub_140509E58(&v25, v20);
  if ( !LOBYTE(v20[0]) )
    goto LABEL_39;
  v6 = v25;
  v16 = HIBYTE(v20[0]);
LABEL_30:
  if ( v8 == -1 )
    return (unsigned int)-1073741275;
  if ( v24 != 16 )
    sub_1405075B4(v8, v6, a5);
  sub_140507040(a5, v8, v6, v29, v28);
  v17 = sub_1403AAE50();
  if ( (v6 & 0x2000000000000000LL) != 0 )
  {
    v9 = v16 == 0;
  }
  else if ( v17 == 1 && byte_140D016C4 && v16 )
  {
    v9 = 0;
  }
  *v30 = v9;
  return v5;
}
