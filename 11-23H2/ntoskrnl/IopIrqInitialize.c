/*
 * XREFs of IopIrqInitialize @ 0x140812940
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C5C338 = (__int64)IopIrqUnpackRequirement;
  qword_140C5C340 = (__int64)IopIrqPackResource;
  qword_140C5C348 = (__int64)IopIrqUnpackResource;
  qword_140C5C350 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
