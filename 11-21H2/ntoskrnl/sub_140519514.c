/*
 * XREFs of sub_140519514 @ 0x140519514
 * Callers:
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140519514(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  char v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // bl
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax

  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_17;
  v9 = *(unsigned __int8 *)(a1 + 176);
  v10 = KeGetCurrentIrql();
  __writecr8(v9);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v10 <= 0xFu && (unsigned __int8)(v9 - 2) <= 0xDu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1LL << (v10 + 1)) & ((1LL << ((unsigned __int8)v9 + 1)) - 1) & 0xFFFFFFFC;
  }
  CurrentIrql = v10;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
  v12 = *(_QWORD *)(a2 + 352);
  v8 = 1;
  if ( v12 && (*(_DWORD *)(v12 + 12) & 1) != 0 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 168));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && v10 <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    return 3221225760LL;
  }
  else
  {
LABEL_17:
    v19 = *(_QWORD *)(a1 + 56) + 160LL * *(unsigned int *)(a2 + 372);
    *(_QWORD *)(v19 + 8) = a3;
    *(_QWORD *)(v19 + 16) = a4;
    sub_14042A5E0(*(_QWORD *)(a1 + 64), *(unsigned int *)(a2 + 372));
    if ( v8 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 168));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = *((_QWORD *)v21 + 4375);
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v17 )
              sub_140418E4C((__int64)v21);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
