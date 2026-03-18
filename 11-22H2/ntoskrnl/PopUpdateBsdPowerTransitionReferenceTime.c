/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8B38
 * Callers:
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14032D240 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C6A850 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C6A850, 8LL);
  DWORD2(xmmword_140C6A850) = result;
  return result;
}
