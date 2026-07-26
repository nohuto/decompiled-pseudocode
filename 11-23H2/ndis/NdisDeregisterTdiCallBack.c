/*
 * XREFs of NdisDeregisterTdiCallBack @ 0x1C0089050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void NdisDeregisterTdiCallBack(void)
{
  ndisTdiRegisterCallback = 0LL;
  ndisTdiPnPHandler = 0LL;
}
