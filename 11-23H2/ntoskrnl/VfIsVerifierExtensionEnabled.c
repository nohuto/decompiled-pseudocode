/*
 * XREFs of VfIsVerifierExtensionEnabled @ 0x1405CE794
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140AA347C (PopMarkComponentsBootPhase.c)
 *     VfNotifyOfHibernate @ 0x140AC7238 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierExtensionEnabled()
{
  return (unsigned int)VfXdvEnabled;
}
