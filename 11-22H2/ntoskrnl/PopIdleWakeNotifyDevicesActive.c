/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x14059D92C
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x14058B3EC (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // esi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  int v5; // ecx
  LARGE_INTEGER v6; // rcx
  LONGLONG v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    v5 = *(_DWORD *)PopIdleWakeContext;
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 && (*(_DWORD *)PopIdleWakeContext & 1) != v1 )
    {
      *(_DWORD *)PopIdleWakeContext = v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1;
      if ( (((unsigned __int8)v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1) & 2) == 0 )
      {
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v6 = PerformanceCounter;
        v7 = PerformanceCounter.QuadPart - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6.QuadPart;
      }
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
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
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
}
