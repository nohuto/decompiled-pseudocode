/*
 * XREFs of sub_1405E0FA0 @ 0x1405E0FA0
 * Callers:
 *     sub_140363780 @ 0x140363780 (sub_140363780.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_14036381C @ 0x14036381C (sub_14036381C.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140584510 @ 0x140584510 (sub_140584510.c)
 */

signed __int64 __fastcall sub_1405E0FA0(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r14
  signed __int64 v5; // rbp
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  bool v9; // zf
  signed __int64 Count; // rbx
  int v11; // edi
  int v12; // eax
  struct _EX_RUNDOWN_REF v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx

  v2 = (volatile LONG *)(a1 + 1648);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1648));
  v7 = a1 + 1656;
  v8 = v6;
  v9 = (*(_BYTE *)(a1 + 1664) & 1) == 0;
  Count = *(_QWORD *)(a1 + 1656);
  if ( !v9 && Count )
    Count ^= v7;
  v11 = *(_BYTE *)(v7 + 8) & 1;
  if ( Count )
  {
    do
    {
      v12 = sub_140584510(a2, Count);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13.Count = *(_QWORD *)(Count + 8);
      }
      else
      {
        v13.Count = *(_QWORD *)Count;
      }
      if ( v11 && v13.Count )
        Count ^= v13.Count;
      else
        Count = v13.Count;
    }
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      sub_14036381C((struct _EX_RUNDOWN_REF *)Count);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v9 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
