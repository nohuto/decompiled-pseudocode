/*
 * XREFs of ViGetAdapterSignature @ 0x140AC9040
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140AC8E74 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC9188 (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140AC9550 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
