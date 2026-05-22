/*
 * XREFs of ?ClearPropertyInfo@AnimationPropertyInfo@Composition@UI@Windows@@QEAAXXZ @ 0x18001FA2C
 * Callers:
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::AnimationPropertyInfo::ClearPropertyInfo(HSTRING *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  WindowsDeleteString(this[19]);
  this[19] = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  v2 = (Microsoft::WRL2::NestableRuntimeClass *)this[21];
  if ( v2 )
  {
    this[21] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
}
