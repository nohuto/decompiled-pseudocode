/*
 * XREFs of ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180027C54
 * Callers:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180027CA0 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180097528 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18009E580 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A01E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6958 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?SetBlurEffect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800F4A94 (-SetBlurEffect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetEffect(CVisualProxy *this, struct CResourceProxy *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 2);
  v3 = **(_QWORD **)(v2 + 16);
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v3 + 392))(
             *(_QWORD *)(v2 + 16),
             *(unsigned int *)(v2 + 24),
             *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v3 + 392))(
             *(_QWORD *)(v2 + 16),
             *(unsigned int *)(v2 + 24),
             0LL);
}
