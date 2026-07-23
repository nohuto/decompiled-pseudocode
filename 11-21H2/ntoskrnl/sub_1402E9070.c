/*
 * XREFs of sub_1402E9070 @ 0x1402E9070
 * Callers:
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402E9490 @ 0x1402E9490 (sub_1402E9490.c)
 *     sub_1402E94F0 @ 0x1402E94F0 (sub_1402E94F0.c)
 *     sub_1402E9540 @ 0x1402E9540 (sub_1402E9540.c)
 *     sub_140390CE4 @ 0x140390CE4 (sub_140390CE4.c)
 */

_BOOL8 __fastcall sub_1402E9070(int a1, _QWORD *a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  int v9; // r15d
  unsigned __int64 v11; // r10
  __int64 v12; // rdi
  int v13; // r11d
  int v14; // eax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rbx
  unsigned __int64 v19; // r9
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  ULONG_PTR v22; // rdx
  __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  int v32; // [rsp+50h] [rbp+8h]
  int v33; // [rsp+68h] [rbp+20h]

  v6 = a3;
  v7 = 0LL;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = 0;
  v11 = a4;
  v12 = 0x3FFFFFFFFFLL;
  v13 = a1;
  if ( a1 )
    v14 = 0;
  else
    v14 = sub_140390CE4(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4));
  v33 = v14;
  v15 = 0LL;
  v32 = v14;
  while ( 1 )
  {
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v19 = v15 + 1;
        if ( !v9 )
          v11 += 24LL;
        v18 = *(_QWORD *)v11 & 0xFFFFFFFFFFLL;
      }
      else
      {
        if ( v9 )
        {
          v16 = ((*(_QWORD *)v11 >> 20) | *(_QWORD *)(v11 + 40) & 0xF80000000000000uLL) >> 20;
          v17 = 8LL * (*(_DWORD *)(v11 + 36) & 0xFFE00000);
        }
        else
        {
          v16 = (*(_QWORD *)(v11 + 24) >> 40) & 0x7FFFFLL;
          v17 = (unsigned __int64)(*(_DWORD *)(v11 + 36) & 0x1FFFFF) << 19;
        }
        v18 = v17 | v16;
        v19 = v15 + 1;
      }
    }
    else
    {
      v19 = v15 + 1;
      if ( v9 )
        v24 = *(_QWORD *)(v11 + 24);
      else
        v24 = *(_QWORD *)v11;
      v25 = v24 & 0xFFFFFFFFFFLL;
      v18 = v25;
      if ( v25 != 0x3FFFFFFFFFLL )
      {
        if ( sub_1402C1520(v25) )
        {
          if ( v29 > 1 || !a5 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
              goto LABEL_55;
            if ( v7 )
              _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v7 = v28;
          }
          if ( v32 == 2 )
          {
            v32 = sub_140390CE4(v27);
            v8 = 0xFFFFDE0000000000uLL;
            goto LABEL_21;
          }
          v31 = *(_QWORD *)(8 * v26 - 0x21FFFFFFFFF0LL);
          if ( qword_140C50780 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C50780;
          v18 = (v31 >> 12) & 0xFFFFFFFFFFLL;
        }
        v32 = sub_140390CE4(v18);
        v8 = 0xFFFFDE0000000000uLL;
      }
    }
    if ( v18 != 0x3FFFFFFFFFLL )
    {
      if ( v19 <= 1 && a5 )
        goto LABEL_12;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48 * v18 + 24), 0x3FuLL) )
        break;
    }
LABEL_55:
    if ( v9 )
      goto LABEL_29;
    if ( v7 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = 0LL;
    }
    v9 = 1;
    v32 = v33;
    v8 = 0xFFFFDE0000000000uLL;
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4 + 0x220000000000LL) >> 4);
    v15 = 0LL;
LABEL_21:
    v11 = v8 + 48 * v18;
    if ( v15 >= 0x10 )
      goto LABEL_29;
  }
  if ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = v8 + 48 * v18;
LABEL_12:
  if ( !v13 && sub_1402C1520(v18) )
  {
    v32 = sub_140390CE4(v30);
    goto LABEL_21;
  }
  if ( (unsigned int)sub_1402E9490(v18) != 1 )
  {
    v20 = 0;
    v21 = a2;
    while ( 1 )
    {
      if ( *v21 == v18 )
        goto LABEL_21;
      if ( v21[1] == v18 )
      {
        ++v20;
        goto LABEL_20;
      }
      if ( v21[2] == v18 )
        break;
      if ( v21[3] == v18 )
      {
        v20 += 3;
LABEL_20:
        if ( v20 == 64 )
          goto LABEL_23;
        goto LABEL_21;
      }
      v21 += 4;
      v20 += 4;
      if ( v20 >= 0x40 )
        goto LABEL_20;
    }
    v20 += 2;
    goto LABEL_20;
  }
LABEL_23:
  v22 = a2[v6];
  a2[v6] = v18;
  if ( v22 != -1LL && (v22 < qword_140C52CE0 || v22 >= qword_140C52CE0 + 2048) )
    sub_1402E9540(3LL);
  if ( v18 < qword_140C52CE0 || v18 >= qword_140C52CE0 + 2048 )
    sub_1402E94F0(v18, 1LL);
  v12 = v18;
LABEL_29:
  if ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12 != 0x3FFFFFFFFFLL;
}
