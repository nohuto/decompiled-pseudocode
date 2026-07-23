/*
 * XREFs of sub_1403BB820 @ 0x1403BB820
 * Callers:
 *     sub_1403BB7AC @ 0x1403BB7AC (sub_1403BB7AC.c)
 *     sub_140824A80 @ 0x140824A80 (sub_140824A80.c)
 *     sub_14090AAC0 @ 0x14090AAC0 (sub_14090AAC0.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 *     sub_14051AF88 @ 0x14051AF88 (sub_14051AF88.c)
 *     sub_14051B254 @ 0x14051B254 (sub_14051B254.c)
 *     sub_140527480 @ 0x140527480 (sub_140527480.c)
 *     sub_140529654 @ 0x140529654 (sub_140529654.c)
 *     sub_1405298F8 @ 0x1405298F8 (sub_1405298F8.c)
 *     sub_1405346EC @ 0x1405346EC (sub_1405346EC.c)
 */

__int64 __fastcall sub_1403BB820(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, __int64 a5)
{
  unsigned int v8; // r13d
  int v9; // edi
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rdx
  int v15; // r12d
  __int64 *v16; // rbx
  _QWORD *v17; // rax
  bool v19; // zf
  unsigned __int32 v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  char v26; // [rsp+40h] [rbp-41h]
  __int64 v27; // [rsp+48h] [rbp-39h] BYREF
  __int64 v28; // [rsp+50h] [rbp-31h]
  __int128 v29; // [rsp+58h] [rbp-29h] BYREF
  __int128 v30; // [rsp+68h] [rbp-19h]
  int v31; // [rsp+78h] [rbp-9h]
  __int64 v32; // [rsp+80h] [rbp-1h] BYREF
  bool v33; // [rsp+88h] [rbp+7h]
  __int16 v34; // [rsp+89h] [rbp+8h]
  char v35; // [rsp+8Bh] [rbp+Ah]

  v28 = a5;
  LODWORD(v27) = 0;
  v8 = a1;
  v31 = 0;
  v29 = 0LL;
  v9 = 0;
  v30 = 0LL;
  v10 = (_BYTE *)sub_1403B1F04(a1, 64LL);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  memset(v10, 0, 0x40uLL);
  if ( v8 )
  {
    v12 = v8 - 1;
    if ( v8 == 1 )
    {
      v13 = 1;
      v26 = 0;
    }
    else
    {
      if ( v8 != 2 )
      {
LABEL_21:
        v9 = -1073741585;
LABEL_22:
        sub_14051AF88(v11);
        return (unsigned int)v9;
      }
      v13 = 0;
      v26 = 0;
    }
  }
  else
  {
    v13 = 1;
    v12 = (unsigned __int64)a2 >> 61;
    LOBYTE(v12) = (a2 & 0x2000000000000000LL) != 0;
    v26 = 1;
  }
  v11[52] = v12;
  v14 = v8;
  if ( v8 && (v14 = v8 - 1, v8 == 1) )
    v15 = 0;
  else
    v15 = 2;
  if ( !v13 )
    goto LABEL_25;
  if ( byte_140C4BCBC )
  {
    if ( (_BYTE)v12 )
      v19 = byte_140C4BCBD == 0;
    else
      v19 = byte_140C4BCBE == 0;
    if ( !v19 )
    {
      if ( v8 != 1 )
      {
        v20 = _InterlockedIncrement(&dword_140D01784);
        *((_DWORD *)v11 + 12) = v20;
        v32 = v20;
        BYTE4(v32) = v11[52];
        v35 = 0;
        v33 = (a2 & 0x4000000000000000LL) != 0;
        v34 = a2 < 0;
        v9 = sub_14042A5E0(&v32, v14);
        if ( v9 < 0 )
          goto LABEL_22;
      }
      if ( v11[52] )
      {
        LOBYTE(v12) = 1;
        v9 = sub_14051B254(v12, &v27);
        if ( v9 < 0 )
          goto LABEL_22;
        v9 = sub_140529654(v27, 4, 4);
        if ( v9 < 0 )
          goto LABEL_22;
        v21 = *((_QWORD *)v11 + 5);
        LODWORD(v29) = 1;
        LOBYTE(v30) = 1;
        sub_1405298F8(v21, 4LL, (char *)&v29 + 8);
        LOBYTE(v22) = v11[52];
        v9 = sub_140527480(*((unsigned int *)v11 + 12), v22, v23, &v29);
        if ( v9 < 0 )
          goto LABEL_22;
      }
      goto LABEL_14;
    }
LABEL_25:
    v9 = -1073741637;
    goto LABEL_22;
  }
  if ( (a2 & 0x4000000000000000LL) != 0 || (a2 & 0x2000000000000000LL) != 0 )
    goto LABEL_25;
  if ( v15 )
  {
    v9 = sub_14051B254(0LL, &v27);
    if ( v9 < 0 )
      goto LABEL_22;
    v9 = sub_140529654(v27, dword_140C4BE68, dword_140C4BE64);
    if ( v9 < 0 )
      goto LABEL_22;
  }
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 3) = v11 + 16;
  *((_QWORD *)v11 + 2) = v11 + 16;
LABEL_14:
  if ( !a3 )
    goto LABEL_15;
  if ( !v26 && *a3 )
  {
    v9 = -1073741811;
    goto LABEL_22;
  }
  *((_QWORD *)v11 + 7) = 0LL;
  if ( !*a3 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( *a3 != 1 )
    goto LABEL_21;
  v9 = sub_1405346EC((unsigned int)a3[1]);
  if ( v9 < 0 )
    goto LABEL_22;
LABEL_15:
  v16 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v24 = *((_QWORD *)v11 + 7);
      if ( v24 )
      {
        v9 = sub_14042A5E0(v24, v16[1]);
        if ( v9 < 0 )
          break;
      }
      if ( *((_BYTE *)v16 + 24) )
      {
        v9 = sub_14051AC2C((_DWORD)v11, 3, v16[1], (unsigned int)v16[2] << 12, v16[1]);
        if ( v9 < 0 )
          break;
      }
      v16 = (__int64 *)*v16;
      if ( !v16 )
        goto LABEL_16;
    }
    while ( a4 != v16 )
    {
      if ( *((_BYTE *)a4 + 24) )
      {
        v25 = a4[1];
        v27 = a4[2] << 12;
        sub_14051AD44(v11, v25, &v27, 0LL);
      }
      a4 = (__int64 *)*a4;
    }
    goto LABEL_22;
  }
LABEL_16:
  v17 = (_QWORD *)v28;
  *((_DWORD *)v11 + 3) = v15;
  *((_DWORD *)v11 + 2) = v8;
  *v17 = v11;
  return (unsigned int)v9;
}
