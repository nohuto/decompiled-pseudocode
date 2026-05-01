/*
 * XREFs of ??$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z @ 0x18022EFEC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1802E9856 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

const struct _tlgProvider_t *__fastcall DashboardManagerTelemetry::PackageInstalledResultWPR<int const &,bool>(
        int *a1,
        char *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r8d
  int v6; // r9d
  char v7; // dl
  char v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  result = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v7 = *a2;
    v9 = *a1;
    v8 = v7;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_180875EF8,
                                            v5,
                                            v6,
                                            (__int64)&v9,
                                            (__int64)&v8);
  }
  return result;
}
