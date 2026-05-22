/*
 * XREFs of ??$make_shared@VEdgeGestureMetrics@@$$V@std@@YA?AV?$shared_ptr@VEdgeGestureMetrics@@@0@XZ @ 0x1801D8174
 * Callers:
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801D8360 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<EdgeGestureMetrics,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x28uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<EdgeGestureMetrics>::`vftable';
  *((_OWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
