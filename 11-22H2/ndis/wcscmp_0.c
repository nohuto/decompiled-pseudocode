/*
 * XREFs of wcscmp_0 @ 0x1C00381BD
 * Callers:
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0069D5C (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1C00CFD40 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 *     NdisQueryDiagnosticSetting @ 0x1C012E2B0 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
