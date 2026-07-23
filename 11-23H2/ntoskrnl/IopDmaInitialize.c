/*
 * XREFs of IopDmaInitialize @ 0x1408128C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C5C498 = (__int64)IopIrqUnpackRequirement;
  qword_140C5C4A0 = (__int64)IopDmaPackResource;
  qword_140C5C4A8 = (__int64)IopDmaUnpackResource;
  qword_140C5C4B0 = (__int64)IopDmaScoreRequirement;
  qword_140C5C530 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
