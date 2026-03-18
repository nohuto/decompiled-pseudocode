/*
 * XREFs of ZwAcceptConnectPort @ 0x14041B7A0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
