/*
 * XREFs of HalpIommuFlushDmaDomain @ 0x14051AE1C
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x14051AEFC (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFlushDomainTB @ 0x140517FA8 (HalpIommuFlushDomainTB.c)
 */

void __fastcall HalpIommuFlushDmaDomain(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl
  unsigned __int8 CurrentIrql; // bp
  _QWORD *i; // rdi
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
    HalpIommuFlushDomainTB(i[3], (__int64)(i + 4), 1u, (__int64)&v11);
  if ( CurrentIrql != 15 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 32));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && v3 <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
}
