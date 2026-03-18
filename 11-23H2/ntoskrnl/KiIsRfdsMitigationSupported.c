/*
 * XREFs of KiIsRfdsMitigationSupported @ 0x140410A74
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsRfdsMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 24) & 1LL;
}
