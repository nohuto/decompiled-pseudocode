/*
 * XREFs of ??1RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@XZ @ 0x180022D64
 * Callers:
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 *     ?Insert@ParameterOverrideEntry@Composition@UI@Windows@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$QEAURedirectedPropertyInfo@234@@Z @ 0x18004129C (-Insert@ParameterOverrideEntry@Composition@UI@Windows@@QEAAXAEBV-$basic_string@GU-$char_traits@G.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18014DBCC (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits_ea_18014DBCC.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::RedirectedPropertyInfo::~RedirectedPropertyInfo(
        Windows::UI::Composition::RedirectedPropertyInfo *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
