/*
 * XREFs of RtlLocateExtendedFeature @ 0x140463BB0
 * Callers:
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1409B1BBC (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140463BE0 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL);
}
