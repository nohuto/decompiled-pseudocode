/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x14056E7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall KeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  v2 = OldIrql;
  if ( (*((_DWORD *)KeGetCurrentPrcb() + 3311) & 0x10000) != 0 )
  {
    KeReleaseSpinLockFromDpcLevel(SpinLock);
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
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(SpinLock);
  }
}
