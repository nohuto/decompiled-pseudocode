/*
 * XREFs of sub_1405655BC @ 0x1405655BC
 * Callers:
 *     KdEnableDebugger @ 0x140565580 (KdEnableDebugger.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140A74B1C @ 0x140A74B1C (sub_140A74B1C.c)
 */

__int64 __fastcall sub_1405655BC(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax

  CurrentIrql = 0;
  if ( byte_140C09804 )
    return 3221226324LL;
  if ( byte_140C44528 )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeAcquireSpinLockAtDpcLevel(&qword_140D31280);
  }
  v5 = dword_140D01940;
  if ( dword_140D01940 )
  {
    --dword_140D01940;
    if ( v5 == 1 && byte_140D01944 )
    {
      if ( !a1 )
      {
        byte_140C22280 = 1;
        sub_140A70470(0LL, 0LL);
        sub_140A74B1C();
        byte_140C22280 = 0;
        return 0LL;
      }
      KdPowerTransitionEx(1073741825, 0);
      dword_140C54ED8 = 1;
      LOBYTE(KdDebuggerEnabled) = 1;
      MEMORY[0xFFFFF780000002D4] = 1;
      sub_140A74B1C();
    }
    else if ( !a1 )
    {
      return 0LL;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( !a1 )
  {
    sub_140A70470(0LL, 0LL);
    return 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = *((_QWORD *)v7 + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)v7);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
