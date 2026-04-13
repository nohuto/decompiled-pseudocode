/*
 * XREFs of ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800535B4
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18005DB48 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$2 @ 0x1800D6B8A (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005553C (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::~SendAppServiceMessageActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::SendAppServiceMessageActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
