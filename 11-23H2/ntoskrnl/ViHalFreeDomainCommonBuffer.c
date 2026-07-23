/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x140AC9204
 * Callers:
 *     VfFreeCommonBuffer @ 0x140AC62A0 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  void *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int64 **v13; // rdx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C36990);
  v5 = ViDomainCommonBufferList;
  if ( (__int64 *)ViDomainCommonBufferList != &ViDomainCommonBufferList )
  {
    while ( 1 )
    {
      v3 = (void *)v5;
      v6 = *(__int64 **)v5;
      if ( *(_QWORD *)(v5 + 16) == *a1 )
        break;
      v5 = *(_QWORD *)v5;
      if ( v6 == &ViDomainCommonBufferList )
        goto LABEL_4;
    }
    v2 = 1;
    v13 = *(__int64 ***)(v5 + 8);
    if ( v6[1] != v5 || *v13 != (__int64 *)v5 )
      __fastfail(3u);
    *v13 = v6;
    v6[1] = (__int64)v13;
  }
LABEL_4:
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36990);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
