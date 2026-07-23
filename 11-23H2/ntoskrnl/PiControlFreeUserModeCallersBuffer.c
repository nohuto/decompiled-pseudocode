/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14022BD7C
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1406C90D0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleasePropertyInputData @ 0x1406D0C60 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0CB4 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3FB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D40F0 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     PiCMReleaseObjectInputData @ 0x14079A2C8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A374 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BEE2C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1407C0CEC (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C0E90 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C53EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C55F4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMGetDeviceIdList @ 0x1407C7C4C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C805C (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407C9EDC (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407CA07C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D5DC0 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084DFE0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967E34 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1409682AC (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
