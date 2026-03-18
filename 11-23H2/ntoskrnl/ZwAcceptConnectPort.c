/*
 * XREFs of ZwAcceptConnectPort @ 0x14041ADA0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
