/*
 * XREFs of PoFxSetComponentLatency @ 0x14045DDB0
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x1406199E0 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentLatency @ 0x14045E2C4 (PopDiagTraceFxComponentLatency.c)
 *     PopPepComponentSetLatency @ 0x14045E4C2 (PopPepComponentSetLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
