/*
 * XREFs of ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1801048B0
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104A80 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x180104B70 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800365B4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 */

float __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration(
        CTopLevelWindow3D **this)
{
  if ( CTopLevelWindow3D::ShouldShowTransition(this[9]) )
    return FLOAT_0_30000001;
  else
    return 0.0;
}
