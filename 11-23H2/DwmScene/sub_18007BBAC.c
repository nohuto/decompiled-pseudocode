/*
 * XREFs of sub_18007BBAC @ 0x18007BBAC
 * Callers:
 *     sub_18007BAF0 @ 0x18007BAF0 (sub_18007BAF0.c)
 *     sub_18007BFD8 @ 0x18007BFD8 (sub_18007BFD8.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 sub_18007BBAC()
{
  __int64 result; // rax

  result = sub_18001C190();
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
