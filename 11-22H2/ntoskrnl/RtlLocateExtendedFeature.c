/*
 * XREFs of RtlLocateExtendedFeature @ 0x140463BB0
 * Callers:
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1409B1BBC (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140463BE0 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlLocateExtendedFeature(__int64 a1, __int64 a2)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL);
}
