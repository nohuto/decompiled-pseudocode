/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x140AD74AC
 * Callers:
 *     ViFaultsAddAllApps @ 0x140AD7354 (ViFaultsAddAllApps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlUpcaseUnicodeString @ 0x140774000 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     ViFaultsIsAppTarget @ 0x140AD7A00 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, __int64 a2)
{
  size_t v2; // rdi
  unsigned int v4; // ebp
  __int64 Pool2; // rax
  UNICODE_STRING *v6; // rsi
  unsigned __int64 v7; // rbx
  UNICODE_STRING **v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = 2 * a2;
  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 2 * a2 + 34, 0x41466656u);
  v6 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 32), Src, v2);
    *(unsigned __int16 *)((char *)&v6[2].Length + v2) = 0;
    RtlInitUnicodeString(v6 + 1, &v6[2].Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v7 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = (UNICODE_STRING **)qword_140C36CA8;
      if ( *(PVOID **)qword_140C36CA8 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v8;
      *v8 = v6;
      qword_140C36CA8 = (__int64)v6;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
