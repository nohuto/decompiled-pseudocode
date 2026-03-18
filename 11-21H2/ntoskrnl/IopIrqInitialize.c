/*
 * XREFs of IopIrqInitialize @ 0x140839118
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140C458F8 = (__int64)IopIrqUnpackRequirement;
  qword_140C45900 = (__int64)IopIrqPackResource;
  qword_140C45908 = (__int64)IopIrqUnpackResource;
  qword_140C45910 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
