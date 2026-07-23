/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406D4220
 * Callers:
 *     NtReplacePartitionUnit @ 0x140679E10 (NtReplacePartitionUnit.c)
 *     PiControlGetRelatedDevice @ 0x1406C90D0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0CB4 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3FB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D40F0 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A374 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BEE2C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C0E90 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C55F4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C805C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407CA07C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D5DC0 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084DFE0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967E34 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1409682AC (PiCMCaptureRegisterInterfaceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1406D239C (PiControlCopyUserModeCallersBuffer.c)
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
