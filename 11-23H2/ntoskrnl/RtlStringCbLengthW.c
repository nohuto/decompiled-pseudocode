/*
 * XREFs of RtlStringCbLengthW @ 0x14022BFF0
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x14022BF7C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066EACC (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407BE704 (AslpFileVerStringBlockGetValue.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084580C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x140849E18 (PpmRegisterProfiles.c)
 *     RtlpValidRelativeAttribute @ 0x14085B1D0 (RtlpValidRelativeAttribute.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1409862B4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099A59C (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409BB898 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D5E1C (LocalGetStringForRelativeAttribute.c)
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
