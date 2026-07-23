/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14067E368
 * Callers:
 *     sub_14066D060 @ 0x14066D060 (sub_14066D060.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
