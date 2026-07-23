/*
 * XREFs of IoFreeMapRegisters @ 0x140456A30
 * Callers:
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_1404585B4 @ 0x1404585B4 (sub_1404585B4.c)
 *     sub_140511A58 @ 0x140511A58 (sub_140511A58.c)
 *     sub_14051295C @ 0x14051295C (sub_14051295C.c)
 *     sub_140908B50 @ 0x140908B50 (sub_140908B50.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140458780 @ 0x140458780 (sub_140458780.c)
 *     sub_1405129C8 @ 0x1405129C8 (sub_1405129C8.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( (unsigned int)sub_14023A8D0((__int64)DmaAdapter) == 2 )
    sub_140458780(v3, v4);
  else
    sub_1405129C8(v3, v4);
}
