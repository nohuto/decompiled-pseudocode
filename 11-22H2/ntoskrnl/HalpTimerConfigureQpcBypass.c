/*
 * XREFs of HalpTimerConfigureQpcBypass @ 0x1403B2A74
 * Callers:
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     HalpFindTimer @ 0x14037B658 (HalpFindTimer.c)
 *     HalpGetCpuInfo @ 0x140380C80 (HalpGetCpuInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     NtQuerySystemInformation @ 0x140726800 (NtQuerySystemInformation.c)
 */

__int64 HalpTimerConfigureQpcBypass()
{
  char v0; // bl
  NTSTATUS v1; // esi
  ULONG_PTR *Timer; // rax
  unsigned __int64 v3; // rdi
  int v4; // eax
  DWORD v5; // r8d
  __int16 *v6; // rdx
  RTL_SYSTEM_GLOBAL_DATA_ID v7; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 SystemInformation[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+38h] BYREF
  char Buffer; // [rsp+88h] [rbp+40h] BYREF
  char v16; // [rsp+90h] [rbp+48h] BYREF
  __int16 v17; // [rsp+98h] [rbp+50h] BYREF

  v14 = 0;
  SystemInformation[0] = 0LL;
  v17 = 0;
  Buffer = 0;
  v0 = 0;
  v1 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, SystemInformation, 8u, 0LL);
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    if ( (Timer[28] & 0x1000000) != 0 )
    {
      v0 = 0x80;
    }
    else if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v14) )
    {
      if ( v14 == 2 )
      {
        v0 = 32;
      }
      else if ( v14 == 1 )
      {
        v0 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  v4 = *(_DWORD *)(HalpPerformanceCounter + 228);
  if ( (v4 == 5 || v4 == 7) && v1 >= 0 && SystemInformation[0] )
  {
    v16 = v0 | 3;
    RtlSetSystemGlobalData(GlobalDataIdQpcShift, &Buffer, 1u);
    _InterlockedOr(v12, 0);
    v5 = 1;
    v6 = (__int16 *)&v16;
    v7 = GlobalDataIdQpcBypassEnabled;
  }
  else
  {
    v5 = 2;
    v6 = &v17;
    v7 = GlobalDataIdQpcData;
  }
  RtlSetSystemGlobalData(v7, v6, v5);
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpTscFallbackLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
