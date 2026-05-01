/*
 * XREFs of ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18068AD38
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 *     _WindowDragInputProvider::OnArrangementReset_::_1_::dtor$0 @ 0x18068B790 (_WindowDragInputProvider--OnArrangementReset_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E2C64 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::~OnArrangementReset(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&WindowDragInputProviderTelemetry::OnArrangementReset::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
