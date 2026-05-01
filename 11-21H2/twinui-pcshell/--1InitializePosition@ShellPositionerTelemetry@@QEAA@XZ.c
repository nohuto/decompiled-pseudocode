/*
 * XREFs of ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1800C3E30
 * Callers:
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800C3D00 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     _ShellPositionerManager::InitializePosition_::_1_::dtor$0 @ 0x18021BC6A (_ShellPositionerManager--InitializePosition_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C4214 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::InitializePosition::~InitializePosition(
        ShellPositionerTelemetry::InitializePosition *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::InitializePosition::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
