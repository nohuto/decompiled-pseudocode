/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14067E368
 * Callers:
 *     sub_14066CB10 @ 0x14066CB10 (sub_14066CB10.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
