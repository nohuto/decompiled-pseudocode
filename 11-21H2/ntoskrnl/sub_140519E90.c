/*
 * XREFs of sub_140519E90 @ 0x140519E90
 * Callers:
 *     sub_14051295C @ 0x14051295C (sub_14051295C.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 */

char __fastcall sub_140519E90(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r10
  KSPIN_LOCK *v6; // r14
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r8
  struct _DMA_ADAPTER *v10; // rbp
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  char result; // al
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v19; // r8
  int v20; // eax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 372);
  *(_DWORD *)(a1 + 384) = 0;
  v3 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v3 + 1)) - 1) & 0xFFFFFFFC;
  }
  v6 = (KSPIN_LOCK *)(v1 + 168);
  KeAcquireSpinLockAtDpcLevel(v6);
  v7 = (_QWORD *)(v2 + 144);
  v8 = *(_QWORD **)(v2 + 144);
  if ( v8 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v9 = *v8;
    if ( (_QWORD *)v8[1] != v7 || *(_QWORD **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = v9;
    v10 = (struct _DMA_ADAPTER *)(v8 - 25);
    *(_QWORD *)(v9 + 8) = v7;
    ++*((_DWORD *)v8 + 104);
    *((_DWORD *)v8 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v8 - 25;
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = *((_QWORD *)v12 + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)v12);
        }
      }
    }
    __writecr8(CurrentIrql);
    return sub_140517830(v10, 1, 0LL);
  }
  return result;
}
