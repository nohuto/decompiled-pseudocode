/*
 * XREFs of ??1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ @ 0x180591D5C
 * Callers:
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x180591A04 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??4OnSnappingCancelled@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180591F10 (--4OnSnappingCancelled@CSnapComponentTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000F3F8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::OnSnappingCancelled::~OnSnappingCancelled(
        CSnapComponentTelemetry::OnSnappingCancelled *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
