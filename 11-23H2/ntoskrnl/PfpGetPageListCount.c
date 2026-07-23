/*
 * XREFs of PfpGetPageListCount @ 0x14075DAEC
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140684C04 (PfpVolumePrefetchMetadata.c)
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x14075D680 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14075D9D0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
