/*
 * XREFs of sub_18001C808 @ 0x18001C808
 * Callers:
 *     sub_18001D13C @ 0x18001D13C (sub_18001D13C.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

__int64 sub_18001C808()
{
  __int64 result; // rax

  result = sub_18001C190();
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
