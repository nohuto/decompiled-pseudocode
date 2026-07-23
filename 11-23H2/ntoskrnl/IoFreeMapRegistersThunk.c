/*
 * XREFs of IoFreeMapRegistersThunk @ 0x140501614
 * Callers:
 *     HalpAllocateMapRegisters @ 0x140933840 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9A14 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x14045DEC0 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x140510820 (IoFreeMapRegistersV3.c)
 */

void __fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _QWORD *v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    IoFreeMapRegistersV2(v2, v3, v1);
  else
    IoFreeMapRegistersV3(v2, v3);
}
