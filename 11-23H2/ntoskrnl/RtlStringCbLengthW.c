/*
 * XREFs of RtlStringCbLengthW @ 0x14022BEE0
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x14022BE6C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066E57C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407BE434 (AslpFileVerStringBlockGetValue.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408197E4 (PiSwCompleteCreate.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084550C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x140849B18 (PpmRegisterProfiles.c)
 *     RtlpValidRelativeAttribute @ 0x14085AF90 (RtlpValidRelativeAttribute.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1409860B4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A39C (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409BB698 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5C1C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v4; // r9
  size_t v5; // rax
  NTSTATUS result; // eax

  v3 = cbMax >> 1;
  v4 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF && (v5 = v3) != 0 )
  {
    while ( *psz )
    {
      ++psz;
      if ( !--v5 )
        goto LABEL_6;
    }
    v4 = v3 - v5;
    result = 0;
  }
  else
  {
LABEL_6:
    result = -1073741811;
  }
  if ( pcbLength )
  {
    if ( result < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v4;
  }
  return result;
}
