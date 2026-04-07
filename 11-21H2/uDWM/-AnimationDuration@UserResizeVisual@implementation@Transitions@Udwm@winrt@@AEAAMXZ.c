/*
 * XREFs of ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800FF7F0
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800FF930 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x1800FFA20 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 */

float __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration(
        CTopLevelWindow3D **this)
{
  if ( CTopLevelWindow3D::ShouldShowTransition(this[5]) )
    return FLOAT_0_30000001;
  else
    return 0.0;
}
