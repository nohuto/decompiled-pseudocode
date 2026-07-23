/*
 * XREFs of DifiDbgPrint @ 0x1405D5BB4
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x1405D311C (CarEtwWriteBugCheckEvent.c)
 *     CarInitLogging @ 0x1405D37D0 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x1405D55E0 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x1405D5DF4 (CarInitiateBugcheck.c)
 *     CarDoLiveDump @ 0x1405D5F40 (CarDoLiveDump.c)
 *     CarLiveDump @ 0x1405D6000 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
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
