/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1402908F0
 * Callers:
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1407C0444 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14081F03C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14081FA24 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140864044 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D1D1EC;
}
