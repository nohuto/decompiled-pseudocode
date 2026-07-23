/*
 * XREFs of sub_1405198A0 @ 0x1405198A0
 * Callers:
 *     sub_1405175B0 @ 0x1405175B0 (sub_1405175B0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405198A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned __int8 CurrentIrql; // bl
  char v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  KSPIN_LOCK *v8; // rsi
  unsigned int v9; // r15d
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v7 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
    }
    v8 = (KSPIN_LOCK *)(a1 + 168);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 168));
    v5 = 1;
  }
  v9 = sub_14042A5E0(*(_QWORD *)(a1 + 64), (unsigned int)v2);
  if ( !v9 )
    *(_BYTE *)(160 * v2 + *(_QWORD *)(a1 + 56) + 6) = 1;
  if ( v5 )
  {
    KeReleaseSpinLockFromDpcLevel(v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v9;
}
