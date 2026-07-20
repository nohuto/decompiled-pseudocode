/*
 * XREFs of memcpy_0 @ 0x140014B37
 * Callers:
 *     SmpParseToken @ 0x1400055F0 (SmpParseToken.c)
 *     SmpSaveRegistryValue_U @ 0x1400079E0 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x140008400 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140008A58 (SmpCopyListToSharedSection.c)
 *     SmpConfigureEnvironment @ 0x14000FB10 (SmpConfigureEnvironment.c)
 *     SmpCheckFolderForRedirections @ 0x1400117C4 (SmpCheckFolderForRedirections.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140012818 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     InternalFindFirstFileExW @ 0x140014490 (InternalFindFirstFileExW.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x140016AB8 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x140019410 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140019FF0 (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
