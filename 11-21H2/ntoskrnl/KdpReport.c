/*
 * XREFs of KdpReport @ 0x140299E94
 * Callers:
 *     KdpTrap @ 0x140A6F1FC (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14041F650 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14041F720 (KiSaveProcessorControlState.c)
 *     KdpCopyContext @ 0x140A6F708 (KdpCopyContext.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 *     KdpReportExceptionStateChange @ 0x140A73424 (KdpReportExceptionStateChange.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // r10d
  char v9; // si
  char result; // al
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v13; // r15
  __int64 v14; // r8
  char v15; // al
  int v16; // esi
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx

  v6 = *a3;
  if ( *a3 == -1073740768
    || (unsigned int)(v6 + 2147483645) <= 1
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( !a6 && ((unsigned int)v6 <= 0x4000001D || v6 == -1073741769 || v6 >= 1073741856) )
      return 0;
  }
  else
  {
    v9 = a6;
    if ( !a6 )
      return 0;
  }
  v11 = KdEnterDebugger();
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = v11;
  KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), a4);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v14) = v9;
  v15 = KdpReportExceptionStateChange(a3, CurrentPrcb->Context, v14);
  v16 = *(_DWORD *)(a4 + 48);
  v17 = v15;
  KdpCopyContext(a4, CurrentPrcb->ContextFlagsInit & v16, CurrentPrcb->Context);
  *(_DWORD *)(a4 + 48) = v16;
  if ( (KeKernelCetWrssEnabledScenarios & 4) != 0 && (v16 & 0x100080) == 0x100080 )
  {
    v18 = *(_QWORD *)(a4 + 248);
    v19 = a4 + *(int *)(a4 + 1256);
    if ( *(_QWORD *)(v19 + 1240) != v18 )
    {
      *(_WORD *)(v19 + 1250) |= 1u;
      *(_QWORD *)(v19 + 1240) = v18;
    }
  }
  KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v20) = v13;
  KdExitDebugger(v20);
  result = v17;
  KdpControlCPressed = 0;
  return result;
}
