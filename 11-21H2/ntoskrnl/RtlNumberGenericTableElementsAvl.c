/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402D8A70
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x140948F60 (PiDmGetObjectCount.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
