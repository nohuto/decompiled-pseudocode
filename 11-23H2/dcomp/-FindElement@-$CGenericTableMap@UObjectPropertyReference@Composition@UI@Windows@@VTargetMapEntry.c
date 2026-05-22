/*
 * XREFs of ?FindElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry@234@@@QEAAPEAVTargetMapEntry@Composition@UI@Windows@@UObjectPropertyReference@345@@Z @ 0x180087EA4
 * Callers:
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z @ 0x18016BAC0 (-DebugProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::TargetMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]

  Buffer = *a2;
  v4 = 0LL;
  return RtlLookupElementGenericTable(a1, &Buffer);
}
