/*
 * XREFs of NdisImmediateReadPortUshort @ 0x1C00C4150
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C3DB0 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateReadPortUshort(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  ndisImmediateReadWritePort(a1, a2, a3, 2u, 1);
}
