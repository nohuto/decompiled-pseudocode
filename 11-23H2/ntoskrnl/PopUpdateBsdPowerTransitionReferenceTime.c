/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8778
 * Callers:
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14032D670 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140C6A750 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140C6A750, 8u);
  DWORD2(xmmword_140C6A750) = result;
  return result;
}
