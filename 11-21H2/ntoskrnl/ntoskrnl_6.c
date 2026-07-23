/*
 * XREFs of ntoskrnl_6 @ 0x14029B310
 * Callers:
 *     __report_rangecheckfailure @ 0x14029B2F0 (__report_rangecheckfailure.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

__int64 __fastcall ntoskrnl_6(int a1)
{
  char v1; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v5; // rdi
  __int64 v6; // r8
  struct _KPRCB *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  struct _KPRCB *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  PVOID *v17; // r8
  struct _KDPC *v18; // rcx
  bool v19; // zf
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _BYTE *v26; // r14
  char v27; // cl
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v33; // r9
  PVOID *p_DpcData; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // edx
  char v53; // al
  char v54; // al
  char v55; // cl
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // rax
  __int64 v58; // r9
  int v59; // edx
  int v60; // [rsp+60h] [rbp+8h] BYREF
  int v61; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*((_DWORD *)CurrentPrcb + 8118) && !*(_DWORD *)(*((_QWORD *)CurrentPrcb + 4361) + 8LL) )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v33 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v33 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = KeGetCurrentPrcb();
  if ( *((_DWORD *)v5 + 8118) || *(_DWORD *)(*((_QWORD *)v5 + 4361) + 8LL) )
  {
    sub_1402B4EC0(CurrentThread, 0LL);
    v7 = KeGetCurrentPrcb();
    v8 = 0;
    v60 = 0;
    v9 = *((_QWORD *)v7 + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)v7 + 32) <= 1u )
      {
        v41 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v41 + 1;
        if ( v41 == -1 )
LABEL_60:
          sub_140418E4C(v7);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
    {
      v42 = *((_QWORD *)v7 + 4375);
      if ( v42 )
      {
        if ( *((_BYTE *)v7 + 32) <= 1u )
        {
          v43 = *(_DWORD *)(v42 + 24) - 1;
          *(_DWORD *)(v42 + 24) = v43;
          if ( !v43 )
            sub_140418E4C(v7);
        }
      }
      do
        sub_1402F32E0(&v60);
      while ( *((_QWORD *)CurrentThread + 8) );
      v44 = *((_QWORD *)v7 + 4375);
      if ( v44 )
      {
        if ( *((_BYTE *)v7 + 32) <= 1u )
        {
          v45 = *(_DWORD *)(v44 + 24);
          *(_DWORD *)(v44 + 24) = v45 + 1;
          if ( v45 == -1 )
            goto LABEL_60;
        }
      }
    }
    v10 = KeGetCurrentPrcb();
    v61 = 0;
    v11 = *((_QWORD *)v10 + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)v10 + 32) <= 1u )
      {
        v46 = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(v11 + 24) = v46 + 1;
        if ( v46 == -1 )
LABEL_72:
          sub_140418E4C(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 12, 0LL) )
    {
      v37 = *((_QWORD *)v10 + 4375);
      if ( v37 )
      {
        if ( *((_BYTE *)v10 + 32) <= 1u )
        {
          v47 = *(_DWORD *)(v37 + 24) - 1;
          *(_DWORD *)(v37 + 24) = v47;
          if ( !v47 )
            sub_140418E4C(v10);
        }
      }
      do
        sub_1402F32E0(&v61);
      while ( *((_QWORD *)v5 + 6) );
      v38 = *((_QWORD *)v10 + 4375);
      if ( v38 )
      {
        if ( *((_BYTE *)v10 + 32) <= 1u )
        {
          v48 = *(_DWORD *)(v38 + 24);
          *(_DWORD *)(v38 + 24) = v48 + 1;
          if ( v48 == -1 )
            goto LABEL_72;
        }
      }
    }
    v12 = *((_QWORD *)v5 + 2);
    if ( v12 )
      goto LABEL_105;
    v13 = 0LL;
    if ( (v1 & 1) != 0 && *((char *)CurrentThread + 195) < 16 )
      v13 = CurrentThread;
    v12 = sub_1402B7AE0(v5, v13);
    if ( v12 )
    {
LABEL_105:
      if ( *((_BYTE *)v5 + 32) )
      {
        v14 = *((_QWORD *)CurrentThread + 9);
      }
      else
      {
        _disable();
        v14 = sub_140345AA0(v5, CurrentThread, 0LL);
        _enable();
      }
      v15 = v14 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)CurrentThread + 651);
      if ( (*((_DWORD *)CurrentThread + 30) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 5u);
      LOBYTE(v6) = 1;
      *((_QWORD *)CurrentThread + 4) = v15;
      v16 = (char)sub_1402BA000(CurrentThread, 1LL, v6);
      if ( !(unsigned __int8)sub_1402B9FC0((ULONG_PTR)CurrentThread) )
      {
        v18 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (char)v16 > *((char *)CurrentThread + 195) )
        {
          if ( *((_BYTE *)CurrentThread + 793) )
          {
            v17 = (PVOID *)((char *)CurrentThread + 808);
            if ( *((_QWORD *)CurrentThread + 101) == 1LL )
            {
              p_DpcData = &v18[557].DpcData;
              if ( v18 != (struct _KDPC *)-35704LL )
              {
                *v17 = *p_DpcData;
                *p_DpcData = v17;
                _InterlockedIncrement16((volatile signed __int16 *)CurrentThread + 434);
                sub_140229D30(v18);
              }
            }
          }
        }
        v19 = (*((_DWORD *)CurrentThread + 30) & 0x400000) == 0;
        *((_BYTE *)CurrentThread + 195) = v16;
        if ( !v19 )
        {
          LOBYTE(v17) = 1;
          sub_14045B7FC(*((_QWORD *)CurrentThread + 121), v16, v17);
        }
      }
      *((_QWORD *)CurrentThread + 8) = 0LL;
      v20 = KeGetCurrentPrcb();
      v21 = *((_QWORD *)v20 + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)v20 + 32) <= 1u )
        {
          v50 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v50;
          if ( !v50 )
            sub_140418E4C(v20);
        }
      }
      *((_QWORD *)v5 + 2) = 0LL;
      _disable();
      *((_BYTE *)v5 + 32) = 1;
      v22 = __rdtsc();
      v23 = v22 - *((_QWORD *)v5 + 4144);
      v24 = *((unsigned int *)CurrentThread + 20);
      *((_QWORD *)CurrentThread + 9) += v23;
      v25 = ((v23 * (unsigned __int64)*((unsigned int *)v5 + 8302)) >> 16) + v24;
      if ( v25 > 0xFFFFFFFF )
        LODWORD(v25) = -1;
      *((_QWORD *)v5 + 4144) = v22;
      v19 = (*((_BYTE *)CurrentThread + 2) & 0xBE) == 0;
      *((_DWORD *)CurrentThread + 20) = v25;
      if ( !v19 )
      {
        LOBYTE(v22) = 1;
        sub_1402B9680(v5, CurrentThread, v23, v22);
      }
      _enable();
      v26 = (_BYTE *)*((_QWORD *)v5 + 7);
      if ( (*(_BYTE *)(v12 + 2) & 4) != 0
        && *(char *)(v12 + 195) < 16
        && *(_QWORD *)(v12 + 104)
        && (v35 = *(_QWORD *)(v12 + 104)) != 0
        && (v36 = *((unsigned int *)v5 + 54) + v35) != 0
        && (unsigned int)sub_1402103E0(v12, v36, v23, 0, 0LL) )
      {
        v27 = 1;
      }
      else
      {
        v27 = *(_BYTE *)(v12 + 195);
      }
      v28 = v27 & 0x7F | (*(_BYTE *)(v12 + 119) << 7);
      *v26 = v28;
      v29 = *((_QWORD *)v5 + 4375);
      if ( v29 )
      {
        if ( v12 == *((_QWORD *)v5 + 3) )
          v51 = (unsigned int)dword_140D0504C;
        else
          v51 = v28 & 0x7F;
        sub_14045B7FC(v29, v51, 0LL);
      }
      v30 = *((_QWORD *)v5 + 7);
      if ( dword_140D068FC )
      {
        v52 = *(_DWORD *)(v12 + 80);
        v53 = (*(_BYTE *)(v30 + 64) ^ *(_BYTE *)(v12 + 512)) & 7 ^ *(_BYTE *)(v30 + 64);
        v54 = (v53 ^ (8 * *(_BYTE *)(v12 + 516))) & 0x38 ^ v53;
        if ( v52 <= *(_DWORD *)(v12 + 84) )
          v52 = *(_DWORD *)(v12 + 84);
        v55 = 64;
        if ( v52 < dword_140D05308 )
          v55 = 0;
        *(_BYTE *)(v30 + 64) = v55 | v54 & 0xBF;
      }
      *((_QWORD *)v5 + 1) = v12;
      if ( *(_BYTE *)(v12 + 388) == 1 )
        *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v12 + 388) = 2;
      *((_BYTE *)CurrentThread + 643) = 33;
      *((_BYTE *)CurrentThread + 390) = CurrentIrql;
      sub_1402B9970(v5, CurrentThread);
      LOBYTE(v31) = 1;
      sub_140428A30(CurrentThread, v12, v31);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v5 + 6, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = *((_QWORD *)v39 + 4375);
      if ( v40 )
      {
        if ( *((_BYTE *)v39 + 32) <= 1u )
        {
          v49 = *(_DWORD *)(v40 + 24) - 1;
          *(_DWORD *)(v40 + 24) = v49;
          if ( !v49 )
            sub_140418E4C(v39);
        }
      }
      sub_140224100((__int64)CurrentThread);
      v8 = 1073741860;
    }
  }
  else
  {
    v8 = 1073741860;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && CurrentIrql <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v58 = *((_QWORD *)v57 + 4375);
        v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
        *(_DWORD *)(v58 + 20) &= v59;
        if ( v19 )
          sub_140418E4C(v57);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
