/*
 * XREFs of KiContinueEx @ 0x14030CD30
 * Callers:
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 * Callees:
 *     KeTestAlertThread @ 0x14030CF00 (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x14030D004 (KiContinuePreviousModeUser.c)
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KeContextToKframes @ 0x14041E4C0 (KeContextToKframes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf
  bool v18; // [rsp+31h] [rbp-27h]
  unsigned int v19; // [rsp+34h] [rbp-24h]
  int v20; // [rsp+38h] [rbp-20h]

  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
    v5 = a3;
  }
  v19 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v18 = 0;
    if ( a2 > 0xFF )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a2 + 24 > 0x7FFFFFFF0000LL || a2 + 24 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v20 = *(_DWORD *)(a2 + 4);
      LOBYTE(a2) = v20 & 1;
      v18 = (v20 & 2) != 0;
    }
    else
    {
      v10 = 0x7FFFFFFF0000LL;
    }
    if ( (_BYTE)a2 )
    {
      if ( (a1 & 0xF) == 0 )
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v10 = a1;
        *(_BYTE *)v10 = *(_BYTE *)v10;
        *(_BYTE *)(v10 + 1231) = *(_BYTE *)(v10 + 1231);
        LOBYTE(v10) = 1;
        KeTestAlertThread(v10);
        if ( v18 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
        {
          *(_QWORD *)(a4 + 208) = a1;
          *(_QWORD *)(a4 + 352) = a3;
          LOBYTE(v11) = 1;
          KiDeliverApc(v11, 0LL, a4);
          v19 = 0;
          goto LABEL_25;
        }
        goto LABEL_11;
      }
    }
    else if ( (a1 & 0xF) == 0 )
    {
LABEL_11:
      v12 = KiContinuePreviousModeUser(a1, a3, a4, v6);
      if ( v12 >= 0 )
        v12 = 1;
      v19 = v12;
      goto LABEL_25;
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( a2 > 0xFF )
    LOBYTE(v6) = *(_BYTE *)(a2 + 4) & 1;
  KeContextToKframes(a4, v5, a1, *(_DWORD *)(a1 + 48), 0LL);
  if ( (_BYTE)v6 )
    KeTestAlertThread(0LL);
LABEL_25:
  if ( !CurrentIrql )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v14 - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return v19;
}
