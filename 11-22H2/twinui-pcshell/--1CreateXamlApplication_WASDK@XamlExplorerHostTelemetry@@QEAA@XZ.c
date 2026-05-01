/*
 * XREFs of ??1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18002EE8C
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::XamlApplication_WASDK_::_1_::dtor$4 @ 0x1802BD7E8 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1802BD7E8.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801101BC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlApplication_WASDK::~CreateXamlApplication_WASDK(
        XamlExplorerHostTelemetry::CreateXamlApplication_WASDK *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlApplication_WASDK::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
