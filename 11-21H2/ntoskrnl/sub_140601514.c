/*
 * XREFs of sub_140601514 @ 0x140601514
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140A95A04 @ 0x140A95A04 (sub_140A95A04.c)
 */

__int64 sub_140601514()
{
  __int64 result; // rax

  result = (unsigned int)qword_140D01450;
  if ( (qword_140D01450 & 0x10) != 0 )
    return sub_140A95A04();
  return result;
}
