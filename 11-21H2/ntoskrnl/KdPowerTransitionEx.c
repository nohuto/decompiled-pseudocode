/*
 * XREFs of KdPowerTransitionEx @ 0x1403DA590
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_140565378 @ 0x140565378 (sub_140565378.c)
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     sub_1405D9310 @ 0x1405D9310 (sub_1405D9310.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_1403DA6C0 @ 0x1403DA6C0 (sub_1403DA6C0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v9; // rcx
  unsigned __int8 EffectiveIrql; // bl
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf

  v3 = 0;
  if ( !byte_140C09804 )
  {
    v4 = a1 & 0x40000000 ^ a1;
    if ( (_BYTE)KdDebuggerEnabled || (a1 & 0x40000000) != 0 )
    {
      CurrentIrql = -1;
      v6 = v4 & 0x80000000;
      v7 = v4 & 0x80000000 ^ v4;
      if ( dword_140C097F8 != 1152 )
        v6 = 0;
      if ( a2 )
      {
        if ( KeGetEffectiveIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
        }
        KeAcquireSpinLockAtDpcLevel(&qword_140D31280);
      }
      if ( v7 == 1 )
      {
        sub_1403DA6C0(KeGetCurrentPrcb());
        EffectiveIrql = KeGetEffectiveIrql();
        if ( EffectiveIrql >= 2u )
        {
          LOBYTE(v9) = 1;
          sub_14042A5E0(v9, 0LL);
        }
        v3 = KdPower(v6 | 1, &xmmword_140C31E60);
        if ( EffectiveIrql >= 2u )
          sub_14042A5E0(0LL, 0LL);
      }
      else if ( v7 - 2 > 2 )
      {
        v3 = -1073741811;
      }
      else
      {
        v3 = KdPower(v6 | 4, &xmmword_140C31E60);
      }
      if ( a2 )
      {
        KeReleaseSpinLockFromDpcLevel(&qword_140D31280);
        if ( CurrentIrql != 0xFF )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v12 = KeGetCurrentIrql();
              if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = *((_QWORD *)CurrentPrcb + 4375);
                v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
                *(_DWORD *)(v14 + 20) &= v15;
                if ( v16 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
