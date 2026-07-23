/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140291CC8
 * Callers:
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1403D75EC (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1407062BC (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
