/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180195204
 * Callers:
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801951D0 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1801951D0.c)
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1803AB964 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  __int64 *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
           (__int64)a1,
           (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<70368744177664,5>(v2[1], a1 + 2);
  }
  *a1 = 3;
}
