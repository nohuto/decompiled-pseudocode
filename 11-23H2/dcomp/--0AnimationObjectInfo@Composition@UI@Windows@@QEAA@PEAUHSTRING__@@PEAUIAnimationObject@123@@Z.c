/*
 * XREFs of ??0AnimationObjectInfo@Composition@UI@Windows@@QEAA@PEAUHSTRING__@@PEAUIAnimationObject@123@@Z @ 0x1800415EC
 * Callers:
 *     ?TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z @ 0x180015408 (-TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z.c)
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 * Callees:
 *     ??4?$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimationObject@Composition@UI@Windows@@@Z @ 0x18004164C (--4-$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimation.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

Windows::UI::Composition::AnimationObjectInfo *__fastcall Windows::UI::Composition::AnimationObjectInfo::AnimationObjectInfo(
        Windows::UI::Composition::AnimationObjectInfo *this,
        HSTRING a2,
        struct Windows::UI::Composition::IAnimationObject *a3)
{
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this, &v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IAnimationObject>::operator=((char *)this + 8, a3);
  return this;
}
