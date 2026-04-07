/*
 * XREFs of ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F87F8
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7F40 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F858C (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800ABE80 (-Release@CAnimationResource@@UEAAKXZ.c)
 */

CAnimationResource *__fastcall wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset(
        CAnimationResource **a1)
{
  CAnimationResource *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CAnimationResource *)CAnimationResource::Release(result);
  return result;
}
