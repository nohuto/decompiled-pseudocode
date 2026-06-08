/*
 * XREFs of RegisterIdleComplete @ 0x1C0032260
 * Callers:
 *     RegisterHvLpiStates @ 0x1C002484C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C0024CB0 (RegisterVmIdleStates.c)
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003279C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C003290C (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0034324 (RegisterKernelPlatformStates.c)
 *     PepRegisterSpmSettings @ 0x1C003A664 (PepRegisterSpmSettings.c)
 */

void __fastcall RegisterIdleComplete(__int64 a1)
{
  __int64 v2; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( ++dword_1C0011A78 == dword_1C0011454 )
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
        if ( !qword_1C0011AA8 )
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
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    }
  }
}
