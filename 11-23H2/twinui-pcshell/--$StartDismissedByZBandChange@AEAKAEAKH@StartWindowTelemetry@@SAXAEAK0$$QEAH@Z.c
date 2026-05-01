/*
 * XREFs of ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x180502B34
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18017AFE0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18009FA5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

__int64 *__fastcall StartWindowTelemetry::StartDismissedByZBandChange<unsigned long &,unsigned long &,int>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  __int64 *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  int v10; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<LauncherTelemetryLogging>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 4u )
  {
    v12 = *a3;
    v10 = *a2;
    v11[0] = *a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                        (int)v9,
                        (int)&unk_18085BA50,
                        v7,
                        v8,
                        (__int64)v11,
                        (__int64)&v10,
                        (__int64)&v12);
  }
  return result;
}
