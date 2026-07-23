/*
 * XREFs of DbgPrintReturnControlC @ 0x1800EC3F0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180053958 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Flags, 0x65u, 0, a1, va, 0);
}
