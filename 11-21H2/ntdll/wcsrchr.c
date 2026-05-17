/*
 * XREFs of wcsrchr @ 0x180099AE0
 * Callers:
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x180032FB0 (RtlpGetDirPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetDataModulePath @ 0x1800676F0 (LdrpGetDataModulePath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 *     CompatCachepLookupCdb @ 0x18007AEC0 (CompatCachepLookupCdb.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008B128 (LdrpGetModuleInfoFromVirtualMemory.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r8

  v2 = Str;
  while ( *Str++ )
    ;
  while ( --Str != v2 )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
  }
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return 0LL;
}
