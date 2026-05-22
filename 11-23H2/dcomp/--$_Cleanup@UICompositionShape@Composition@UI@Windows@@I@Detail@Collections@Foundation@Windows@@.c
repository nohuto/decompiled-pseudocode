/*
 * XREFs of ??$_Cleanup@UICompositionShape@Composition@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICompositionShape@Composition@UI@3@I@Z @ 0x1801A02B4
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionShape@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@123@IPEAPEAUICompositionShape@Composition@UI@3@PEAI@Z @ 0x1801A0304 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVCompositionShape@Composition@UI@Windo.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionShape@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUICompositionShape@Composition@UI@3@PEAI@Z @ 0x1801A03F4 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVCompositionShape@Composition@UI@Windo.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionShape@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@PEAUICompositionShape@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUICompositionShape@Composition@UI@3@PEAI@Z @ 0x1801A04E8 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVCompositionShape@Composition@UI@Windows@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::Composition::ICompositionShape,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
