/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1407EDB78
 * Callers:
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C547A8, 8u);
  DWORD2(xmmword_140C547A8) = result;
  return result;
}
