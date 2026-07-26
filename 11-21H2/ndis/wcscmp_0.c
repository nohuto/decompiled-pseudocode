/*
 * XREFs of wcscmp_0 @ 0x1C003601D
 * Callers:
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0064AEC (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1C00CB090 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 *     NdisQueryDiagnosticSetting @ 0x1C0122770 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
