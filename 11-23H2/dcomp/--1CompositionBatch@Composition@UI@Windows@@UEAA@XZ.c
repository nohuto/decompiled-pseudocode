/*
 * XREFs of ??1CompositionBatch@Composition@UI@Windows@@UEAA@XZ @ 0x180011E64
 * Callers:
 *     ??_GCompositionCommitBatch@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011E20 (--_GCompositionCommitBatch@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECompositionBatch@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015AE40 (--_ECompositionBatch@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180010FA8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVV.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionBatch::~CompositionBatch(
        Windows::UI::Composition::CompositionBatch *this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 192);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 184);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>((__int64 *)this + 19);
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionBatch *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
