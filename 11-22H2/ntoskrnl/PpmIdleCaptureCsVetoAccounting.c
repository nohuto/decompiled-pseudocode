/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x140584360
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14058506C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140594C0C (PopDiagTraceSleepStudyBlocker.c)
 */

void __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v3; // al
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned __int64 i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  char v18; // [rsp+28h] [rbp-49h] BYREF
  int v19; // [rsp+2Ch] [rbp-45h] BYREF
  __int64 v20; // [rsp+30h] [rbp-41h] BYREF
  __int128 v21; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v22[7]; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  __int128 *v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 v27; // [rsp+98h] [rbp+27h]
  __int64 v28; // [rsp+A0h] [rbp+2Fh]
  __int64 *v29; // [rsp+A8h] [rbp+37h]
  __int64 v30; // [rsp+B0h] [rbp+3Fh]

  v20 = PopWnfCsEnterScenarioId;
  v2 = a2;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = 0;
    for ( i = v3; v5 < *(_DWORD *)PpmPlatformStates; ++v5 )
    {
      v7 = 448LL * v5;
      v8 = v7 + v4 + 80;
      LOBYTE(v7) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(v8, v7, 0LL);
      v4 = PpmPlatformStates;
    }
    if ( (_DWORD)v2 != -1 )
    {
      v9 = 0;
      v18 = v20;
      WORD2(v21) = v2;
      v22[0] = &v18;
      v22[2] = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v10 = v4 + 448 * v2;
      LODWORD(v21) = -1429427508;
      v22[1] = 1LL;
      v22[3] = 16LL;
      v25 = &v21;
      v26 = 16LL;
      if ( *(_DWORD *)(v10 + 108) )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + 112) + ((unsigned __int64)v9 << 6);
          if ( *(_QWORD *)(v11 + 56) )
          {
            DWORD2(v21) = *(_DWORD *)(v11 + 16);
            v19 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v9 + 8) >> 1;
            v22[4] = &v19;
            v22[5] = 4LL;
            v12 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v9 + 8);
            v22[6] = *((_QWORD *)PpmIdleVetoList + 3 * v9 + 3);
            v29 = &v20;
            v23 = v12;
            v24 = 0;
            v27 = v11 + 56;
            v28 = 8LL;
            v30 = 8LL;
            PopDiagTraceSleepStudyBlocker(v12, v22);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v10 + 108) );
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)i <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(i);
  }
}
