/*
 * XREFs of PsWow64GetProcessMachine @ 0x1407048B0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     KiVerifyContextRecord @ 0x140298680 (KiVerifyContextRecord.c)
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 1408) )
    return 34404LL;
  result = *(unsigned __int16 *)(a1 + 2412);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
