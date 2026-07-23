/*
 * XREFs of sub_1407EDB78 @ 0x1407EDB78
 * Callers:
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 */

ULONG32 sub_1407EDB78()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140C547A8, 8u);
  DWORD2(xmmword_140C547A8) = result;
  return result;
}
