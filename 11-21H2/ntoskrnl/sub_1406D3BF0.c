/*
 * XREFs of sub_1406D3BF0 @ 0x1406D3BF0
 * Callers:
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 * Callees:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D404C @ 0x1406D404C (sub_1406D404C.c)
 *     sub_1406D407C @ 0x1406D407C (sub_1406D407C.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406D3BF0(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        ULONG_PTR BugCheckParameter4,
        unsigned int a7,
        unsigned int *a8)
{
  int v8; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // r14d
  __int16 v16; // r14
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int16 v20; // ax
  int v21; // r14d
  __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned int *v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned int *v27; // rdi
  __int64 v28; // rsi
  __int64 v30; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-41h]
  unsigned int v32; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v33; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-29h] BYREF
  __int64 v36; // [rsp+68h] [rbp-21h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-11h] BYREF
  __int64 v39; // [rsp+80h] [rbp-9h]
  __int64 v40; // [rsp+88h] [rbp-1h]
  int v41; // [rsp+D0h] [rbp+47h]
  unsigned int v43; // [rsp+F0h] [rbp+67h]

  v8 = a7;
  LODWORD(v33) = 0;
  v32 = 0;
  LODWORD(BugCheckParameter4) = -1;
  v41 = -1;
  v11 = a2;
  v30 = -1LL;
  v12 = 0LL;
  v35 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v40 = 0LL;
  v37 = 0xFFFFFFFFLL;
  v38 = 0xFFFFFFFFLL;
  v31 = 0;
  v34 = 0xFFFFFFFF00000000uLL;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v8 = 0;
    else
      v8 = a4 >> 31;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter3, a2, &v35);
  else
    v13 = sub_1407C9820(BugCheckParameter3);
  v14 = v13;
  LODWORD(v39) = *(_DWORD *)(v13 + 44);
  v15 = sub_14079BC7C(BugCheckParameter3, v11, (__int64)&BugCheckParameter4);
  if ( v15 < 0 )
  {
    v17 = BugCheckParameter4;
    goto LABEL_45;
  }
  v16 = a5;
  if ( (a5 & 2) != 0 )
  {
    a7 = *(unsigned __int16 *)(v14 + 74);
    if ( a7 )
    {
      v15 = sub_14079BC7C(BugCheckParameter3, *(unsigned int *)(v14 + 48), (__int64)&v30);
      if ( v15 < 0 )
      {
        v17 = BugCheckParameter4;
        v18 = v30;
LABEL_46:
        v25 = HIDWORD(v30);
        goto LABEL_47;
      }
      v16 = a5;
      v41 = v30;
    }
  }
  else
  {
    a7 = 0;
  }
  v17 = BugCheckParameter4;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    v19 = sub_1406BF400(a3, (unsigned int)BugCheckParameter4, &v36);
  else
    v19 = sub_1407C9820(a3);
  v12 = v19;
  *(_DWORD *)(v19 + 20) = 0;
  *(_DWORD *)(v19 + 24) = 0;
  *(_DWORD *)(v19 + 48) = v41;
  *(_WORD *)(v19 + 74) = a7;
  *(_DWORD *)(v19 + 44) = -1;
  *(_DWORD *)(v19 + 28) = -1;
  *(_DWORD *)(v19 + 32) = -1;
  *(_DWORD *)(v19 + 16) = a4;
  *(_BYTE *)(v19 + 12) = 0;
  if ( (v16 & 0x100) != 0 )
    *(_BYTE *)(v19 + 13) &= 0xFCu;
  if ( (v16 & 0x80u) != 0 )
    *(_BYTE *)(v19 + 13) |= 0x80u;
  v20 = *(_WORD *)(v14 + 2) & 0x30;
  *(_WORD *)(v12 + 2) = v20;
  if ( (v16 & 0x20) != 0 )
  {
    v20 = *(_WORD *)(v14 + 2) & 0xFFBF;
    *(_WORD *)(v12 + 2) = v20;
  }
  if ( a4 == -1 )
    *(_WORD *)(v12 + 2) = v20 | 0xC;
  if ( (v16 & 0x10) == 0 )
  {
    sub_1406D407C(a3, BugCheckParameter3);
    sub_140346D80(BugCheckParameter3, v39, &v32);
    v15 = sub_140657670(
            a3,
            v17,
            v12,
            v17 >> 31,
            (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v32 + 8) + 32LL),
            0,
            (unsigned int *)(v12 + 44));
    sub_1406D404C(a3, BugCheckParameter3);
    if ( v15 < 0 )
    {
LABEL_45:
      v18 = v41;
      goto LABEL_46;
    }
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v21 = 0;
  else
    v21 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v12 + 36) = 0;
  a7 = v21;
  *(_DWORD *)(v12 + 40) = -1;
  if ( (a5 & 4) != 0 && v21 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v14 + 40), &v37);
    else
      v22 = sub_1407C9820(BugCheckParameter3);
    v43 = 0;
    v40 = v22;
    v23 = a7;
    v24 = (unsigned int *)v22;
    v39 = v22;
    while ( 1 )
    {
      v15 = sub_14065B108(BugCheckParameter3, *v24, a3, v8, (unsigned int *)&v33);
      if ( v15 < 0 )
        break;
      v15 = sub_14079B920(a3, (__int64)&v34, v23);
      if ( v15 < 0 )
        break;
      v24 = (unsigned int *)(v39 + 4);
      ++v43;
      v39 += 4LL;
      if ( v43 >= v23 )
      {
        *(_QWORD *)(v12 + 36) = v34;
        goto LABEL_42;
      }
    }
    v25 = HIDWORD(v34);
    v18 = v41;
    v31 = v34;
  }
  else
  {
LABEL_42:
    v25 = -1;
    v31 = 0;
    v18 = -1;
    v15 = 0;
    *a8 = v17;
    v17 = -1;
  }
LABEL_47:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v35);
  else
    sub_1407C97C0(BugCheckParameter3, &v35);
  if ( v12 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      sub_1406BF450(a3, &v36);
    else
      sub_1407C97C0(a3, &v36);
  }
  if ( v40 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v37);
    else
      sub_1407C97C0(BugCheckParameter3, &v37);
  }
  if ( v25 != -1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v26 = sub_1406BF400(a3, v25, &v38);
    else
      v26 = sub_1407C9820(a3);
    v27 = (unsigned int *)v26;
    if ( v31 )
    {
      v28 = v31;
      do
      {
        sub_14079BD98(a3, *v27++);
        --v28;
      }
      while ( v28 );
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      sub_1406BF450(a3, &v38);
    else
      sub_1407C97C0(a3, &v38);
    sub_14079BD98(a3, v25);
  }
  if ( v18 != -1 )
    sub_14079BD98(a3, v18);
  if ( v17 != -1 )
    sub_14079BD98(a3, v17);
  return (unsigned int)v15;
}
