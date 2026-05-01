/*
 * XREFs of std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_1325668b4ce184215da36fe3c3a9a86f___ @ 0x1805A1298
 * Callers:
 *     ?GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4284 (-GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMon.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1805A107C (--$_Emplace_reallocate@AEBUCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geomet.c)
 */

__int64 **__fastcall std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_1325668b4ce184215da36fe3c3a9a86f___(
        __int64 **a1,
        __int64 a2,
        _OWORD *a3,
        __int64 *a4)
{
  _OWORD *i; // rsi
  _OWORD *v8; // rdx
  __int64 **result; // rax

  for ( i = (_OWORD *)(a2 - 16); i + 1 != a3; --i )
  {
    v8 = (_OWORD *)a4[1];
    if ( v8 == (_OWORD *)a4[2] )
    {
      std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect const &>(a4, (__int64)v8, i);
    }
    else
    {
      *v8 = *i;
      a4[1] += 16LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
