/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x140410DB8
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 2) & 1LL;
}
