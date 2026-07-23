/*
 * XREFs of HalpProcInitDiscard @ 0x140B75924
 * Callers:
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x140380154 (HalpProcGetFeatureBits.c)
 *     HalpMcUpdateInitialize @ 0x14081E3E4 (HalpMcUpdateInitialize.c)
 */

__int64 __fastcall HalpProcInitDiscard(__int64 a1)
{
  off_140C01A60[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140C01A68[0] = HalpUnloadMicrocode;
  off_140C01A70[0] = HalpMcUpdatePostUpdate;
  HalpMcUpdateInitialize(a1, 0LL);
  off_140C01B50[0] = HalpProcessorPrepareForIdle;
  off_140C01B60 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}
