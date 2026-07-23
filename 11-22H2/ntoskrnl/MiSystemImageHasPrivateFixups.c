/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x14033DB80
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiOffsetToProtos @ 0x140288420 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, unsigned int **a2, _DWORD *a3)
{
  int SystemRegionType; // eax
  unsigned __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  unsigned __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  *a2 = 0LL;
  if ( (__int64 *)qword_140C659C0 == &qword_140C659C0 )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType != 12 && SystemRegionType != 1 )
    return 0LL;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared(&dword_140C659E4);
  v9 = (__int64 *)qword_140C659C0;
  v10 = v8;
  while ( v9 != &qword_140C659C0 )
  {
    v11 = v9[2];
    if ( a1 >= v11 && a1 <= v9[3] )
    {
      v12 = (a1 - v11) >> 12;
      if ( ((*(char *)(*(_QWORD *)(v9[5] + 8) + ((unsigned __int64)(unsigned int)v12 >> 3)) >> (v12 & 7)) & 1) != 0 )
      {
        v20 = 0LL;
        v7 = v11 - v9[4];
        v13 = v9[6];
        *a3 = v12;
        *a2 = MiOffsetToProtos(v13, (unsigned __int64)(unsigned int)v12 << 12, &v20);
      }
      break;
    }
    v9 = (__int64 *)*v9;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C659E4);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  return v7;
}
