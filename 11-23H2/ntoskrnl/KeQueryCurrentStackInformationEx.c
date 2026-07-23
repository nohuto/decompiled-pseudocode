/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x14022EAC0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14022E8C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x14022EA70 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271620 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeCheckStackAndTargetAddress @ 0x140346BD0 (KeCheckStackAndTargetAddress.c)
 *     KeQueryCurrentStackInformation @ 0x14034EB50 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140353930 (RtlpGetStackLimitsEx.c)
 *     KasanWrapperRtlRestoreContext @ 0x140356D70 (KasanWrapperRtlRestoreContext.c)
 *     WheaIsAltContextAllocPossible @ 0x140612230 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x14035AD30 (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rbx
  char *StackLimit; // r8
  unsigned __int64 v11; // rax
  char *StackBase; // rcx
  bool result; // al
  char *IsrStack; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // rdx
  __int64 v22; // rdx

  if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) != 0 )
  {
    *a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v15 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= a1 && a1 < (unsigned __int64)IsrStack )
    {
      *a2 = 6;
      *a4 = (unsigned __int64)IsrStack;
      result = 1;
      *a3 = v15;
      return result;
    }
    v16 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v17 = v16 - 24576;
    if ( (unsigned __int64)(v16 - 24576) <= a1 && a1 < (unsigned __int64)v16 )
    {
      *a2 = 10;
      *a4 = (unsigned __int64)v16;
      result = 1;
      *a3 = v17;
      return result;
    }
    goto LABEL_18;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
  {
LABEL_18:
    v18 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v19 = v18 - 24576;
    if ( (unsigned __int64)(v18 - 24576) <= a1 && a1 < (unsigned __int64)v18 )
    {
      *a2 = 10;
      *a4 = (unsigned __int64)v18;
      result = 1;
      *a3 = v19;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( CurrentIrql >= 2u )
  {
    v20 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v21 = &v20[-(unsigned int)KeKernelStackSize];
    if ( a1 < (unsigned __int64)v20 && (unsigned __int64)v21 <= a1 )
    {
      *a2 = 1;
      result = 1;
      *a4 = (unsigned __int64)v20;
      *a3 = v21;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a2 = 7;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
  }
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xFu )
    goto LABEL_9;
  if ( (unsigned int)KiRspInIstStack(3LL, a1) )
  {
    *a2 = 8;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( !(unsigned int)KiRspInIstStack(2LL, v22) )
  {
LABEL_9:
    if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    {
      *a2 = 2;
    }
    else if ( CurrentThread->CallbackNestingLevel )
    {
      *a2 = 4;
    }
    else
    {
      *a2 = 3;
    }
    StackLimit = (char *)CurrentThread->StackLimit;
    v11 = (unsigned __int64)StackLimit;
    StackBase = (char *)CurrentThread->StackBase;
    *a4 = (unsigned __int64)StackBase;
    if ( StackLimit >= StackBase )
      v11 = (unsigned __int64)StackLimit;
    *a3 = StackLimit;
    return v11 <= a1 && a1 < *a4;
  }
  else
  {
    *a2 = 9;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
  }
  return result;
}
