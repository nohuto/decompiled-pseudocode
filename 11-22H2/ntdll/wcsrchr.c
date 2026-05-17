/*
 * XREFs of wcsrchr @ 0x180094BB0
 * Callers:
 *     LdrpGetDataModulePath @ 0x1800083E0 (LdrpGetDataModulePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006AB10 (RtlpGetDirPath.c)
 *     CompatCachepLookupCdb @ 0x180073C0C (CompatCachepLookupCdb.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180087E1C (LdrpGetModuleInfoFromVirtualMemory.c)
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
