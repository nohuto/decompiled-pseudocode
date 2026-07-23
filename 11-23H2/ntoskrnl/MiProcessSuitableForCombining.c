/*
 * XREFs of MiProcessSuitableForCombining @ 0x140216D54
 * Callers:
 *     MiCapturePfnVm @ 0x140215CDC (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCombinePte @ 0x1406537E0 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140653968 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140216D94 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1768) && !(unsigned int)MiIsStoreProcess();
}
