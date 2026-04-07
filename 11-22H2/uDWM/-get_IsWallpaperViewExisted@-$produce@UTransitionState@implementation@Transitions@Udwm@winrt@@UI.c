/*
 * XREFs of ?get_IsWallpaperViewExisted@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1801040A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1801023D4 (-IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::get_IsWallpaperViewExisted(
        winrt::Udwm::Transitions::implementation::TransitionState *a1,
        char *a2,
        __int64 a3)
{
  *a2 = winrt::Udwm::Transitions::implementation::TransitionState::IsWallpaperViewExisted(a1, (__int64)a2, a3);
  return 0LL;
}
