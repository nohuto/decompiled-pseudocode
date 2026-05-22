/*
 * XREFs of ?Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ @ 0x1801905E0
 * Callers:
 *     ?Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019ADF0 (-Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x18019B810 (-Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStringTuple@@QEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046D78 (--$_Destroy_range@V-$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStri.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122498 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@W.c)
 *     ?RemoveTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXXZ @ 0x180191038 (-RemoveTarget@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Destroy(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  (*(void (__fastcall **)(Windows::UI::Composition::CompositionPropertyAnimator *))(*(_QWORD *)this + 432LL))(this);
  Windows::UI::Composition::CompositionPropertyAnimator::RemoveTarget(this);
  std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
    *((volatile signed __int32 ***)this + 32),
    *((volatile signed __int32 ***)this + 33));
  *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  std::_Destroy_range<std::allocator<ObjectPropertyStringTuple>>(*((HSTRING **)this + 25), *((HSTRING **)this + 26));
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
