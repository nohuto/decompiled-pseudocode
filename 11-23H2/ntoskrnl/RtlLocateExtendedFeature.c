/*
 * XREFs of RtlLocateExtendedFeature @ 0x140464210
 * Callers:
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1409B1B0C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140464240 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlLocateExtendedFeature(__int64 a1, __int64 a2)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL);
}
