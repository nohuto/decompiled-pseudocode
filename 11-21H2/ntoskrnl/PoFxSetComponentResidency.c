/*
 * XREFs of PoFxSetComponentResidency @ 0x1405CACD0
 * Callers:
 *     DifPoFxSetComponentResidencyWrapper @ 0x140619B10 (DifPoFxSetComponentResidencyWrapper.c)
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x1405D209C (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x1405D4D6C (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
