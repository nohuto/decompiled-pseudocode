/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x1405C94E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x1405C92A0 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x1405DA5B4 (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // esi
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  int FirstSetLeftAffinity; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  char v18[16]; // [rsp+20h] [rbp-148h] BYREF
  _DWORD v19[68]; // [rsp+30h] [rbp-138h] BYREF

  v18[0] = 0;
  memset(&v19[2], 0, 0x100uLL);
  if ( !PpmPlatformStates )
    return (unsigned int)-1073741637;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 >= *(_DWORD *)PpmPlatformStates )
    return (unsigned int)-1073741811;
  v4 = PpmPlatformStates + 448 * v3;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 80, v18);
  if ( updated < 0 )
    goto LABEL_21;
  LOBYTE(v6) = *(_BYTE *)(a1 + 12);
  PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6);
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( !v18[0] )
      goto LABEL_21;
    if ( *(_BYTE *)(a1 + 12) )
      PopDeepSleepSetDisengageReason(9u);
    else
      PopDeepSleepClearDisengageReason(9u);
  }
  if ( v18[0] && !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v4 + 128), KeGetCurrentPrcb()->Number) )
  {
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    v19[0] = 2097153;
    memset(&v19[1], 0, 0x104uLL);
    FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((unsigned __int16 *)(v4 + 128));
    KeAddProcessorAffinityEx((unsigned __int16 *)v19, FirstSetLeftAffinity);
    PopExecuteOnTargetProcessors((__int64)v19, (__int64)HalSystemVectorDispatchEntry, 0LL, 0LL);
    return (unsigned int)updated;
  }
LABEL_21:
  KxReleaseSpinLock(&PpmIdleVetoLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v5);
  return (unsigned int)updated;
}
