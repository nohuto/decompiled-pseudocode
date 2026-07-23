/*
 * XREFs of sub_14028CF90 @ 0x14028CF90
 * Callers:
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14028CF90(__int64 a1, int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r13
  char v4; // si
  _BOOL8 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  volatile signed __int64 v12; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v15; // r10
  __int64 v16; // r9
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  signed __int64 v25; // [rsp+50h] [rbp-B8h]
  signed __int64 v26; // [rsp+50h] [rbp-B8h]
  volatile signed __int64 v27; // [rsp+80h] [rbp-88h]
  signed __int64 v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+158h] [rbp+50h] BYREF
  int v30; // [rsp+160h] [rbp+58h]
  unsigned __int64 v31; // [rsp+168h] [rbp+60h]

  v30 = a2;
  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  v4 = 0;
  v5 = (*(_BYTE *)(v3 + 34) & 7) != 6;
  v6 = v3 + 48 * qword_14001C780[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= (-1 << (CurrentIrql + 1)) & 4;
    v2 = v30;
  }
  if ( v3 < v6 )
  {
    v31 = 0xFFFFFF0000000000uLL;
    v8 = (volatile signed __int64 *)(v3 + 40);
    do
    {
      v29 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8 - 4, 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v29);
          while ( *((__int64 *)v8 - 2) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v8 - 4, 0x3FuLL) );
        v2 = v30;
      }
      if ( v5 )
      {
        sub_14033C33C(v8 - 5, 0LL, 1LL);
        sub_1402393AC((__int64)(v8 - 5), 0);
        v2 = v30;
        *((_QWORD *)v8 - 2) = *(v8 - 2) & 0xC000000000000000uLL | 1;
        *((_WORD *)v8 - 4) = 2;
        if ( v8 - 5 != (volatile signed __int64 *)v3 )
          *((_BYTE *)v8 - 6) = *((_BYTE *)v8 - 6) & 0xF8 | 6;
      }
      if ( *(__int64 *)v8 < 0 )
        *v8 &= ~0x8000000000000000uLL;
      v9 = *v8;
      *((_BYTE *)v8 - 5) &= 0xF8u;
      v25 = v9;
      v10 = _InterlockedCompareExchange64(v8, v9 & 0x8FFFFFFFFFFFFFFFuLL, v9);
      if ( v25 != v10 )
      {
        do
        {
          v26 = v10;
          v10 = _InterlockedCompareExchange64(v8, v10 & 0x8FFFFFFFFFFFFFFFuLL, v10);
        }
        while ( v26 != v10 );
      }
      *((_QWORD *)v8 - 5) = 0LL;
      *((_QWORD *)v8 - 4) = 0LL;
      *((_QWORD *)v8 - 3) = 0LL;
      v27 = *v8;
      v11 = _InterlockedCompareExchange64(v8, v31 & *v8, *v8);
      if ( v27 != v11 )
      {
        do
        {
          v28 = v11;
          v11 = _InterlockedCompareExchange64(v8, v31 & v11, v11);
        }
        while ( v28 != v11 );
      }
      v12 = *v8;
      *((_QWORD *)v8 - 2) &= ~0x4000000000000000uLL;
      *((_QWORD *)v8 - 4) = 0LL;
      *v8 = v12 | 0x10000000000LL;
      if ( v8 - 5 == (volatile signed __int64 *)v3 )
        *((_BYTE *)v8 - 4) ^= (*((_BYTE *)v8 - 4) ^ ~v2) & 3;
      else
        *((_BYTE *)v8 - 4) &= 0xFCu;
      *((_BYTE *)v8 - 6) &= ~0x10u;
      _InterlockedAnd64(v8 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v4 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v17 = KeGetCurrentPrcb();
            v18 = *((_QWORD *)v17 + 4375);
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C(v17);
          }
        }
        __writecr8(CurrentIrql);
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
        {
          v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v16 + 20) |= (-1 << (v15 + 1)) & 4;
        }
        CurrentIrql = v15;
      }
      v2 = v30;
      v8 += 6;
      ++v4;
    }
    while ( (unsigned __int64)(v8 - 5) < v6 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = *((_QWORD *)v22 + 4375);
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v20 )
          sub_140418E4C(v22);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
