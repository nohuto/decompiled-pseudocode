/*
 * XREFs of sub_140332110 @ 0x140332110
 * Callers:
 *     <none>
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_140228C50 @ 0x140228C50 (sub_140228C50.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045BBAE @ 0x14045BBAE (sub_14045BBAE.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

__int64 __fastcall sub_140332110(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  _DWORD *v15; // r12
  int *v16; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int i; // ecx
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // r9
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned __int64 j; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v44; // r8d
  unsigned int v45; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+34h] [rbp-54h]
  _QWORD *v47; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v49; // [rsp+90h] [rbp+8h] BYREF
  __int64 v50; // [rsp+98h] [rbp+10h]
  int v51; // [rsp+A0h] [rbp+18h]
  int v52; // [rsp+A8h] [rbp+20h] BYREF

  v51 = a3;
  v50 = a2;
  v49 = a1;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = a2;
  v8 = a1;
  v9 = *(_QWORD **)(v6 + 16);
  if ( *(_BYTE *)(v4 + 6) )
  {
    *(_BYTE *)(v4 + 6) = 0;
    v9 = *(_QWORD **)(v6 + 16);
    v10 = *(_QWORD *)(v6 + 144);
    v47 = v9;
    v11 = v9[4];
    if ( v10 <= v11 )
      return 4LL;
    v12 = *(_QWORD *)(v6 + 16);
    v13 = v10 - v11;
    v45 = *(_DWORD *)(v4 + 12);
    v46 = *(_DWORD *)v4;
    if ( (*(_DWORD *)v4 & 4) != 0 )
    {
      v14 = 0LL;
    }
    else
    {
      v15 = &unk_140C53D40;
      v16 = (int *)&unk_140C53D40;
      if ( (*(_BYTE *)(v6 + 184) & 7) != 2 )
        v16 = (int *)(v6 + 256);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        sub_140461A66(v16, a2);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v52 = 0;
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v18 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v19 = *(_DWORD *)(v18 + 24);
            *(_DWORD *)(v18 + 24) = v19 + 1;
            if ( v19 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset(v16, 0x1Fu) )
        {
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v20 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v21 = *(_DWORD *)(v20 + 24) - 1;
              *(_DWORD *)(v20 + 24) = v21;
              if ( !v21 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          v52 = sub_140220C30(v16, 0xFFu);
        }
        for ( i = *v16; (*v16 & 0xBFFFFFFF) != 0x80000000; i = *v16 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v16, 0x40000000u);
          sub_1402F32E0(&v52, a2, a3, a4);
        }
      }
      if ( (v46 & 2) != 0 )
      {
        v23 = *(unsigned int *)(v12 + 24);
        v24 = v23 + v13;
        *(_DWORD *)(v12 + 24) = (v23 + v13) % v45;
      }
      else
      {
        v23 = *(unsigned int *)(v12 + 28);
        v24 = v23 + v13;
        *(_DWORD *)(v12 + 28) = (v23 + v13) % v45;
      }
      if ( (*(_BYTE *)(v6 + 184) & 7) != 2 )
        v15 = (_DWORD *)(v6 + 256);
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14063D8B0(v15, retaddr);
      else
        *v15 = 0;
      v25 = KeGetCurrentPrcb();
      v26 = *((_QWORD *)v25 + 4375);
      if ( v26 )
      {
        if ( *((_BYTE *)v25 + 32) <= 1u )
        {
          v27 = *(_DWORD *)(v26 + 24) - 1;
          *(_DWORD *)(v26 + 24) = v27;
          if ( !v27 )
            sub_140418E4C(v25);
        }
      }
      v9 = v47;
      v7 = v50;
      v5 = v51;
      if ( v24 < v13 )
        v23 = 0LL;
      v14 = v23;
    }
    v28 = v45 * (v14 + v13) / 0x3E8;
    if ( v28 > v13 )
      v28 = v13 * v45 / 0x3E8;
    *(_QWORD *)(v4 + 48) = v28;
    if ( *(_QWORD *)(v4 + 40) >= v28 )
      return 4LL;
    v8 = v49;
  }
  v29 = 0LL;
  v30 = v7 << 25 >> 16;
  v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = *(_QWORD *)v31;
  if ( v31 >= 0xFFFFF6FB7DBED000uLL
    && v31 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)sub_140229550()
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    v33 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 8 * ((v31 >> 3) & 0x1FF));
      if ( (v34 & 0x20) != 0 )
        v32 |= 0x20uLL;
      if ( (v34 & 0x42) != 0 )
        v32 |= 0x42uLL;
    }
  }
  v49 = v32;
  if ( (unsigned __int64)&v49 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v49 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)sub_140229550()
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    v35 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
      if ( (v36 & 0x20) != 0 )
        v32 |= 0x20uLL;
      if ( (v36 & 0x42) != 0 )
        v32 |= 0x42uLL;
    }
  }
  v37 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( v5 )
  {
    v38 = (__int64)((v31 << 25) - v29 + 0x10000000) >> 16;
    for ( j = ((v38 << 25) - v29) >> 16; j >= 0xFFFFF68000000000uLL; j = (__int64)((j << 25) - v29) >> 16 )
    {
      if ( j > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v38 = j;
    }
  }
  else
  {
    v38 = v31 + 8;
  }
  if ( (*(_DWORD *)v4 & 2) != 0 )
  {
    v9[2] = v38;
  }
  else if ( (*(_DWORD *)v4 & 4) == 0 )
  {
    v9[1] = v38;
  }
  if ( !v5
    || (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && !(unsigned int)sub_140228C50(v6, ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( !_bittest64((const signed __int64 *)(v37 + 40), 0x28u) )
    {
      v40 = *(_QWORD *)(v37 + 8);
      if ( v40 > 0 )
      {
        if ( (unsigned int)sub_1403336E0(
                             v6,
                             ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                             v40 | 0x8000000000000000uLL) )
          v49 = sub_140317A10(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    if ( ((v49 >> 5) & 1) != 0 && (v41 = *(_QWORD *)(v4 + 248)) != 0 && v30 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)sub_14045BBAE(v41, v30) )
        return sub_1402F3AD0(v8, v42);
    }
    else
    {
      v44 = (v49 >> 5) & 1 | 2;
      if ( (*(_DWORD *)v4 & 3) == 0 )
        v44 = (v49 >> 5) & 1;
      sub_140332670(v6, (v30 >> 9) & 0xFFFFFFF8, v30, v37, v4, v44);
    }
    if ( ++*(_QWORD *)(v4 + 40) >= *(_QWORD *)(v4 + 48) )
      return 4LL;
  }
  return 0LL;
}
