/*
 * XREFs of IopMemInitialize @ 0x1408147A4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x140813824 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x140813A18 (ArbInitializeArbiterInstance.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140814594 (ArbAddMmConfigRangeAsBootReserved.c)
 *     RtlAddRange @ 0x140814BC0 (RtlAddRange.c)
 */

NTSTATUS __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v3; // [rsp+20h] [rbp-28h]

  qword_140C5C5F8 = (__int64)&IopGenericUnpackRequirement;
  qword_140C5C600 = (__int64)IopGenericPackResource;
  qword_140C5C608 = (__int64)IopGenericUnpackResource;
  qword_140C5C610 = (__int64)IopGenericScoreRequirement;
  qword_140C5C678 = (__int64)IopMemFindSuitableRange;
  qword_140C5C648 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance(
             (__int64)&IopRootMemArbiter,
             a2,
             3,
             (__int64)L"RootMemory",
             v3,
             (__int64)IopGenericTranslateOrdering);
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140C5C5A8, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140C5C5A8);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140C5C5A8);
    }
  }
  return result;
}
