/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1407E5410
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x14061C370 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     PfSnLogVolumeCreate @ 0x1406CE4C4 (PfSnLogVolumeCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075B0E4 (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075B9CC (SdbMakeIndexKeyFromStringEx.c)
 *     PfCalculateProcessHash @ 0x1407DB510 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1407E5234 (PfSnLogStreamCreate.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14094E390 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     ViCreateProcessCallbackInternal @ 0x140A96D84 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140A9700C (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1402D7DE0 (AllocateOrValidateCharStringBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    v5 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
    result = AllocateOrValidateCharStringBuffer(
               v7,
               *v6,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( v5 )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *(_WORD *)(v5
                                     + 2
                                     * ((v11 & 0xF)
                                      + *(unsigned __int16 *)(v5
                                                            + 2LL
                                                            * (((unsigned __int8)v11 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v11 >> 8))))))
                          + v11;
          }
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
