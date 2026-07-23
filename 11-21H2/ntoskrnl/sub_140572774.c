/*
 * XREFs of sub_140572774 @ 0x140572774
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
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
 *     sub_1403D3080 @ 0x1403D3080 (sub_1403D3080.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

char __fastcall sub_140572774(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char v5; // si
  _QWORD *v6; // rdi
  char result; // al
  ULONG_PTR v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int v19; // r8d
  bool v20; // zf
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  int v26[8]; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+38h] BYREF

  v28 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  sub_1403D3080(a1, &v28);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = v28;
  if ( v28 )
  {
    v28 = (_QWORD *)*v28;
    do
    {
      sub_1403405E0((__int64)CurrentPrcb, (ULONG_PTR)(v6 - 27), (__int64)&v28);
      v6 = v28;
      ++v5;
      if ( v28 )
        v28 = (_QWORD *)*v28;
      if ( (v5 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
    }
    while ( v6 );
  }
  result = sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
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
          return sub_1402ADD00(v26, 0x2Fu);
        }
      }
    }
  }
  else
  {
    v8 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
      v12 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 4375);
        if ( v13 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v14 = *(_DWORD *)(v13 + 24);
            *(_DWORD *)(v13 + 24) = v14 + 1;
            if ( v14 == -1 )
              sub_140418E4C((__int64)v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v15 = *((_QWORD *)v12 + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v16 = *(_DWORD *)(v15 + 24) - 1;
            *(_DWORD *)(v15 + 24) = v16;
            if ( !v16 )
              sub_140418E4C((__int64)v12);
          }
        }
        do
          sub_1402F32E0(&v27, v9, v10, v11);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v17 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v11) = 1;
      sub_140345C80((__int64)CurrentPrcb, v8, 0LL, v11);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v17;
      if ( *(_BYTE *)(v17 + 388) == 1 )
      {
        v18 = (unsigned int)(*(_DWORD *)(v17 + 132) - *(_DWORD *)(v17 + 436));
        *(_DWORD *)(v17 + 132) = v18 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v17 + 388) = 2;
      *(_BYTE *)(v8 + 643) = 32;
      *(_BYTE *)(v8 + 390) = CurrentIrql;
      sub_1402B9970((__int64)CurrentPrcb, v8, v18);
      LOBYTE(v19) = CurrentIrql;
      v20 = (unsigned __int8)sub_140428A30(v8, v17, v19) == 0;
    }
    else
    {
      v20 = (*(_DWORD *)(v8 + 116) & 0x40) == 0;
    }
    if ( !v20 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v20 = (*(_DWORD *)(v22 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v22 + 20) &= 0xFFFF0003;
          if ( v20 )
            sub_140418E4C((__int64)v21);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v8 + 116) &= ~0x40u;
      sub_1402F1DC0(0, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v20 )
          sub_140418E4C((__int64)v23);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
