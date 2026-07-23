/*
 * XREFs of sub_1405E29C8 @ 0x1405E29C8
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1408824D0 @ 0x1408824D0 (sub_1408824D0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 */

bool __fastcall sub_1405E29C8(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // edx
  bool v11; // zf
  __int64 v13; // rdx
  unsigned int i; // edi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 160) + 48LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(a1 + 88)) )
  {
    if ( *(_DWORD *)(a1 + 4) >= a2 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v7 = KeGetCurrentIrql();
          if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 1;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  }
  v13 = *(unsigned int *)(a1 + 156);
  v22 = *(_DWORD *)(a1 + 152) - v13 - *(_DWORD *)(a1 + 4);
  if ( v22 )
  {
    sub_14058A110(*(ULONG_PTR ***)(a1 + 8), (__int64)&v22, (__int64 *)(v3 + 8 * v13));
    *(_DWORD *)(a1 + 156) += v22;
  }
  i = *(_DWORD *)(a1 + 4);
  if ( i < 8 )
  {
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
      _mm_pause();
    for ( i = *(_DWORD *)(a1 + 4); i < 8; *(_DWORD *)(a1 + 4) = i )
    {
      v15 = *(_DWORD *)(a1 + 156);
      if ( !v15 )
        break;
      v16 = *(unsigned int *)(a1 + 4);
      v17 = (unsigned int)(v15 - 1);
      *(_DWORD *)(a1 + 156) = v17;
      *(_QWORD *)(a1 + 8 * v16 + 24) = *(_QWORD *)(v3 + 8 * v17);
      i = *(_DWORD *)(a1 + 4) + 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v11 )
          sub_140418E4C((__int64)v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return i >= a2;
}
