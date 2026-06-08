/*
 * XREFs of ActivateFixedFunctionCounters @ 0x1C0006E64
 * Callers:
 *     InitEnergyCountersMsrEx @ 0x1C0034100 (InitEnergyCountersMsrEx.c)
 * Callees:
 *     <none>
 */

_DWORD *ActivateFixedFunctionCounters()
{
  _DWORD *result; // rax

  __writemsr(0x38Du, 0LL);
  __writemsr(0x309u, 0LL);
  __writemsr(0x30Au, 0LL);
  __writemsr(0x30Bu, 0LL);
  __writemsr(0x38Du, 0x333uLL);
  __writemsr(0x38Fu, __readmsr(0x38Fu) | 0x700000000LL);
  result = *(_DWORD **)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + KeGetPcr()->Prcb.Number) + 368LL);
  *result = 3;
  return result;
}
