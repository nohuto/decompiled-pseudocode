/*
 * XREFs of ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x18051DFD4
 * Callers:
 *     ??1AppResizeView@@UEAA@XZ @ 0x18051DF74 (--1AppResizeView@@UEAA@XZ.c)
 *     ??4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18051E000 (--4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x18051F400 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000F3F8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall TabletModeTelemetry::TMAppResize::~TMAppResize(TabletModeTelemetry::TMAppResize *this)
{
  *(_QWORD *)this = &TabletModeTelemetry::TMAppResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
