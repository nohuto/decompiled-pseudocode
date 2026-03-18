/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406852B0
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403ABC30 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x1403AF78C (KsepEvntLogShimsApplied.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x140685290 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     CmpRecoverEnlistment @ 0x1408010F8 (CmpRecoverEnlistment.c)
 *     BiCreateObject @ 0x140803298 (BiCreateObject.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x1408062E0 (BiConvertElementToRegistryData.c)
 *     PopSetNewPolicyValue @ 0x14082C4FC (PopSetNewPolicyValue.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083A8F8 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083AB94 (IopCreateSecureDeviceClassSettings.c)
 *     ExpTranslateEfiPath @ 0x14083E520 (ExpTranslateEfiPath.c)
 *     CmpStartRMLog @ 0x140872B98 (CmpStartRMLog.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878BF0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140879374 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 *     IoGetDeviceDirectory @ 0x140955010 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FB50 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140961910 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409628FC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1409633BC (PpDevCfgProcessDeviceReset.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDCF8 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC168 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1E850 (CmpAddRemoveRMLogContainer.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F0A4 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140A6E0F4 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403DE3C0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(78LL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
