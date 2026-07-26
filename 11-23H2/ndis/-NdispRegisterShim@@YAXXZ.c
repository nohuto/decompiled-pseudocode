/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C011FCB0
 * Callers:
 *     NdisDllInitialize @ 0x1C0031B90 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
