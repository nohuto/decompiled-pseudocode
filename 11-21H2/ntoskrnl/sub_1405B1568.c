/*
 * XREFs of sub_1405B1568 @ 0x1405B1568
 * Callers:
 *     sub_14023A710 @ 0x14023A710 (sub_14023A710.c)
 * Callees:
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B1530 @ 0x1405B1530 (sub_1405B1530.c)
 */

void __fastcall sub_1405B1568(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  volatile LONG *v6; // r10
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  int v10; // esi
  int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  __int64 v26; // r8
  int v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp+10h]
  unsigned __int64 v30; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 0LL;
    v30 = 0LL;
    v5 = 0LL;
    v29 = 0LL;
    if ( v3 )
    {
      v6 = (volatile LONG *)(a1 + 16);
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        ExAcquireSpinLockSharedAtDpcLevel(v6);
        v9 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( v9 )
            v9 ^= a1;
          else
            v9 = 0LL;
        }
        v10 = *(_BYTE *)(a1 + 8) & 1;
        while ( v9 )
        {
          v11 = sub_140248F48(&v30, v9);
          if ( !v11 )
            goto LABEL_23;
          if ( v11 >= 0 )
          {
            v12 = *(_QWORD *)(v9 + 8);
          }
          else
          {
            v12 = *(_QWORD *)v9;
            v1 = v9;
          }
          if ( v10 && v12 )
            v9 ^= v12;
          else
            v9 = v12;
        }
        v9 = v1;
LABEL_23:
        v1 = 0LL;
        while ( 1 )
        {
          if ( !v9 )
          {
            v15 = v29;
            goto LABEL_35;
          }
          v5 = *(unsigned int *)(v9 + 136);
          if ( *(_DWORD *)(v9 + 136) )
          {
            if ( v5 + (unsigned __int64)*(unsigned int *)(v9 + 132) >= 0x200 && (*(_DWORD *)(v9 + 140) & 1) == 0 )
              break;
          }
          v13 = *(_QWORD **)(v9 + 8);
          v14 = v9;
          if ( v13 )
          {
            do
            {
              v9 = (unsigned __int64)v13;
              v13 = (_QWORD *)*v13;
            }
            while ( v13 );
          }
          else
          {
            while ( 1 )
            {
              v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v9 || *(_QWORD *)v9 == v14 )
                break;
              v14 = v9;
            }
          }
        }
        v4 = 48LL * *(_QWORD *)(v9 + 24) - 0x220000000000LL;
        v15 = 48LL * *(_QWORD *)(v9 + 32) - 0x220000000000LL;
        v29 = v15;
LABEL_35:
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
        if ( !v9 )
          break;
        if ( v5 )
        {
          while ( 1 )
          {
            if ( v4 > v15 )
              goto LABEL_52;
            v28 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v28, v16, v17, v18);
              while ( *(__int64 *)(v4 + 24) < 0 );
            }
            if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4) > qword_140C50840
              || (*(_QWORD *)(16 * ((__int64)(v4 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
              || !sub_140277C50(v4) )
            {
              break;
            }
            if ( (*(_BYTE *)(v4 + 34) & 7) == 2
              && !*(_WORD *)(v4 + 32)
              && ((*(_QWORD *)(v4 + 40) >> 20) & 0x8000000000LL) != 0 )
            {
              sub_140326870(v4, 0);
              sub_1403941B0(v4, 0);
              --v5;
            }
            else if ( !sub_1405B1530(v4) )
            {
              break;
            }
LABEL_51:
            _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v4 += 48LL;
            if ( !v5 )
              goto LABEL_52;
          }
          v5 = 0LL;
          goto LABEL_51;
        }
LABEL_52:
        v30 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x220000000000LL) >> 4) + 1;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = *((_QWORD *)CurrentPrcb + 4375);
              v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v22;
              if ( v23 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v6 = (volatile LONG *)(a1 + 16);
        CurrentIrql = 17;
      }
      while ( *(_QWORD *)(a1 + 64) );
      if ( CurrentIrql != 17 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = *((_QWORD *)v25 + 4375);
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v23 )
                sub_140418E4C((__int64)v25);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
