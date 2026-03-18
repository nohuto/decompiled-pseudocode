/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406D41F0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406798C0 (NtReplacePartitionUnit.c)
 *     PiControlGetRelatedDevice @ 0x1406C90A0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0C84 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3F80 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D40C0 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792750 (PiControlGetPropertyData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A184 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BEB5C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C0BC0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C5324 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C7D8C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407C9DAC (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D5AF0 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084DCE0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967C34 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1409680AC (PiCMCaptureRegisterInterfaceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1406D236C (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, char *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    Pool2 = ExAllocatePool2(257LL, a3, 538996816LL);
    *a1 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
