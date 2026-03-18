/*
 * XREFs of KeIsKernelCetAuditModeEnabled @ 0x1403B6608
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetAuditModeEnabled()
{
  return (_BYTE)KiKernelCetAuditModeEnabled != 0;
}
