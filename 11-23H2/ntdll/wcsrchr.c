/*
 * XREFs of wcsrchr @ 0x1800953B0
 * Callers:
 *     LdrpGetDataModulePath @ 0x180008850 (LdrpGetDataModulePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     EtwpGenerateFileName @ 0x18005F488 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006AAF0 (RtlpGetDirPath.c)
 *     CompatCachepLookupCdb @ 0x18007427C (CompatCachepLookupCdb.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180088618 (LdrpGetModuleInfoFromVirtualMemory.c)
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
