/*
 * XREFs of ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x1803FB640
 * Callers:
 *     ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801DAFC4 (-OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ?IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NI@Z @ 0x1804100C0 (-IsSameViewInstanceId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***__fastcall GamingOverlayExperienceManager::FindWindowW(
        __int64 a1,
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***a2,
        __int64 a3,
        unsigned int *a4)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v4; // rsi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **i; // rbx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***result; // rax

  v4 = *(winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)(a1 + 1408);
  for ( i = *(winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)(a1 + 1400);
        i != v4
     && !winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameViewInstanceId(
           *i,
           *a4);
        ++i )
  {
    ;
  }
  result = a2;
  *a2 = i;
  return result;
}
