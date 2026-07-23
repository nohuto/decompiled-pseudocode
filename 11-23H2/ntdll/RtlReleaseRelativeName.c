/*
 * XREFs of RtlReleaseRelativeName @ 0x18002E7B0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180075864 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075DB4 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800ECC7C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FCA58 (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // rbx

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( _InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) == 1 )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0LL;
  }
}
