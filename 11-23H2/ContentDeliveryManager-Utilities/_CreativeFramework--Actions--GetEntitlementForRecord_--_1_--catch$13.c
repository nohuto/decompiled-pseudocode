/*
 * XREFs of _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800DA9D1
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18003EF84 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x1800A95FC (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 */

void __fastcall __noreturn CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch_13(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  *(_DWORD *)(a2 + 72) = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
    *(__int64 **)(a2 + 120),
    *(__int64 **)(a2 + 112),
    (char *)(a2 + 65),
    (int *)(a2 + 72),
    (__int64 *)(a2 + 80));
  throw;
}
