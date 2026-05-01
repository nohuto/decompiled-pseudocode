/*
 * XREFs of ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18044D438
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18044D1D8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 *     _FocusHoldingTank::FocusHoldingTank_::_1_::dtor$1 @ 0x18044D426 (_FocusHoldingTank--FocusHoldingTank_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C5C74 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow(
        StartWindowTelemetry::CreateHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
