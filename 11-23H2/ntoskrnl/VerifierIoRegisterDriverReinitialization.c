/*
 * XREFs of VerifierIoRegisterDriverReinitialization @ 0x140ACF210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterDriverReinitialization()
{
  return ((__int64 (*)(void))pXdvIoRegisterDriverReinitialization)();
}
