/*
 * XREFs of NdisImmediateWritePortUchar @ 0x1C00C4190
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C3DB0 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateWritePortUchar(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisImmediateReadWritePort(a1, a2, &v3, 1u, 0);
}
