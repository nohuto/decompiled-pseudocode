/*
 * XREFs of RegisterIdleComplete @ 0x1C00330A0
 * Callers:
 *     RegisterHvLpiStates @ 0x1C002542C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C0025900 (RegisterVmIdleStates.c)
 *     RegisterKernelIdleStates @ 0x1C0033AC0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00335E0 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0033750 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00351C4 (RegisterKernelPlatformStates.c)
 *     PepRegisterSpmSettings @ 0x1C003B618 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0012B28 == dword_1C00124D4 )
  {
    IoWorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    if ( IoWorkItem )
    {
      v2 = *(_QWORD *)(a1 + 280);
      if ( (v2 & 0xE0000000000LL) != 0 )
      {
        RegisterKernelCoordinatedLpiStates(a1);
      }
      else if ( (v2 & 0x200000200LL) != 0 )
      {
        RegisterKernelCoordinatedStates(a1);
        if ( !qword_1C0012B58 )
          RegisterKernelPlatformStates(a1);
      }
      PepRegisterSpmSettings(a1);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, PepRegisterBootVetoes, CriticalWorkQueue, WorkItem);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x11u,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    }
  }
}
