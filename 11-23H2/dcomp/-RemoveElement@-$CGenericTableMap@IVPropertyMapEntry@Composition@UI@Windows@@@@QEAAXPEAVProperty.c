/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@QEAAXPEAVPropertyMapEntry@Composition@UI@Windows@@@Z @ 0x180169408
 * Callers:
 *     ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x18001C678 (--1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?UnregisterBoundProperty@AnimationBindingManager@Composition@UI@Windows@@AEAAXII@Z @ 0x1801696A4 (-UnregisterBoundProperty@AnimationBindingManager@Composition@UI@Windows@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        void *a2)
{
  if ( !RtlDeleteElementGenericTable(a1, a2) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
