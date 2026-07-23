/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x140A9C3C0
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x140A9AF00 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A9B8E4 (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeSaveSupervisorState @ 0x14020E4AC (KeSaveSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x14020E510 (KeRestoreSupervisorState.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeResumeClockTimerSafe @ 0x14056FA24 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056FB70 (KeSuspendClockTimerSafe.c)
 *     IopLiveDumpBufferDumpData @ 0x140A9A420 (IopLiveDumpBufferDumpData.c)
 */

void __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  volatile signed __int32 *v15; // rdx
  __int16 v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    KeYieldProcessorEx(&v17);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = v4 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 && *(_BYTE *)(a2 + 9) )
              {
                KeRestoreSupervisorState(
                  (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                  MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( SaveSupervisorState )
            {
              KeSaveSupervisorState(
                (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v13 = *SchedulerAssist;
              do
              {
                v14 = v13;
                v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
              }
              while ( v14 != v13 );
              if ( (v13 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
        else
        {
          KeResumeClockTimerSafe();
        }
      }
      else
      {
        IopLiveDumpBufferDumpData((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      KeSuspendClockTimerSafe();
    }
  }
  else
  {
    _disable();
    v15 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v15 )
      _InterlockedOr(v15, 0x200000u);
    *(_BYTE *)(a2 + 8) = (v16 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
