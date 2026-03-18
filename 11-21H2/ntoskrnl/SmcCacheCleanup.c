/*
 * XREFs of SmcCacheCleanup @ 0x1409D790C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x1409D7990 (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x1402382D0 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x1409D4850 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x1409D6C58 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      SmStoreDelete(*((_DWORD *)v2 - 1) & 3, v4);
      CmSiFreeMemory(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
