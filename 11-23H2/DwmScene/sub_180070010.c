/*
 * XREFs of sub_180070010 @ 0x180070010
 * Callers:
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 * Callees:
 *     sub_1800701BC @ 0x1800701BC (sub_1800701BC.c)
 */

_QWORD *sub_180070010(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 i; // rdi
  _QWORD *result; // rax
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  for ( i = a2; i != a3; i += 128LL )
  {
    if ( (unsigned __int8)sub_1800701BC((__int64 *)va, i) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
