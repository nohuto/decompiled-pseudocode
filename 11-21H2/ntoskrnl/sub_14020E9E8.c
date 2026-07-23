/*
 * XREFs of sub_14020E9E8 @ 0x14020E9E8
 * Callers:
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 * Callees:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14057B33C @ 0x14057B33C (sub_14057B33C.c)
 */

unsigned __int8 __fastcall sub_14020E9E8(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v7; // rdi
  char v8; // si
  unsigned __int8 result; // al
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // r9
  __int64 v13; // r9
  struct _KPRCB *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  _DWORD v26[8]; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+90h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, v2 + 80) )
    sub_14057B33C(v2, a2);
  if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    a2 = v2 + 80;
  sub_14020EC24(a1, &v28, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v7 = v28;
  v8 = 0;
  if ( v28 )
  {
    v28 = (_QWORD *)*v28;
    do
    {
      sub_1403405E0(CurrentPrcb, v7 - 27, &v28);
      v7 = v28;
      ++v8;
      if ( v28 )
        v28 = (_QWORD *)*v28;
      if ( (v8 & 0xF) == 0 )
        sub_140340300((char *)CurrentPrcb + 12760);
    }
    while ( v7 );
  }
  result = sub_140340300((char *)CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
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
          v26[0] = 5;
          *(_OWORD *)&v26[1] = 0LL;
          return sub_1402ADD00(v26, 47LL);
        }
      }
    }
  }
  else
  {
    v10 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
      v14 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        v15 = *((_QWORD *)v14 + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)v14 + 32) <= 1u )
          {
            v19 = *(_DWORD *)(v15 + 24);
            *(_DWORD *)(v15 + 24) = v19 + 1;
            if ( v19 == -1 )
              sub_140418E4C(v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v18 = *((_QWORD *)v14 + 4375);
        if ( v18 )
        {
          if ( *((_BYTE *)v14 + 32) <= 1u )
          {
            v20 = *(_DWORD *)(v18 + 24) - 1;
            *(_DWORD *)(v18 + 24) = v20;
            if ( !v20 )
              sub_140418E4C(v14);
          }
        }
        do
          sub_1402F32E0(&v27);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v16 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v13) = 1;
      sub_140345C80(CurrentPrcb, v10, 0LL, v13);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v16;
      if ( *(_BYTE *)(v16 + 388) == 1 )
        *(_DWORD *)(v16 + 132) = *(_DWORD *)(v16 + 132) - *(_DWORD *)(v16 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v16 + 388) = 2;
      *(_BYTE *)(v10 + 643) = 32;
      *(_BYTE *)(v10 + 390) = CurrentIrql;
      sub_1402B9970(CurrentPrcb, v10);
      LOBYTE(v17) = CurrentIrql;
      v11 = (unsigned __int8)sub_140428A30(v10, v16, v17) == 0;
    }
    else
    {
      v11 = (*(_DWORD *)(v10 + 116) & 0x40) == 0;
    }
    if ( !v11 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v11 = (*(_DWORD *)(v22 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v22 + 20) &= 0xFFFF0003;
          if ( v11 )
            sub_140418E4C(v21);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v10 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v23 = KeGetCurrentPrcb();
      v24 = *((_QWORD *)v23 + 4375);
      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
      *(_DWORD *)(v24 + 20) &= v25;
      if ( v11 )
        sub_140418E4C(v23);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
