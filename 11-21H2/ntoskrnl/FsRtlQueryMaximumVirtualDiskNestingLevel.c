/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x1403A71E0
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     sub_1403DC618 @ 0x1403DC618 (sub_1403DC618.c)
 */

ULONG FsRtlQueryMaximumVirtualDiskNestingLevel(void)
{
  ULONG result; // eax

  result = dword_140C09748;
  if ( dword_140C09748 == -1 )
  {
    result = sub_1403DC618();
    dword_140C09748 = result;
  }
  return result;
}
