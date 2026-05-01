/*
 * XREFs of ?get_weak@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VTouchEdgeGripperHost@@@2@XZ @ 0x180657564
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@?$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAA?AU?$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802D37E4 (--$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@w.c)
 */

_QWORD *__fastcall winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_weak(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::get_weak<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>(
    a1,
    a2);
  return a2;
}
