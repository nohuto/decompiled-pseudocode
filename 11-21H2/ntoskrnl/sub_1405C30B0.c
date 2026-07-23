/*
 * XREFs of sub_1405C30B0 @ 0x1405C30B0
 * Callers:
 *     sub_14028CEE0 @ 0x14028CEE0 (sub_14028CEE0.c)
 * Callees:
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C30B0(ULONG_PTR a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  int v6; // eax
  bool v7; // zf
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r9
  int v18; // eax
  unsigned __int64 v19; // rbp
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  int v22; // edx
  __int64 v23; // r9

  if ( *(_WORD *)(a1 + 32) != 2 )
  {
    v2 = (unsigned __int8)sub_1402F2700(a1);
    if ( *(_WORD *)(a1 + 32) != 2 )
    {
      *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v5 = *((_QWORD *)CurrentPrcb + 4375);
            v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
            v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
            *(_DWORD *)(v5 + 20) &= v6;
            if ( v7 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v2);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v7 )
            sub_140418E4C((__int64)v10);
        }
      }
    }
    __writecr8(v2);
  }
  v13 = *(_QWORD *)(a1 + 40);
  if ( ((v13 >> 60) & 7) == 3 )
  {
    v14 = (unsigned __int8)sub_1402F2700(a1);
    sub_14023CC50(a1, 12);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = *((_QWORD *)v16 + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v7 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v7 )
            sub_140418E4C((__int64)v16);
        }
      }
    }
    __writecr8(v14);
    v13 = *(_QWORD *)(a1 + 40);
  }
  if ( ((v13 >> 60) & 7) == 1 )
  {
    v19 = (unsigned __int8)sub_1402F2700(a1);
    sub_14033C300(a1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v23 = *((_QWORD *)v21 + 4375);
          v7 = (v22 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v22;
          if ( v7 )
            sub_140418E4C((__int64)v21);
        }
      }
    }
    __writecr8(v19);
  }
  return 1LL;
}
