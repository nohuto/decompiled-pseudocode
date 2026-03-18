/*
 * XREFs of PfpCheckPrefetchAbort @ 0x140360A84
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AE11C (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1406AE644 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AEA14 (PfpPrefetchDirectoryStream.c)
 *     PfpOpenHandleCreate @ 0x1407DFC68 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x1407E0408 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1409870AC (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x140987430 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
