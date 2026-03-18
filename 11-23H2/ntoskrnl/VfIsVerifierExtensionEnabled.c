/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405CE224
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA360C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140AC7248 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
