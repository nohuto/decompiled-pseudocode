/*
 * XREFs of DifiDbgPrint @ 0x1405D5644
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x1405D2BAC (CarEtwWriteBugCheckEvent.c)
 *     CarInitLogging @ 0x1405D3260 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x1405D5070 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x1405D5884 (CarInitiateBugcheck.c)
 *     CarDoLiveDump @ 0x1405D59D0 (CarDoLiveDump.c)
 *     CarLiveDump @ 0x1405D5A90 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifiDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
  return result;
}
