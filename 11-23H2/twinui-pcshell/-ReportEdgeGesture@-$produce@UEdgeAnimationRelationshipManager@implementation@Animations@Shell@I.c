/*
 * XREFs of ?ReportEdgeGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x180760DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180760DF8 (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 */

__int64 winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportEdgeGesture()
{
  __int64 result; // rax
  _DWORD v1[6]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportEdgeGesture();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v1);
  }
  return result;
}
