/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x140410B58
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 2) & 1LL;
}
