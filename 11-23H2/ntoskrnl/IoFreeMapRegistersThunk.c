/*
 * XREFs of IoFreeMapRegistersThunk @ 0x1405010C4
 * Callers:
 *     HalpAllocateMapRegisters @ 0x140933640 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9834 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x14045DAC0 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x1405102D0 (IoFreeMapRegistersV3.c)
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
