/*
 * XREFs of ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BEDBC
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEF40 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  v3 = *a1;
  *a1 = (CBaseObject *)a2;
  if ( a2 )
    _InterlockedIncrement(a2 + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  return a1;
}
