/*
 * XREFs of ?DxgkEngIsWinLogonProcess@@YAHXZ @ 0x1C0168E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 DxgkEngIsWinLogonProcess(void)
{
  return PsGetCurrentProcessId() == (HANDLE)gpidLogon;
}
