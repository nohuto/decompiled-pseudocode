/*
 * XREFs of sub_1402C5D00 @ 0x1402C5D00
 * Callers:
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_14025CE80 @ 0x14025CE80 (sub_14025CE80.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402C5D00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 CurrentIrql; // rbp
  int v10; // ecx
  unsigned __int64 v11; // r10
  int v12; // ecx
  char v13; // al
  int v14; // ebp
  int v15; // ebp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // bl
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v33; // r8
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // edx
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+90h] [rbp+18h] BYREF
  __int64 v44; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = a1;
  if ( a3 < 3 )
  {
    _mm_lfence();
    v7 = qword_14001C780[a3];
  }
  else
  {
    v7 = 1LL;
  }
  v40 = sub_1402C6260(32LL * a3 + a1 + 88, a3, v7, 0LL);
  v8 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a3 <= 1 )
  {
    v29 = 2 - a3;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v29;
    }
    while ( v29 );
  }
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v43);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( *(_BYTE *)(v6 + 70) )
  {
    sub_14025CE80(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v31 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = *((_QWORD *)CurrentPrcb + 4375);
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v35 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    ++dword_140C29730;
    return 0LL;
  }
  v10 = *(unsigned __int8 *)(v4 + 34) >> 6;
  if ( v7 == 1 )
  {
    if ( !v10 || v10 == 2 )
    {
      v11 = 0x140000000uLL;
      if ( dword_140C507DC[4 * v10] != 1 )
        goto LABEL_13;
      sub_140267E78(v4, 1u, 1);
    }
    else if ( (*(_BYTE *)(v4 + 34) & 0xC0) == 0xC0 )
    {
      sub_1402E5708(v4, 1LL, 1LL);
    }
  }
  v11 = 0x140000000uLL;
LABEL_13:
  v12 = 4;
  v13 = *(_BYTE *)(v4 + 34) >> 6;
  if ( v13 )
  {
    if ( v13 == 2 )
      v12 = 28;
  }
  else
  {
    v12 = 12;
  }
  v14 = -1543503872;
  if ( a3 > 1 )
    v14 = -1610612736;
  v15 = v12 | v14;
  v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v15 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL )
    goto LABEL_79;
  v17 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_79;
  v18 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | qword_140016200[v15 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v15 & 0x4000000) == 0 )
    {
      v16 = (((0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | qword_140016200[v15 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    }
    v30 = sub_14023261C(v8);
    v11 = 0x140000000uLL;
    v17 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v30 )
      v16 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v16 |= 4uLL;
  if ( (v15 & 0x4000000) != 0 )
    v18 = sub_1402CFEB0(v18);
  if ( v18 < 0xFFFF800000000000uLL )
  {
    v19 = HIBYTE(word_140C51864);
  }
  else
  {
    if ( *(_BYTE *)(((v18 >> 39) & 0x1FF) - 256 + v11 + 12926800) == 1 || v18 >= 0xFFFFF68000000000uLL && v18 <= v17 )
      goto LABEL_33;
    v19 = v18 < qword_140C540C0 || v18 > qword_140C51BF0 ? (unsigned __int8)word_140C51864 : HIBYTE(word_140C51864);
  }
  if ( v19 )
LABEL_79:
    v16 |= 0x100uLL;
LABEL_33:
  if ( v15 < 0 )
    v16 |= 0x42uLL;
  v20 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100;
  v21 = v20 | 0x80;
  if ( (v15 & 0x4000000) == 0 )
    v21 = v20;
  v22 = v21 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 <= 1 )
  {
    if ( (unsigned int)sub_140317A80(v8) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        *(_QWORD *)v8 = v22;
        sub_1402294F0(v8, v22);
        goto LABEL_45;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v22 & 1) != 0 )
        v22 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v8 = v22;
    goto LABEL_45;
  }
  v23 = 8 * v7;
  if ( v8 >= v8 + 8 * v7 )
    goto LABEL_44;
  v24 = v8 + 8 * v7;
  do
  {
    v25 = v22;
    if ( !(unsigned int)sub_140317A80(v8) )
      goto LABEL_41;
    if ( !(unsigned int)sub_140229550() )
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v22 & 1) != 0 )
        v25 = v22 | 0x8000000000000000uLL;
LABEL_41:
      *(_QWORD *)v8 = v25;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C51864) && (v22 & 1) != 0 )
      v25 = v22 | 0x8000000000000000uLL;
    *(_QWORD *)v8 = v25;
    sub_1402294F0(v8, v25);
LABEL_42:
    v8 += 8LL;
    v22 ^= (v22 ^ (v22 + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( v8 < v24 );
  v4 = a2;
  v23 = 8 * v7;
  v6 = a1;
LABEL_44:
  v8 -= v23;
LABEL_45:
  *(_QWORD *)(v6 + 40) = v40;
  *(_QWORD *)(v6 + 32) = v8;
  *(_QWORD *)(v6 + 48) = (v7 << 12) + v40 - 1;
  *(_DWORD *)(v6 + 64) = a3;
  *(_QWORD *)(v6 + 80) = v4;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v26 = v44;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = *((_QWORD *)v37 + 4375);
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
        v35 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v39;
        if ( v35 )
          sub_140418E4C(v37);
      }
    }
  }
  __writecr8(v26);
  return 1LL;
}
