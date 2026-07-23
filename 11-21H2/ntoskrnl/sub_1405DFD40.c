/*
 * XREFs of sub_1405DFD40 @ 0x1405DFD40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405DFD40(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // edx
  bool v8; // zf

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    if ( (SpinLock[1] & 3) == 3 )
      SpinLock[3] = MEMORY[0xFFFFF78000000008];
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v7;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
