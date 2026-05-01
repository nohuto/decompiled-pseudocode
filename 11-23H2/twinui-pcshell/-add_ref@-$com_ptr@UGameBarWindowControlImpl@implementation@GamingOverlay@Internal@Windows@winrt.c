/*
 * XREFs of ?add_ref@?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@AEBAXXZ @ 0x18040A9D0
 * Callers:
 *     ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801DAFC4 (-OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::add_ref(
        __int64 *a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rdx
  bool v3; // zf
  signed __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    while ( v2 >= 0 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 8), v2 + 1, v2);
      v3 = v2 == result;
      v2 = result;
      if ( v3 )
        return result;
    }
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
  }
  return result;
}
