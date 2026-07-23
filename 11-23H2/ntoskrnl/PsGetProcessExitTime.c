/*
 * XREFs of PsGetProcessExitTime @ 0x1407DCD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[1].ExtendedFeatureDisableMask;
}
