/*
 * XREFs of ViGetAdapterSignature @ 0x140AC9030
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140AC8E64 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC9178 (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140AC9540 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
