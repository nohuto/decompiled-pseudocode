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
