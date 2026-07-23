/*
 * XREFs of DifUtilDbgPrint @ 0x140604500
 * Callers:
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

__int64 DifUtilDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  if ( (qword_140D01450 & 0x400000) == 0 )
  {
    result = KeGetCurrentIrql();
    if ( !(_BYTE)result )
      return sub_140369C50(&File, 0x65u, 0, a1, va, 1);
  }
  return result;
}
