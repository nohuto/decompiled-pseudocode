/*
 * XREFs of NdisImmediateReadPortUchar @ 0x1C00C4110
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C3DB0 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateReadPortUchar(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  ndisImmediateReadWritePort(a1, a2, a3, 1u, 1);
}
