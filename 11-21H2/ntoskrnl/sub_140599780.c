/*
 * XREFs of sub_140599780 @ 0x140599780
 * Callers:
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405B2504 @ 0x1405B2504 (sub_1405B2504.c)
 */

char __fastcall sub_140599780(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  BOOL v20; // r12d
  _QWORD *v21; // rax
  int v22; // ebx
  __int64 v23; // r13
  int v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  BOOL v35; // edi
  __int64 v36; // rdx
  unsigned __int64 v38; // [rsp+28h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-48h]
  __int128 v40; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v41; // [rsp+40h] [rbp-30h]
  BOOL v42; // [rsp+48h] [rbp-28h]
  ULONG_PTR v43; // [rsp+50h] [rbp-20h]
  __int64 v44; // [rsp+58h] [rbp-18h]
  unsigned __int64 v45; // [rsp+60h] [rbp-10h]

  v41 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v40 = 0LL;
  if ( !a2 )
    goto LABEL_29;
  v9 = sub_1403095B0((__int64)&qword_140C534C0, a4);
  v43 = v9;
  v10 = v9;
  if ( !v9 )
  {
    v6 = a3;
LABEL_29:
    v21 = &a1[v5];
    v45 = (unsigned __int64)v21;
    if ( a1 >= v21 )
      return (char)v21;
    v22 = a5 != 0 ? 4 : 1;
    LODWORD(v43) = v22;
    v44 = 0LL;
    v23 = a3;
    v39 = 48 * v6 - 0x220000000000LL;
    while ( 1 )
    {
      sub_1402E8000(0, 2uLL, (__int64)&v40);
      v24 = sub_14026C61C(v22, 48LL * *a1 - 0x220000000000LL);
      v25 = v41;
      v27 = sub_1402CBD10((unsigned __int64)v41, v26, v24 | 0xA0000000);
      v42 = sub_140317A80((unsigned __int64)v25);
      if ( !v42 )
        goto LABEL_40;
      if ( !(unsigned int)sub_140229550() )
        break;
      if ( !HIBYTE(word_140C51864) && (v27 & 1) != 0 )
        v27 |= 0x8000000000000000uLL;
      *v25 = v27;
      sub_1402294F0((__int64)v25, v27);
LABEL_41:
      v28 = (unsigned __int64)(v25 + 1);
      v29 = sub_14026C61C(a5 != 0 ? 1 : 4, v39);
      v30 = sub_1402CBD10((unsigned __int64)(v25 + 1), v23, v29 | 0xA0000000);
      if ( !sub_140317A80((unsigned __int64)(v25 + 1)) )
        goto LABEL_50;
      if ( !(unsigned int)sub_140229550() )
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v30 & 1) != 0 )
          v30 |= 0x8000000000000000uLL;
        v25 = v41;
LABEL_50:
        v31 = 0;
        goto LABEL_51;
      }
      v31 = 1;
      if ( !HIBYTE(word_140C51864) && (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
LABEL_51:
      *(_QWORD *)v28 = v30;
      if ( v31 )
        sub_1402294F0(v28, v30);
      v32 = (__int64)(((v28 - 8) << 25) - v44) >> 16;
      v33 = (__int64)((v28 << 25) - v44) >> 16;
      if ( !a5 )
      {
        v33 = (__int64)(((v28 - 8) << 25) - v44) >> 16;
        v32 = (__int64)((v28 << 25) - v44) >> 16;
      }
      sub_140424FF0(v32, v33);
      v34 = 0LL;
      if ( v42 )
      {
        if ( (unsigned int)sub_140229550() )
        {
          if ( !HIBYTE(word_140C51864) && (v34 & 1) != 0 )
            v34 |= 0x8000000000000000uLL;
          *v25 = v34;
          sub_1402294F0((__int64)v25, v34);
          goto LABEL_65;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        {
          *v41 = v34;
          goto LABEL_65;
        }
        v25 = v41;
        if ( (v34 & 1) != 0 )
          v34 |= 0x8000000000000000uLL;
      }
      *v25 = v34;
LABEL_65:
      v35 = 0;
      if ( sub_140317A80(v28) )
        v35 = sub_140229550() != 0;
      *(_QWORD *)v28 = 0LL;
      if ( v35 )
        sub_1402294F0(v28, 0LL);
      LOBYTE(v21) = sub_1405B2504(&v40, v36);
      v39 += 48LL;
      ++a1;
      LOBYTE(v22) = v43;
      ++v23;
      if ( (unsigned __int64)a1 >= v45 )
        return (char)v21;
    }
    v25 = v41;
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v27 & 1) != 0 )
      v27 |= 0x8000000000000000uLL;
LABEL_40:
    *v25 = v27;
    goto LABEL_41;
  }
  v11 = sub_1402CBD10(v9, -1LL, (a5 != 0 ? 1 : 4) | 0xA0000000);
  v12 = (_QWORD *)v10;
  v13 = v10 + 8 * v5;
  v38 = v13;
  if ( v10 >= v13 )
    goto LABEL_17;
  v14 = a3;
  v15 = v13;
  do
  {
    v11 ^= (v11 ^ (v14 << 12)) & 0xFFFFFFFFFF000LL;
    v16 = v11;
    if ( !sub_140317A80((unsigned __int64)v12) )
    {
      v17 = 0;
      goto LABEL_13;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
    }
    else
    {
      v17 = 0;
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_13;
    }
    if ( (v11 & 1) != 0 )
      v16 = v11 | 0x8000000000000000uLL;
LABEL_13:
    *v12 = v16;
    if ( v17 )
      sub_1402294F0((__int64)v12, v16);
    ++v12;
    ++v14;
  }
  while ( (unsigned __int64)v12 < v15 );
  v10 = v43;
  v5 = a4;
  v7 = a2;
LABEL_17:
  if ( a5 )
  {
    v18 = (__int64)(v10 << 25) >> 16;
  }
  else
  {
    v18 = v7;
    v7 = (__int64)(v10 << 25) >> 16;
  }
  memmove((void *)v7, (const void *)v18, v5 << 12);
  v19 = (_QWORD *)v10;
  if ( v10 < v10 + 8 * v5 )
  {
    do
    {
      v20 = 0;
      if ( sub_140317A80((unsigned __int64)v19) )
        v20 = sub_140229550() != 0;
      *v19 = 0LL;
      if ( v20 )
        sub_1402294F0((__int64)v19, 0LL);
      ++v19;
    }
    while ( (unsigned __int64)v19 < v38 );
    LODWORD(v5) = a4;
  }
  LOBYTE(v21) = sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v10, v5);
  return (char)v21;
}
