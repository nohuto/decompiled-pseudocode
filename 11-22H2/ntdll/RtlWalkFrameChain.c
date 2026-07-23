/*
 * XREFs of RtlWalkFrameChain @ 0x180079DF0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180124374 (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  __int64 v3; // r8
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  v3 = Flags >> 8;
  if ( (unsigned int)v3 > 0xFE || Count == -1 )
    return 0;
  result = RtlpWalkFrameChain((__int64)Callers, Count + 1, v3, (int)v3 + 1);
  if ( result )
    --result;
  return result;
}
