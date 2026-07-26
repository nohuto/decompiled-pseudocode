/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C0114248
 * Callers:
 *     NdisDllInitialize @ 0x1C0031100 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
