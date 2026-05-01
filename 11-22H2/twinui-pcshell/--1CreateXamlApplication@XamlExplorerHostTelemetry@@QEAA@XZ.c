/*
 * XREFs of ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18010F040
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication_::_1_::dtor$4 @ 0x1802BD980 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlApplication_ea_1802BD980.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801101BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlApplication::~CreateXamlApplication(
        XamlExplorerHostTelemetry::CreateXamlApplication *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlApplication::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
