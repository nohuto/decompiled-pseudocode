/*
 * XREFs of ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C908
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     NullifyLookasideRef @ 0x1C01FEFF0 (NullifyLookasideRef.c)
 */

__int64 __fastcall ClearStackReferences<tagPOPUPMENU>(__int64 a1)
{
  return NullifyLookasideRef(*(_QWORD *)(a1 + 88));
}
