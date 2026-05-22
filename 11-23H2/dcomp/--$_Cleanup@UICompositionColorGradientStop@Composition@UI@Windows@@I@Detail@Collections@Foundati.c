/*
 * XREFs of ??$_Cleanup@UICompositionColorGradientStop@Composition@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICompositionColorGradientStop@Composition@UI@3@I@Z @ 0x180172CB4
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionColorGradientStop@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@123@IPEAPEAUICompositionColorGradientStop@Composition@UI@3@PEAI@Z @ 0x180172D04 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVCompositionColorGradientStop@Composit.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionColorGradientStop@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUICompositionColorGradientStop@Composition@UI@3@PEAI@Z @ 0x180172DF4 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVCompositionColorGradientStop@Composit.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICompositionColorGradientStop@Composition@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVCompositionColorGradientStop@Composition@UI@Windows@@PEAUICompositionColorGradientStop@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUICompositionColorGradientStop@Composition@UI@3@PEAI@Z @ 0x180172EE8 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVCompositionColorGradientStop@Composition@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::Composition::ICompositionColorGradientStop,unsigned int>(
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
