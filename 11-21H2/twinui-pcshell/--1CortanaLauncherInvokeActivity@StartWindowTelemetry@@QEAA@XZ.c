/*
 * XREFs of ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18006952C
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800257B0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180042054 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1800696A0 (--1XamlLauncherState@@UEAA@XZ.c)
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$4 @ 0x180215144 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$4.c)
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$3 @ 0x1802169FA (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$3.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$4 @ 0x1802178EB (_XamlLauncherState--ShowStartView_--_1_--dtor$4.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180450068 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180450260 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180451070 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$1 @ 0x1804513D8 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180069B14 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
