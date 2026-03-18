/*
 * XREFs of DifiDbgPrint @ 0x1405D56D4
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x1405D2C3C (CarEtwWriteBugCheckEvent.c)
 *     CarInitLogging @ 0x1405D32F0 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x1405D5100 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x1405D5914 (CarInitiateBugcheck.c)
 *     CarDoLiveDump @ 0x1405D5A60 (CarDoLiveDump.c)
 *     CarLiveDump @ 0x1405D5B20 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
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
