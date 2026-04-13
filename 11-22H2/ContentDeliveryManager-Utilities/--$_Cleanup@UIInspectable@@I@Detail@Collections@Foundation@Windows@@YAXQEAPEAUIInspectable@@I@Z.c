/*
 * XREFs of ??$_Cleanup@UIInspectable@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInspectable@@I@Z @ 0x1800C5FC8
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIInspectable@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIInspectable@@$00@123@IPEAPEAUIInspectable@@PEAI@Z @ 0x1800C6018 (--$_IteratorGetMany@U-$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAU.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIInspectable@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIInspectable@@$00@123@IIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C61FC (--$_VectorGetMany@U-$IVectorView_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAU.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIInspectable@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIInspectable@@$00@123@IIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C62F0 (--$_VectorGetMany@U-$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIIns.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<IInspectable,unsigned int>(
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
