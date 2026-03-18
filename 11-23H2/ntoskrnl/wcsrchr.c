/*
 * XREFs of wcsrchr @ 0x1403DBB10
 * Callers:
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x140756CC0 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x140758BC0 (AslPathSplit.c)
 *     EtwpGenerateFileName @ 0x1407E92A0 (EtwpGenerateFileName.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140802854 (PopBcdSetDefaultResumeObjectElements.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408764E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1408797E4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqDeleteUserObject @ 0x14095C23C (PiDqDeleteUserObject.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A5D278 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61EF4 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A65FCC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AB9C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6AFBC (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B98234 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
