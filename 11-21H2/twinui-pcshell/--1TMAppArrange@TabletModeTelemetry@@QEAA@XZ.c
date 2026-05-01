/*
 * XREFs of ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x180518550
 * Callers:
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18051857C (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180518624 (--4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18051B9B0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000F3F8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::~TMAppArrange(TabletModeTelemetry::TMAppArrange *this)
{
  *(_QWORD *)this = &TabletModeTelemetry::TMAppArrange::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
