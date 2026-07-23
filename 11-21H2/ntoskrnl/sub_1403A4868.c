/*
 * XREFs of sub_1403A4868 @ 0x1403A4868
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140397A80 (PoFxNotifySurprisePowerOn.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_14080D7EC @ 0x14080D7EC (sub_14080D7EC.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403A4868(__int64 a1, char a2)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  v4 = 0LL;
  if ( a1 )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 80);
    v6 = v5;
    if ( !a2
      || (_m_prefetchw((const void *)(a1 + 296)), (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 4) != 0) )
    {
      if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 240), 0LL, &File, 1u, 0x20u) < 0 )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return v4;
}
