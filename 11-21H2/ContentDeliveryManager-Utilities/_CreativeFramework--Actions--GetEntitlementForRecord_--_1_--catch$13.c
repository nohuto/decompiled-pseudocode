/*
 * XREFs of _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800F424E
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044374 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x1800B91E0 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch_13(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  *(_DWORD *)(a2 + 72) = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
    *(const WCHAR ***)(a2 + 96),
    *(const WCHAR ***)(a2 + 88),
    (char *)(a2 + 64),
    (int *)(a2 + 72),
    (const WCHAR **)(a2 + 80));
  *(_BYTE *)(a2 + 64) = 1;
  return 0LL;
}
