/*
 * XREFs of ?PopulateRedirectedInfo@RedirectedPropertyInfo@Composition@UI@Windows@@QEAAXAEBVAnimationPropertyInfo@234@@Z @ 0x180044288
 * Callers:
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x1800442F4 (--4-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComposit.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

void __fastcall Windows::UI::Composition::RedirectedPropertyInfo::PopulateRedirectedInfo(
        HSTRING *this,
        const struct Windows::UI::Composition::AnimationPropertyInfo *a2)
{
  HSTRING v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (HSTRING)*((_QWORD *)a2 + 19);
  Microsoft::WRL::Wrappers::HString::Set(this, &v4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 41);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::operator=(this + 2, *((_QWORD *)a2 + 21));
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 45);
}
