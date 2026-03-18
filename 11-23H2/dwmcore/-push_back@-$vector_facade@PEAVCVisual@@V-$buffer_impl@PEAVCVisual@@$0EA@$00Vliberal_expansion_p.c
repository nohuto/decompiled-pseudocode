/*
 * XREFs of ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x180119B10
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180213BE8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180119B3C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expans.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       (__int64)(a1[1] - *a1) >> 3);
  *result = *a2;
  return result;
}
