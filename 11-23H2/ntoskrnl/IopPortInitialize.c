/*
 * XREFs of IopPortInitialize @ 0x140810E28
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140C5C7D8 = (__int64)IopPortFindSuitableRange;
  qword_140C5C7E0 = (__int64)IopPortAddAllocation;
  qword_140C5C7E8 = (__int64)IopPortBacktrackAllocation;
  qword_140C5C758 = (__int64)&IopGenericUnpackRequirement;
  qword_140C5C760 = (__int64)IopGenericPackResource;
  qword_140C5C768 = (__int64)IopGenericUnpackResource;
  qword_140C5C770 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}
