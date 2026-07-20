/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x140011730
 * Callers:
 *     SmpPagefileInitialize @ 0x140009BE8 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
