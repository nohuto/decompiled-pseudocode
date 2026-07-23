/*
 * XREFs of sub_140565378 @ 0x140565378
 * Callers:
 *     KdDisableDebugger @ 0x140565360 (KdDisableDebugger.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A746D0 @ 0x140A746D0 (sub_140A746D0.c)
 *     sub_140A74CDC @ 0x140A74CDC (sub_140A74CDC.c)
 */

__int64 sub_140565378()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r9
  int v3; // edi
  unsigned __int8 v4; // al
  struct _KPRCB *v5; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax

  if ( byte_140C09804 )
    return 3221226324LL;
  if ( byte_140C44528 )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140D31280);
  if ( dword_140D01940 )
    goto LABEL_21;
  byte_140D01944 = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled || (v3 = sub_140A746D0(), v3 >= 0) )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      sub_140A74CDC();
      MEMORY[0xFFFFF780000002D4] = 0;
      dword_140C54ED8 = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(1073741828, 0);
    }
LABEL_21:
    ++dword_140D01940;
    KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    v3 = 0;
    goto LABEL_29;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        v5 = KeGetCurrentPrcb();
        v6 = *((_QWORD *)v5 + 4375);
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)v5);
      }
    }
  }
LABEL_29:
  __writecr8(CurrentIrql);
  return (unsigned int)v3;
}
