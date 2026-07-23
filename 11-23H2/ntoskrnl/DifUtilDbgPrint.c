/*
 * XREFs of DifUtilDbgPrint @ 0x1405D50B0
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D54B0 (DifRegisterKernelPlugin.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifUtilDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  if ( (VfRuleClasses & 0x400000) == 0 )
  {
    result = KeGetCurrentIrql();
    if ( !(_BYTE)result )
      return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
  }
  return result;
}
