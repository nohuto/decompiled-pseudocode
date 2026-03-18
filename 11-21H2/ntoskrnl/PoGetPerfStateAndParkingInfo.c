/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x1402485E0
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1406D14BC (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PpmPerfGetCurrentState @ 0x140248720 (PpmPerfGetCurrentState.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmGetThroughputInfoCallback @ 0x14045E870 (PpmGetThroughputInfoCallback.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rbp
  int ThroughputInfoCallback; // esi
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  ULONG v24; // eax
  int v26; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v27[68]; // [rsp+40h] [rbp-168h] BYREF

  memset(&v27[2], 0, 0x100uLL);
  v26 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 33968);
  v11 = Prcb;
  PpmPerfGetCurrentState(Prcb, a2 + 4, (unsigned int)&v26, a2 + 8, a2, a2 + 24);
  if ( v10 )
  {
    v12 = v10[110];
    *(_DWORD *)(a2 + 12) = v10[132];
    v13 = v10[130];
    if ( v13 >= v10[131] )
      v13 = v10[131];
    *(_DWORD *)(a2 + 16) = v13;
    if ( v10[111] != v10[113] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( v13 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    LODWORD(v14) = (unsigned int)(100 * v26) / v10[110];
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 68);
    LODWORD(v14) = 100;
  }
  *(_DWORD *)(a2 + 20) = v14;
  LOBYTE(v14) = *(_BYTE *)(v11 + 34060);
  *(_BYTE *)(a2 + 29) = v14;
  if ( a4 )
  {
    v14 = *(_QWORD *)(v11 + 34064);
    *a4 = v14;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v17 = v12;
    ThroughputInfoCallback = PpmGetThroughputInfoCallback(v11, a3, v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(v14) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( ThroughputInfoCallback < 0 )
    {
      v27[0] = 2097153;
      memset(&v27[1], 0, 0x104uLL);
      v24 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v27, v24);
      LOBYTE(v14) = PopExecuteOnTargetProcessors(v27, PpmGetThroughputInfoCallback, a3, v17);
    }
  }
  return v14;
}
