/*
 * XREFs of IopApcHardError @ 0x140944180
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140945320 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
