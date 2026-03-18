/*
 * XREFs of MiLockOwnedProtoPage @ 0x140273EE0
 * Callers:
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiRelockProtoPoolPage @ 0x14027FE9C (MiRelockProtoPoolPage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v2; // rsi
  char v3; // al
  unsigned __int64 i; // rbp
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v2 = (_BYTE *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  v3 = *(_BYTE *)(a1 + 34);
  for ( i = a2; (v3 & 0x20) != 0; v3 = *(_BYTE *)(a1 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)i != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(i);
    }
    v7 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) = v3 | 0x20;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 && (*v2 & 0x20) == 0 )
    result = MiWriteValidPteVolatile(v2, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
