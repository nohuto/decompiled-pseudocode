/*
 * XREFs of IopBusNumberInitialize @ 0x140839180
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_140C45798 = (__int64)IopBusNumberUnpackRequirement;
  qword_140C457A0 = (__int64)IopBusNumberPackResource;
  qword_140C457A8 = (__int64)IopBusNumberUnpackResource;
  qword_140C457B0 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
