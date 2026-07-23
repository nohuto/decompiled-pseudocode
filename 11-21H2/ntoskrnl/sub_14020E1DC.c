/*
 * XREFs of sub_14020E1DC @ 0x14020E1DC
 * Callers:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_14023F570 @ 0x14023F570 (sub_14023F570.c)
 * Callees:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int8 __fastcall sub_14020E1DC(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  unsigned __int8 v3; // r14
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  char v16; // si
  _QWORD *v17; // rdi
  unsigned __int8 result; // al
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // rdx
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KPRCB *v37; // rsi
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // r8
  struct _KPRCB *v44; // rcx
  __int64 v45; // rdx
  struct _KPRCB *v46; // r10
  __int64 v47; // r9
  int v48; // eax
  _QWORD *v50; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  _DWORD v55[70]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = (unsigned __int16)word_140D05014;
  v3 = a2;
  v53 = 0;
  v52 = 0;
  v51 = (unsigned __int16)word_140D05014;
  _m_prefetchw(qword_140D06BD8);
  _m_prefetchw(Src);
  if ( a1 )
    KeAcquireSpinLockAtDpcLevel(&qword_140C2B8A0);
  v5 = 0;
  LODWORD(v50) = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140D06E48[v6];
      if ( a1 )
      {
        if ( v6 >= *a1 )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v21;
        *(_QWORD *)&v55[2 * v6 + 6] = v9;
        if ( qword_140D07D30[v6] == v9 )
          goto LABEL_60;
      }
      else
      {
        v9 = qword_140D07D30[v6];
        *(_QWORD *)&v55[2 * v6 + 6] = v9;
      }
      LODWORD(v50) = 1;
      v10 = v8 & v9;
      v5 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v53 = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)Src + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v2 = v51;
        v5 = (int)v50;
      }
      if ( !v11 )
        goto LABEL_11;
      v22 = *((_QWORD *)&unk_140D08398 + 4 * v6);
      v23 = v22 & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v24 = (v8 ^ v22) & -(__int64)((v9 & (v8 ^ v22)) != 0 && (v9 & v22) != 0);
      v54 = v24;
      v25 = v8 ^ qword_140D08090[2 * v6];
      v26 = v25 & v9;
      if ( !v25 || !v26 )
        goto LABEL_50;
      v27 = v11 & v25;
      v11 ^= v27;
      if ( v27 )
      {
        v28 = v54;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v29, v27);
          v30 = v26;
          v27 &= ~(1LL << v29);
          v52 = v29;
          if ( _bittest64(&v23, (unsigned int)v29) )
          {
            if ( (v26 & v23) != 0 )
              v30 = v26 & v23;
          }
          else if ( (v26 & v28) != 0 )
          {
            v30 = v26 & v28;
          }
          *((_QWORD *)Src + (unsigned int)((v7 << 6) + v29)) = v30;
        }
        while ( v27 );
        v2 = v51;
        v24 = v54;
      }
      if ( v11 )
      {
LABEL_50:
        v31 = v8 & ~v26;
        if ( (v9 & v31) == 0 )
          v31 = v8;
        v32 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v33, v11);
          v34 = v31;
          v11 &= ~(1LL << v33);
          v52 = v33;
          if ( _bittest64(&v23, (unsigned int)v33) )
          {
            if ( (v9 & v23 & v31) != 0 )
            {
              v35 = v23;
LABEL_58:
              v34 = v31 & v35;
            }
          }
          else if ( (v9 & v24 & v31) != 0 )
          {
            v35 = v24;
            goto LABEL_58;
          }
          *((_QWORD *)Src + (unsigned int)(v32 + v33)) = v34;
        }
        while ( v11 );
      }
LABEL_60:
      v5 = (int)v50;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v50 = 0LL;
  if ( v5 )
  {
    sub_14020F26C(&qword_140D06A00);
    for ( i = 0; i < v2; qword_140D07D30[v14] = *(_QWORD *)&v55[2 * v14 + 6] )
      v14 = i++;
    memmove(qword_140D06BD8, Src, (unsigned int)Size);
    ++qword_140D06A00;
    sub_14020E464(&v50);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C2B8A0);
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  v17 = v50;
  if ( v50 )
  {
    v50 = (_QWORD *)*v50;
    do
    {
      sub_1403405E0(CurrentPrcb, v17 - 27, &v50);
      v17 = v50;
      ++v16;
      if ( v50 )
        v50 = (_QWORD *)*v50;
      if ( (v16 & 0xF) == 0 )
        sub_140340300((char *)CurrentPrcb + 12760);
    }
    while ( v17 );
  }
  result = sub_140340300((char *)CurrentPrcb + 12760);
  if ( v3 >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      result = *((_BYTE *)CurrentPrcb + 13242);
      if ( !result )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) )
        {
          *((_BYTE *)CurrentPrcb + 6) = 1;
        }
        else
        {
          v55[0] = 5;
          *(_OWORD *)&v55[1] = 0LL;
          return sub_1402ADD00(v55, 47LL);
        }
      }
    }
  }
  else
  {
    v19 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
      v37 = KeGetCurrentPrcb();
      v51 = 0;
      while ( 1 )
      {
        v38 = *((_QWORD *)v37 + 4375);
        if ( v38 )
        {
          if ( *((_BYTE *)v37 + 32) <= 1u )
          {
            v39 = *(_DWORD *)(v38 + 24);
            *(_DWORD *)(v38 + 24) = v39 + 1;
            if ( v39 == -1 )
              sub_140418E4C(v37);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v40 = *((_QWORD *)v37 + 4375);
        if ( v40 )
        {
          if ( *((_BYTE *)v37 + 32) <= 1u )
          {
            v41 = *(_DWORD *)(v40 + 24) - 1;
            *(_DWORD *)(v40 + 24) = v41;
            if ( !v41 )
              sub_140418E4C(v37);
          }
        }
        do
          sub_1402F32E0(&v51);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v42 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v36) = 1;
      sub_140345C80(CurrentPrcb, v19, 0LL, v36);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v42;
      if ( *(_BYTE *)(v42 + 388) == 1 )
        *(_DWORD *)(v42 + 132) = *(_DWORD *)(v42 + 132) - *(_DWORD *)(v42 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v42 + 388) = 2;
      *(_BYTE *)(v19 + 643) = 32;
      *(_BYTE *)(v19 + 390) = v3;
      sub_1402B9970(CurrentPrcb, v19);
      LOBYTE(v43) = v3;
      v20 = (unsigned __int8)sub_140428A30(v19, v42, v43) == 0;
    }
    else
    {
      v20 = (*(_DWORD *)(v19 + 116) & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v44 = KeGetCurrentPrcb();
          v45 = *((_QWORD *)v44 + 4375);
          v20 = (*(_DWORD *)(v45 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v45 + 20) &= 0xFFFF0003;
          if ( v20 )
            sub_140418E4C(v44);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v19 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v46 = KeGetCurrentPrcb();
      v47 = *((_QWORD *)v46 + 4375);
      v48 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v20 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
      *(_DWORD *)(v47 + 20) &= v48;
      if ( v20 )
        sub_140418E4C(v46);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
