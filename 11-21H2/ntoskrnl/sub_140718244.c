/*
 * XREFs of sub_140718244 @ 0x140718244
 * Callers:
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140881496 @ 0x140881496 (sub_140881496.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_140718244(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r12d
  unsigned int v8; // r8d
  ULONG_PTR v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // ecx
  __int16 v16; // r13
  int v17; // edx
  int v18; // esi
  _DWORD *v19; // rax
  _WORD *v20; // rdi
  unsigned int *v21; // rsi
  _WORD *v22; // rax
  __int16 v23; // ax
  unsigned int v24; // edx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  int *v27; // rsi
  int v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+34h] [rbp-2Ch]
  unsigned int v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-10h] BYREF
  int v35; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+50h]

  v36 = a3;
  v30 = -1;
  v35 = -1;
  v6 = -1;
  v29 = -1;
  v34[0] = 0xFFFFFFFFLL;
  sub_140AB4534((char *)v34 + 4);
  v32 = v8;
  v33 = 0LL;
  sub_140AB4534((char *)&v32 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v10 = sub_1406BF400(BugCheckParameter3, v9, v34);
  else
    v10 = sub_1407C9820(BugCheckParameter3);
  v11 = v10;
  v12 = a3 >> 31;
  v31 = a3 >> 31;
  v13 = v12;
  if ( *(_DWORD *)(v10 + 4 * v12 + 20) )
  {
    v21 = (unsigned int *)(v10 + 4 * (v12 + 7));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = (_WORD *)sub_1406BF400(BugCheckParameter3, *v21, &v32);
    else
      v22 = (_WORD *)sub_1407C9820(BugCheckParameter3);
    v20 = v22;
    v23 = *v22;
    if ( v23 == 26220 && v20[1] >= 0x1FBu )
    {
      v18 = sub_14071F300(BugCheckParameter3, *v21);
      if ( v18 < 0 )
        goto LABEL_21;
      v24 = 0;
      if ( v20[1] )
      {
        do
        {
          v25 = v24++;
          *(_DWORD *)&v20[2 * v25 + 2] = *(_DWORD *)&v20[4 * v25 + 2];
        }
        while ( v24 < (unsigned __int16)v20[1] );
        v6 = v30;
      }
      *v20 = 26988;
    }
    else if ( ((v23 - 26732) & 0xFEFF) != 0 )
    {
LABEL_44:
      v18 = sub_1407185B4(BugCheckParameter3);
      if ( v18 >= 0 )
        goto LABEL_18;
      goto LABEL_21;
    }
    if ( v20[1] >= 0x3F5u )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v32);
      else
        sub_1407C97C0(BugCheckParameter3, &v32);
      v33 = 0LL;
      v18 = sub_14079C8A4(BugCheckParameter3, 12, v31, (unsigned int)&v29, (__int64)&v33, (__int64)&v32);
      if ( v18 < 0 )
      {
        v20 = v33;
        goto LABEL_21;
      }
      v26 = v33;
      v27 = (int *)(v11 + 4 * (v13 + 7));
      *v33 = 92530;
      v26[1] = *v27;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v32);
      else
        sub_1407C97C0(BugCheckParameter3, &v32);
      v20 = 0LL;
      *v27 = v29;
    }
    goto LABEL_44;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
  {
    v17 = 12;
    v16 = 26220;
  }
  else
  {
    v14 = 1012;
    v15 = 1;
    v16 = 26732;
    if ( a4 )
      v15 = a4;
    if ( v15 < 0x3F4 )
      v14 = v15;
    v17 = 8 * v14 + 4;
  }
  v18 = sub_14079C8A4(BugCheckParameter3, v17, v12, (unsigned int)&v35, (__int64)&v33, (__int64)&v32);
  if ( v18 < 0 )
  {
    v20 = v33;
    v6 = v35;
  }
  else
  {
    v19 = v33;
    *(_WORD *)v33 = v16;
    *((_WORD *)v19 + 1) = 0;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v32);
    else
      sub_1407C97C0(BugCheckParameter3, &v32);
    v20 = 0LL;
    v18 = sub_1407185B4(BugCheckParameter3);
    if ( v18 >= 0 )
    {
      v6 = -1;
      *(_DWORD *)(v11 + 4 * v13 + 28) = v35;
LABEL_18:
      ++*(_DWORD *)(v11 + 4 * v13 + 20);
      v18 = 0;
      goto LABEL_21;
    }
    v6 = v35;
  }
LABEL_21:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v34);
    else
      sub_1407C97C0(BugCheckParameter3, v34);
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v32);
    else
      sub_1407C97C0(BugCheckParameter3, &v32);
  }
  if ( v6 != -1 )
    sub_14079BD98(BugCheckParameter3, v6);
  return (unsigned int)v18;
}
