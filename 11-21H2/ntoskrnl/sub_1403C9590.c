/*
 * XREFs of sub_1403C9590 @ 0x1403C9590
 * Callers:
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 * Callees:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026E158 @ 0x14026E158 (sub_14026E158.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_1403C9B18 @ 0x1403C9B18 (sub_1403C9B18.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403C9590(unsigned __int64 a1)
{
  int v2; // r13d
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rcx
  __int16 v6; // r14
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v11; // r12
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdi
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // r13d
  int v23; // ecx
  unsigned __int64 v24; // r12
  int v25; // r8d
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  signed __int8 v32; // cf
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 i; // rbx
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-C8h] BYREF
  int v46; // [rsp+48h] [rbp-C0h]
  _BYTE v47[12]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+70h] [rbp-98h]
  unsigned __int64 v52; // [rsp+78h] [rbp-90h]
  unsigned __int64 v53; // [rsp+80h] [rbp-88h]
  unsigned __int64 v54; // [rsp+88h] [rbp-80h]
  _QWORD v55[46]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v56[24]; // [rsp+208h] [rbp+100h] BYREF

  *(_DWORD *)&v47[8] = 0;
  LOBYTE(v44) = 0;
  memset(v56, 0, 0xB8uLL);
  memset(v55, 0, 0x168uLL);
  LODWORD(v56[1]) = 20;
  v56[3] = 0LL;
  *(_QWORD *)v47 = (unsigned int)sub_1402FDD20(a1);
  v2 = *(_DWORD *)v47;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  v48 = 0x200000LL;
  if ( *(_DWORD *)v47 != 1 )
  {
    v5 = (unsigned int)(*(_DWORD *)v47 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v5;
    }
    while ( v5 );
    v48 = v4;
  }
  v49 = sub_140317A10(v3);
  v6 = v49;
  v7 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFFLL;
  v51 = v7;
  sub_14026E1F4(v55);
  LODWORD(v55[15]) = 4;
  v55[12] = &StartContext;
  v8 = sub_1402C1550(v7);
  sub_14026E158(a1, (unsigned int)(*((_DWORD *)v8 + 2) + 1), (__int64)&v55[42], v9);
  if ( (int)sub_14027D03C((__int64)v55, 1uLL, 0, &v47[4]) < 0 )
    return 0LL;
  v11 = *(_QWORD *)&v47[4];
  **(_QWORD **)&v47[4] = 0LL;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
  v50 = v12;
  v45 = sub_140317A10(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = sub_140317A10((unsigned __int64)&v45);
  v14 = -2147483644;
  v53 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v6 & 0x100) != 0 && v2 == 1 )
    v14 = -1610612732;
  v54 = v3 << 25;
  v15 = sub_1402CBD10((__int64)(v3 << 25) >> 16, v7, v14);
  v45 = v15;
  v16 = v15;
  v17 = v15;
  if ( ((unsigned __int8)(1 << (v2 - 1)) & (unsigned __int8)byte_140C506CE) != 0 )
  {
    v16 = v15 & 0xFFFFFFFFFFFFFFDFuLL;
    v45 = v15 & 0xFFFFFFFFFFFFFFDFuLL;
    v17 = v15 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  v52 = sub_1402CC7C0(v12, (unsigned __int8 *)&v44, 0x80000000);
  v18 = v52;
  do
  {
    v46 = 0;
    v19 = v17;
    if ( !sub_140317A80(v18) )
    {
LABEL_21:
      v20 = v46;
      goto LABEL_22;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_22;
      v21 = (v17 & 1) == 0;
    }
    else
    {
      v16 = v45;
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_21;
      v20 = v46;
      v21 = (v17 & 1) == 0;
    }
    if ( !v21 )
      v19 = v17 | 0x8000000000000000uLL;
LABEL_22:
    *(_QWORD *)v18 = v19;
    if ( v20 )
      sub_1402294F0(v18, v19);
    v18 += 8LL;
    v16 ^= (v16 ^ ((v16 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
    v45 = v16;
    v17 = v16;
  }
  while ( (v18 & 0xFFF) != 0 );
  sub_1402BEDD0(v52, v44);
  v22 = *(_DWORD *)v47;
  v23 = -2080374780;
  v24 = v51;
  if ( *(_DWORD *)v47 == 1 )
    v23 = -2147483644;
  v25 = v23 | 0x20000000;
  if ( (v49 & 0x100) == 0 )
    v25 = v23;
  v26 = sub_1402CBD10(v3, v51, v25 | 0x8000000u);
  v27 = v50;
  v45 = v26;
  sub_14027CCE4(v50, v3, v53, 2560);
  v31 = *(_QWORD *)&v47[4];
  *(_DWORD *)v47 = 0;
  v32 = _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)&v47[4] + 24LL), 0x3FuLL);
  v33 = v48;
  if ( v32 )
  {
    do
    {
      do
        sub_1402F32E0(v47, v28, v29, v30);
      while ( *(__int64 *)(v31 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v31 + 24) ^= (*(_QWORD *)(v31 + 24) ^ (*(_QWORD *)(v31 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v45 ^= (v45 ^ (v27 << 12)) & 0xFFFFFFFFFF000LL;
  sub_1402270B8((volatile signed __int64 *)v3, v3, v45, v22);
  v36 = 3LL;
  if ( v22 == 3 )
    sub_1402285E8((__int64)v56, 3u, v3);
  v37 = 48 * v24 - 0x220000000000LL;
  v38 = v50;
  v39 = (__int64)(v54 + 0x10000000) >> 16;
  v40 = 512LL;
  for ( i = v37 + 24576; ; i = *(_QWORD *)&v47[4] )
  {
    v42 = i - 48;
    v39 -= 8LL;
    LODWORD(v48) = 0;
    *(_QWORD *)&v47[4] = v42;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v48, v36, v34, v35);
      while ( *(__int64 *)(v42 + 24) < 0 );
    }
    v43 = *(_QWORD *)&v47[4];
    if ( (*(_BYTE *)(*(_QWORD *)&v47[4] + 35LL) & 0x10) == 0 )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)&v47[4] + 40LL), 0x28u) )
        sub_1403C9B18(v37, *(_QWORD *)&v47[4], v34, 0LL);
      *(_QWORD *)(v43 + 8) = v39;
      sub_14033C3E0(v43, v38);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v40 )
      break;
  }
  if ( v22 == 1 )
    sub_1402C38D0((__int64)&StartContext, v51, v33 >> 12, 0, 1);
  sub_14032F1B0((__int64)v56);
  return 1LL;
}
