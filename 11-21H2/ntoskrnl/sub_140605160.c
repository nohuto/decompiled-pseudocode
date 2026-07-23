/*
 * XREFs of sub_140605160 @ 0x140605160
 * Callers:
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 *     sub_1406051B0 @ 0x1406051B0 (sub_1406051B0.c)
 *     sub_1406052FC @ 0x1406052FC (sub_1406052FC.c)
 *     sub_1406053C0 @ 0x1406053C0 (sub_1406053C0.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

__int64 sub_140605160(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return sub_140369C50(&File, 0x65u, 0, a1, va, 1);
  return result;
}
