/*
 * XREFs of ??R?$default_delete@VKeyFrameAnimationResources@Composition@UI@Windows@@@std@@QEBAXPEAVKeyFrameAnimationResources@Composition@UI@Windows@@@Z @ 0x1801610D4
 * Callers:
 *     ?Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180028A80 (-Destroy@KeyFrameAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ??_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180053640 (--_EKeyFrameAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18016110C (-ReleaseResources@KeyFrameAnimator@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Windows::UI::Composition::KeyFrameAnimationResources>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
