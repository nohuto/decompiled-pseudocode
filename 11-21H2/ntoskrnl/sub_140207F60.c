/*
 * XREFs of sub_140207F60 @ 0x140207F60
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_140210D6C @ 0x140210D6C (sub_140210D6C.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

char __fastcall sub_140207F60(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r10
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  struct _KPRCB *v10; // rsi
  __int64 v11; // rcx
  char v12; // cl
  __int64 v13; // r8
  char v14; // cl
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  _QWORD **v17; // rbx
  char v18; // si
  char result; // al
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // r9
  unsigned int v23; // eax
  char v24; // cl
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r9
  struct _KPRCB *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD **v36; // r9
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  struct _KPRCB *v43; // rcx
  __int64 v44; // rdx
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  _DWORD v48[10]; // [rsp+20h] [rbp-28h] BYREF
  int v49; // [rsp+90h] [rbp+48h] BYREF
  int v50; // [rsp+98h] [rbp+50h] BYREF
  _QWORD *v51; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+60h]

  LOBYTE(v50) = a2;
  v51 = 0LL;
  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0LL;
  if ( dword_140D068E8 )
  {
    v7 = v50;
    while ( 1 )
    {
      v8 = qword_140D088C0[v6];
      v9 = 424LL * (unsigned int)v6 + a1 + 128;
      if ( v8 )
      {
        v10 = KeGetCurrentPrcb();
        v49 = 0;
        while ( 1 )
        {
          v11 = *((_QWORD *)v10 + 4375);
          if ( v11 )
          {
            if ( *((_BYTE *)v10 + 32) <= 1u )
            {
              v32 = *(_DWORD *)(v11 + 24);
              *(_DWORD *)(v11 + 24) = v32 + 1;
              if ( v32 == -1 )
                sub_140418E4C(v10);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            break;
          v26 = *((_QWORD *)v10 + 4375);
          if ( v26 )
          {
            if ( *((_BYTE *)v10 + 32) <= 1u )
            {
              v33 = *(_DWORD *)(v26 + 24) - 1;
              *(_DWORD *)(v26 + 24) = v33;
              if ( !v33 )
                sub_140418E4C(v10);
            }
          }
          do
            sub_1402F32E0(&v49);
          while ( *(_QWORD *)(v8 + 48) );
        }
      }
      v12 = *(_BYTE *)(v9 + 112);
      v13 = *(unsigned int *)(v9 + 116);
      if ( v7 )
        break;
      v23 = *(unsigned __int8 *)(v9 + 112);
      v24 = v12 & 0xF7;
      *(_BYTE *)(v9 + 112) = v24;
      v25 = v13 - ((v23 >> 3) & 1);
      *(_DWORD *)(v9 + 116) = v25;
      if ( v25 )
      {
        if ( (v24 & 1) != 0 )
        {
          v13 = 0LL;
LABEL_50:
          sub_140210D6C(v8, v9, v13);
        }
LABEL_10:
        if ( v8 )
          goto LABEL_11;
        goto LABEL_12;
      }
      if ( v8 )
      {
        if ( (v24 & 1) == 0 )
        {
LABEL_29:
          *(_BYTE *)(v9 + 112) &= ~4u;
LABEL_11:
          sub_140208284(v8, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          if ( v16 )
          {
            if ( *((_BYTE *)v15 + 32) <= 1u )
            {
              v39 = *(_DWORD *)(v16 + 24) - 1;
              *(_DWORD *)(v16 + 24) = v39;
              if ( !v39 )
                sub_140418E4C(v15);
            }
          }
          goto LABEL_12;
        }
        v34 = 424LL * (unsigned int)v6 + a1 + 128;
        do
        {
          v35 = *(_QWORD *)(v34 + 408);
          if ( !v35 )
            break;
          v34 = *(_QWORD *)(v34 + 408);
        }
        while ( !*(_DWORD *)(v35 + 116) );
        if ( *(_DWORD *)(v34 + 116) )
        {
          v36 = 0LL;
        }
        else
        {
          v36 = &v51;
          v34 = 0LL;
        }
        sub_140291A94(v9, v34, 0LL, v36);
        v38 = *(_QWORD *)(v9 + 392);
        if ( (*(_BYTE *)(v9 + 400) & 1) != 0 )
        {
          if ( v38 )
          {
            v38 ^= v9 + 392;
            goto LABEL_60;
          }
        }
        else
        {
LABEL_60:
          if ( v38 )
            goto LABEL_29;
        }
        LOBYTE(v37) = 1;
        sub_140210CE4(v8, v9, v37);
        goto LABEL_29;
      }
LABEL_12:
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= dword_140D068E8 )
      {
        LOBYTE(CurrentIrql) = v52;
        v2 = v50;
        goto LABEL_14;
      }
    }
    v14 = v12 | 0xC;
    *(_DWORD *)(v9 + 116) = v13 + 1;
    *(_BYTE *)(v9 + 112) = v14;
    if ( (v14 & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      goto LABEL_50;
    }
    goto LABEL_10;
  }
LABEL_14:
  v17 = (_QWORD **)v51;
  v18 = 0;
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v2)) & 4;
  if ( v17 )
  {
    v51 = *v17;
    do
    {
      sub_1403405E0(CurrentPrcb, v17 - 27, &v51);
      v17 = (_QWORD **)v51;
      ++v18;
      if ( v51 )
        v51 = (_QWORD *)*v51;
      if ( (v18 & 0xF) == 0 )
        sub_140340300((char *)CurrentPrcb + 12760);
    }
    while ( v17 );
  }
  result = sub_140340300((char *)CurrentPrcb + 12760);
  if ( (unsigned __int8)CurrentIrql >= 2u )
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
          v48[0] = 5;
          *(_OWORD *)&v48[1] = 0LL;
          return sub_1402ADD00(v48, 47LL);
        }
      }
    }
  }
  else
  {
    v20 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
      v28 = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        v29 = *((_QWORD *)v28 + 4375);
        if ( v29 )
        {
          if ( *((_BYTE *)v28 + 32) <= 1u )
          {
            v40 = *(_DWORD *)(v29 + 24);
            *(_DWORD *)(v29 + 24) = v40 + 1;
            if ( v40 == -1 )
              sub_140418E4C(v28);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v41 = *((_QWORD *)v28 + 4375);
        if ( v41 )
        {
          if ( *((_BYTE *)v28 + 32) <= 1u )
          {
            v42 = *(_DWORD *)(v41 + 24) - 1;
            *(_DWORD *)(v41 + 24) = v42;
            if ( !v42 )
              sub_140418E4C(v28);
          }
        }
        do
          sub_1402F32E0(&v50);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v30 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v27) = 1;
      sub_140345C80(CurrentPrcb, v20, 0LL, v27);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v30;
      if ( *(_BYTE *)(v30 + 388) == 1 )
        *(_DWORD *)(v30 + 132) = *(_DWORD *)(v30 + 132) - *(_DWORD *)(v30 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v30 + 388) = 2;
      *(_BYTE *)(v20 + 643) = 32;
      *(_BYTE *)(v20 + 390) = CurrentIrql;
      sub_1402B9970(CurrentPrcb, v20);
      LOBYTE(v31) = CurrentIrql;
      v21 = (unsigned __int8)sub_140428A30(v20, v30, v31) == 0;
    }
    else
    {
      v21 = (*(_DWORD *)(v20 + 116) & 0x40) == 0;
    }
    if ( !v21 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v43 = KeGetCurrentPrcb();
          v44 = *((_QWORD *)v43 + 4375);
          v21 = (*(_DWORD *)(v44 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v44 + 20) &= 0xFFFF0003;
          if ( v21 )
            sub_140418E4C(v43);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v20 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v45 = KeGetCurrentPrcb();
      v46 = *((_QWORD *)v45 + 4375);
      v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v21 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
      *(_DWORD *)(v46 + 20) &= v47;
      if ( v21 )
        sub_140418E4C(v45);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
