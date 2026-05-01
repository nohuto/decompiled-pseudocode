/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1800D62FC
 * Callers:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800D532C (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805AB9B8 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1806B0D08 (-CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>,enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>::Value(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
