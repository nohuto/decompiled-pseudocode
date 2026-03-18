/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14022BC6C
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1406C90A0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleasePropertyInputData @ 0x1406D0C30 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0C84 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3F80 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D40C0 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792750 (PiControlGetPropertyData.c)
 *     PiCMReleaseObjectInputData @ 0x14079A0D8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A184 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BEB5C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1407C0A1C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C0BC0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C511C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C5324 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMGetDeviceIdList @ 0x1407C797C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C7D8C (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407C9C0C (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407C9DAC (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D5AF0 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084DCE0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967C34 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1409680AC (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A684 (PiCMRegisterDeviceInterface.c)
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
