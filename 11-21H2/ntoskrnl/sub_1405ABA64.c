/*
 * XREFs of sub_1405ABA64 @ 0x1405ABA64
 * Callers:
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405ABA64(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v13; // zf
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  __int64 result; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 44) = 0;
  v4 = (_QWORD *)(a1 + 48);
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    a3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
    v5 = &v4[a2 * a3];
    do
    {
      --a3;
      v5 -= a2;
      a4 = 1LL;
      for ( *v5 = v4[a3]; a4 < a2; ++a4 )
        v5[a4] = v5[a4 - 1] + 1LL;
    }
    while ( a3 );
    v6 = a2 * *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v6;
  }
  v7 = 0LL;
  v8 = (unsigned __int64)v6 >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a3 + 20) = a2;
  }
  for ( ; v8; --v8 )
  {
    v10 = 48LL * *v4 - 0x220000000000LL;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v20, a2, a3, a4);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v10 + 24) & 0x8000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a4 = *((_QWORD *)CurrentPrcb + 4375);
            a2 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v13 = ((unsigned int)a2 & *(_DWORD *)(a4 + 20)) == 0;
            a3 = (unsigned int)a2 & *(_DWORD *)(a4 + 20);
            *(_DWORD *)(a4 + 20) = a3;
            if ( v13 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v14 <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a2 = (-1LL << (v14 + 1)) & 4;
        a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a4 + 20) = a3;
      }
    }
    ++v4;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v13 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
