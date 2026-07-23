/*
 * XREFs of KiStartDebugAccumulation @ 0x14020E460
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402BAF88 (KiUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
