/*
 * XREFs of ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802E8E48
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 *     _CShellSnapComponent::OnGetWindowArrangementRects_::_1_::dtor$0 @ 0x18066214A (_CShellSnapComponent--OnGetWindowArrangementRects_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801101BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::~OnGetWindowArrangementRects(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::OnGetWindowArrangementRects::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
