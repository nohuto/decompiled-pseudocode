/*
 * XREFs of ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18041D140
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18041D620 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 *     _XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand_::_1_::dtor$1 @ 0x18041D945 (_XamlExplorerHostShellComponent--CreateXamlExplorerHostWindowInBand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache(
        XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
