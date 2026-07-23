/*
 * XREFs of sub_14039630C @ 0x14039630C
 * Callers:
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_14039630C(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  bool v3; // di
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v3 = (SpinLock[1] & 8) != 0;
  v4 = v2;
  KeReleaseSpinLockFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
