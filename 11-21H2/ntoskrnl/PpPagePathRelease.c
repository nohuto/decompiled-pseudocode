/*
 * XREFs of PpPagePathRelease @ 0x140945F80
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     CmpVolumeContextCleanup @ 0x140863DA8 (CmpVolumeContextCleanup.c)
 * Callees:
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}
