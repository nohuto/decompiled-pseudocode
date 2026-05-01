/*
 * XREFs of ?HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ @ 0x1801AD79C
 * Callers:
 *     ?WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ @ 0x1804526A0 (-WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall StartWindowTelemetry::HideCortanaDueToDisplayChange(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _tlgProvider_t *v3; // rcx
  int v4; // ecx

  v3 = LauncherTelemetryLogging::Provider(a1, a2, a3);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v4,
        (int)&unk_1806B5C1E,
        0);
  }
}
