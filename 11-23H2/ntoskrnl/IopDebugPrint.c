/*
 * XREFs of IopDebugPrint @ 0x1405616FC
 * Callers:
 *     PnpCollectOpenHandles @ 0x1409642BC (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x140964360 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
