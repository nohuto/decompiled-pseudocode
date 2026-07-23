/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x140290B80
 * Callers:
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1407C0714 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14081F33C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14081FD24 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140864284 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D1D1EC;
}
