/*
 * XREFs of VerifierIoGetInitialStack @ 0x140ACF090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetInitialStack()
{
  return ((__int64 (*)(void))pXdvIoGetInitialStack)();
}
