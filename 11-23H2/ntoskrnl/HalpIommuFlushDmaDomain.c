/*
 * XREFs of HalpIommuFlushDmaDomain @ 0x1405184B0
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x1405185E4 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFlushDomainTB @ 0x14045D4AA (HalpIommuFlushDomainTB.c)
 *     IommuFlushTb @ 0x1405232A0 (IommuFlushTb.c)
 */

void __fastcall HalpIommuFlushDmaDomain(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *j; // r14
  volatile signed __int64 *v6; // rcx
  _QWORD *i; // r14
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( CurrentIrql != 15 )
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
      IommuFlushTb(i[3], 1LL, &v13);
    if ( CurrentIrql != 15 )
    {
      v6 = (volatile signed __int64 *)(a1 + 88);
LABEL_16:
      KxReleaseSpinLock(v6);
      if ( (_DWORD)KiIrqlFlags )
      {
        v8 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v8 <= 0xFu && v3 <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v3);
    }
  }
  else
  {
    if ( CurrentIrql != 15 )
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
    for ( j = *(_QWORD **)(a1 + 16); j != (_QWORD *)(a1 + 16); j = (_QWORD *)*j )
      HalpIommuFlushDomainTB(j[3], (__int64)(j + 4), 1u, (__int64)&v13);
    if ( CurrentIrql != 15 )
    {
      v6 = (volatile signed __int64 *)(a1 + 32);
      goto LABEL_16;
    }
  }
}
