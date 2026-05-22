/*
 * XREFs of ??$SetAnimatableSparseProperty@VVisual@Composition@UI@Windows@@MP81234@EBAMXZP81234@EAAXM@Z@ProxyObject@Composition@UI@Windows@@IEAAJPEAVVisual@123@AEBMP84123@EBAMXZP84123@EAAXM@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18006D484
 * Callers:
 *     ?SetOpacity@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x18006D404 (-SetOpacity@Visual@Composition@UI@Windows@@QEAAJM@Z.c)
 * Callees:
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006D4D4 (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatableSparseProperty<Windows::UI::Composition::Visual,float,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>(
        Windows::UI::Composition::CompositionObject *a1)
{
  return Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(a1);
}
