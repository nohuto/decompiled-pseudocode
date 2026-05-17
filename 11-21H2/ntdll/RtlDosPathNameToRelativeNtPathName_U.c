/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x1800676C0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180067580 (LdrpIsReparsePoint.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800680C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800448E4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
