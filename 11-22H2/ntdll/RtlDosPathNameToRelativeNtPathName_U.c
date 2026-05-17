/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x1800083B0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, int a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
