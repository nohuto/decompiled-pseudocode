/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry@234@@@QEAAXPEAVTargetMapEntry@Composition@UI@Windows@@@Z @ 0x18016943C
 * Callers:
 *     ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x18001C678 (--1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::TargetMapEntry>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        void *a2)
{
  if ( !RtlDeleteElementGenericTable(a1, a2) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
