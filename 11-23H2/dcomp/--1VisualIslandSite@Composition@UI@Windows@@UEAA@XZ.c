/*
 * XREFs of ??1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ @ 0x180010F74
 * Callers:
 *     ??_GVisualIslandSite@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180010F30 (--_GVisualIslandSite@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180010FA8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVV.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::~VisualIslandSite(
        Windows::UI::Composition::VisualIslandSite *this)
{
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>((char *)this + 288);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 280);
  Windows::UI::Composition::CompositionIslandSite::~CompositionIslandSite(this);
}
