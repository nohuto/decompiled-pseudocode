/*
 * XREFs of ?get_local_iids@?$implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1801C5940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>>::value;
  return a2;
}
