/*
 * XREFs of RtlReleaseRelativeName @ 0x18002E980
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EB94C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
