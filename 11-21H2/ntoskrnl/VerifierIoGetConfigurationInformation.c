/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x140A8E5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetConfigurationInformation()
{
  return ((__int64 (*)(void))pXdvIoGetConfigurationInformation)();
}
