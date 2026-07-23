/*
 * XREFs of sub_140591F50 @ 0x140591F50
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140591EB4 @ 0x140591EB4 (sub_140591EB4.c)
 */

__int64 __fastcall sub_140591F50(unsigned __int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 i; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  int v18; // eax
  __int64 v19; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  __int64 v24; // r8

  for ( i = *a2; (*a2 & 1) != 0; i = *a2 )
  {
    v7 = (i >> 12) & 0xFFFFFFFFFFLL;
    if ( v7 > qword_140C50840 || (*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      break;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)sub_1402F2700(v8);
    if ( (*a2 & 1) == 0 )
      goto LABEL_27;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v7 )
    {
      if ( (unsigned int)sub_140274508(48 * v7 - 0x220000000000LL, 0LL, v10) )
      {
        if ( (a3 & 4) == 0 || !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
          *(_BYTE *)(v8 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v19 = *((_QWORD *)CurrentPrcb + 4375);
              v15 = (v18 & *(_DWORD *)(v19 + 20)) == 0;
              *(_DWORD *)(v19 + 20) &= v18;
              if ( v15 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        return sub_140591EB4(a1, v7);
      }
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v24 = *((_QWORD *)v22 + 4375);
            v15 = (v23 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v23;
            if ( v15 )
              sub_140418E4C((__int64)v22);
          }
        }
      }
      __writecr8(v9);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = *((_QWORD *)v12 + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)v12);
        }
      }
    }
    __writecr8(v9);
  }
  return 0LL;
}
