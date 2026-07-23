/*
 * XREFs of IopBusNumberInitialize @ 0x1408129A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C5C1D8 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C5C1E0 = (__int64)IopBusNumberPackResource;
  qword_140C5C1E8 = (__int64)IopBusNumberUnpackResource;
  qword_140C5C1F0 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
