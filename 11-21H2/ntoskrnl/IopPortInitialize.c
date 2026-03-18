/*
 * XREFs of IopPortInitialize @ 0x140838F24
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C45D98 = (__int64)IopPortFindSuitableRange;
  qword_140C45DA0 = (__int64)IopPortAddAllocation;
  qword_140C45DA8 = (__int64)IopPortBacktrackAllocation;
  qword_140C45D18 = (__int64)&IopGenericUnpackRequirement;
  qword_140C45D20 = (__int64)IopGenericPackResource;
  qword_140C45D28 = (__int64)IopGenericUnpackResource;
  qword_140C45D30 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
