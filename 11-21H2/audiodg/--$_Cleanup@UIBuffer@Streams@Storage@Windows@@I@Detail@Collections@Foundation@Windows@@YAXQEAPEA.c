/*
 * XREFs of ??$_Cleanup@UIBuffer@Streams@Storage@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIBuffer@Streams@Storage@3@I@Z @ 0x140071D50
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x140071DA0 (--$_IteratorGetMany@U-$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Found.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IIPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x140072070 (--$_VectorGetMany@U-$IVectorView_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Found.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IIPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x14007234C (--$_VectorGetMany@U-$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundatio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Storage::Streams::IBuffer,unsigned int>(
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
