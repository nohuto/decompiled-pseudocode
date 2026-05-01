/*
 * XREFs of ??$as@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@UGameBarWindowControlImpl@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGameBarWindowControl@GamingOverlay@Internal@Windows@@@1@PEAUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@@Z @ 0x180329D80
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180332920 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?query_interface@?$root_implements@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@5673@U?$IIterable@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@5673@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18033D640 (-query_interface@-$root_implements@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Window.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::GamingOverlay::IGameBarWindowControl,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,0>(
        _QWORD *a1,
        __int64 a2)
{
  int interface; // eax

  if ( a2 )
  {
    interface = winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>::query_interface(a2);
    if ( interface < 0 )
      winrt::throw_hresult((unsigned int)interface);
    *a1 = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
