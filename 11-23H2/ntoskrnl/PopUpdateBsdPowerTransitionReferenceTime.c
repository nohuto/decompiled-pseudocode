/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8588
 * Callers:
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14032D3E0 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C6A750 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C6A750, 8LL);
  DWORD2(xmmword_140C6A750) = result;
  return result;
}
