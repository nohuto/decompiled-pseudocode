/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140291A38
 * Callers:
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1403D740C (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1407060AC (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
