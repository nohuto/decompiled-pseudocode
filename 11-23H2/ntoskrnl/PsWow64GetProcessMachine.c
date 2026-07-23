/*
 * XREFs of PsWow64GetProcessMachine @ 0x140770E90
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402A4530 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     KiVerifyContextRecord @ 0x14030E0A0 (KiVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int16 result; // ax

  if ( !*(_QWORD *)(a1 + 1408) )
    return -31132;
  result = *(_WORD *)(a1 + 2412);
  if ( !result )
    return -31132;
  return result;
}
