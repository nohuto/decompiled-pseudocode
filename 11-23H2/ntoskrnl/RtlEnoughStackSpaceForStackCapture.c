/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x140227800
 * Callers:
 *     RtlWalkFrameChain @ 0x140227760 (RtlWalkFrameChain.c)
 *     IovpLogStackTrace @ 0x140AC1E08 (IovpLogStackTrace.c)
 *     ViPtLogStackTrace @ 0x140ADF08C (ViPtLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022E960 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14041F130 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v2, &v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)(KeGetCurrentStackPointer() - v2) >= 0xE30;
  return v0;
}
