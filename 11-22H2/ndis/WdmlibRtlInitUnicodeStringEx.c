/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C002E928
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0FC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C011B36C (ndisMiniportQueryDeviceProperty.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C014300C (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0143200 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C014363C (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0143714 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C0143A64 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C0143A9C (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C0143AF8 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int16 v4; // ax
  NTSTATUS result; // eax

  v2 = 0;
  if ( !SourceString )
  {
    SourceString = 0LL;
    v4 = 0;
    goto LABEL_6;
  }
  v3 = -1LL;
  do
    ++v3;
  while ( SourceString[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    v2 = v4 + 2;
LABEL_6:
    DestinationString->Length = v4;
    result = 0;
    DestinationString->MaximumLength = v2;
    DestinationString->Buffer = (wchar_t *)SourceString;
    return result;
  }
  return -1073741562;
}
