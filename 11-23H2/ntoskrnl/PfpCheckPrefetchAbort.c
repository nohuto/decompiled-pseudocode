/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1402F8B88
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x140684C04 (PfpVolumePrefetchMetadata.c)
 *     PfpOpenHandleCreate @ 0x14075D274 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x14075D680 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x14097E0E4 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  if ( v1 && *(_DWORD *)(v1 + 4) )
    return 1LL;
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
  {
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) )
      return (*(_DWORD *)(v2 + 68) >> 2) & 1;
    return 1LL;
  }
  return 0LL;
}
