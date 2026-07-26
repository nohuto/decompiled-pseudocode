/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C011FCF0
 * Callers:
 *     NdisDllInitialize @ 0x1C0031A00 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
