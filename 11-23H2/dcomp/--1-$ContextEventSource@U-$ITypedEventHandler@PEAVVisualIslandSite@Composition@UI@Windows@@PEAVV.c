/*
 * XREFs of ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180010FA8
 * Callers:
 *     ??1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ @ 0x180010F74 (--1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionBatch@Composition@UI@Windows@@UEAA@XZ @ 0x180011E64 (--1CompositionBatch@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  if ( *a1 )
    RaiseFailFastException(0LL, 0LL, 0);
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  }
}
