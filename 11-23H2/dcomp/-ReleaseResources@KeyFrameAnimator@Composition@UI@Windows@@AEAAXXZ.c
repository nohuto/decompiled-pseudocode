/*
 * XREFs of ?ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18016110C
 * Callers:
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 * Callees:
 *     ??$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180064104 (--$ReleaseInterface@VCSharedAllocation@DirectComposition@@@@YAXAEAPEAVCSharedAllocation@DirectCo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameAnimationResources@Composition@UI@Windows@@@Z @ 0x1801610D4 (--R-$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameA.c)
 */

void __fastcall Windows::UI::Composition::KeyFrameAnimator::ReleaseResources(
        Windows::UI::Composition::KeyFrameAnimator *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx

  ReleaseInterface<DirectComposition::CSharedAllocation>((DirectComposition::CDelayedDestructionObject **)this + 37);
  ReleaseInterface<DirectComposition::CSharedAllocation>((DirectComposition::CDelayedDestructionObject **)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 40);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  if ( v3 )
    std::default_delete<Windows::UI::Composition::KeyFrameAnimationResources>::operator()(v2, v3);
}
