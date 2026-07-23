/*
 * XREFs of sub_14020E6EC @ 0x14020E6EC
 * Callers:
 *     KeSetAffinityThread @ 0x14056B9C0 (KeSetAffinityThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14020E6EC(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  char v12; // si
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v16; // r9
  __int64 v17; // r9
  struct _KPRCB *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  struct _KPRCB *v27; // r9
  __int64 v28; // r8
  int v29; // eax
  _QWORD *v30; // [rsp+20h] [rbp-E0h] BYREF
  int v31; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v33[68]; // [rsp+50h] [rbp-B0h] BYREF

  memset(&v33[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 544);
  v5 = 0LL;
  if ( !a2 )
    return v5;
  v33[0] = 2097153;
  memset(&v33[1], 0, 0x104uLL);
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(unsigned __int16 *)(a1 + 560);
  if ( LOWORD(v33[0]) > (unsigned __int16)v8 )
    goto LABEL_4;
  if ( HIWORD(v33[0]) > (unsigned __int16)v8 )
  {
    LOWORD(v33[0]) = v8 + 1;
LABEL_4:
    *(_QWORD *)&v33[2 * v8 + 2] |= a2;
  }
  sub_1402FF140(v33, &dword_140D06E40, v33, 20LL);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v33) && (unsigned int)KeIsSubsetAffinityEx(v33, v4 + 80) )
  {
    v9 = *(_WORD **)(a1 + 552);
    v10 = *(unsigned __int16 *)(a1 + 560);
    if ( (unsigned __int16)v10 < *v9 )
      v5 = *(_QWORD *)&v9[4 * v10 + 4];
    sub_14020EC24(a1, &v30, v33);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v11 = v30;
  v12 = 0;
  if ( v30 )
  {
    v30 = (_QWORD *)*v30;
    do
    {
      sub_1403405E0(CurrentPrcb, v11 - 27, &v30);
      v11 = v30;
      ++v12;
      if ( v30 )
        v30 = (_QWORD *)*v30;
      if ( (v12 & 0xF) == 0 )
        sub_140340300((char *)CurrentPrcb + 12760);
    }
    while ( v11 );
  }
  sub_140340300((char *)CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) && !*((_BYTE *)CurrentPrcb + 13242) )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) )
      {
        *((_BYTE *)CurrentPrcb + 6) = 1;
      }
      else
      {
        v32[0] = 5;
        *(_OWORD *)&v32[1] = 0LL;
        sub_1402ADD00(v32, 47LL);
      }
    }
  }
  else
  {
    v13 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
      v18 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        v19 = *((_QWORD *)v18 + 4375);
        if ( v19 )
        {
          if ( *((_BYTE *)v18 + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v19 + 24);
            *(_DWORD *)(v19 + 24) = v23 + 1;
            if ( v23 == -1 )
              sub_140418E4C(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v22 = *((_QWORD *)v18 + 4375);
        if ( v22 )
        {
          if ( *((_BYTE *)v18 + 32) <= 1u )
          {
            v24 = *(_DWORD *)(v22 + 24) - 1;
            *(_DWORD *)(v22 + 24) = v24;
            if ( !v24 )
              sub_140418E4C(v18);
          }
        }
        do
          sub_1402F32E0(&v31);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v20 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v17) = 1;
      sub_140345C80(CurrentPrcb, v13, 0LL, v17);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v20;
      if ( *(_BYTE *)(v20 + 388) == 1 )
        *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v20 + 388) = 2;
      *(_BYTE *)(v13 + 643) = 32;
      *(_BYTE *)(v13 + 390) = CurrentIrql;
      sub_1402B9970(CurrentPrcb, v13);
      LOBYTE(v21) = CurrentIrql;
      v14 = (unsigned __int8)sub_140428A30(v13, v20, v21) == 0;
    }
    else
    {
      v14 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
    }
    if ( !v14 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v14 = (*(_DWORD *)(v26 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v26 + 20) &= 0xFFFF0003;
          if ( v14 )
            sub_140418E4C(v25);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v13 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = *((_QWORD *)v27 + 4375);
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v29;
        if ( v14 )
          sub_140418E4C(v27);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v5;
}
