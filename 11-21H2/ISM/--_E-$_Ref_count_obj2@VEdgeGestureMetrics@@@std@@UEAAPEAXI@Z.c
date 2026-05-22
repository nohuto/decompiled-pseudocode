/*
 * XREFs of ??_E?$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@UEAAPEAXI@Z @ 0x1801AC6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<EdgeGestureMetrics>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<EdgeGestureMetrics>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
