/*
 * XREFs of ??$?0AEAY0BA@$$CBGW4AEC_LOOPBACK_SELECTION_MODE@@$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@QEAA@AEAY0BA@$$CBG$$QEAW4AEC_LOOPBACK_SELECTION_MODE@@@Z @ 0x180055A70
 * Callers:
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180001430 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  std::wstring::wstring((_QWORD *)a1, L"DEFAULT_CONSOLE");
  *(_DWORD *)(a1 + 32) = *a3;
  return a1;
}
