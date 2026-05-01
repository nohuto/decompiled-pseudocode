/*
 * XREFs of ??$_Cleanup@UIChainLink@Chaining@Shell@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIChainLink@Chaining@Shell@Internal@3@I@Z @ 0x180302830
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIChainLink@Chaining@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@123@IPEAPEAUIChainLink@Chaining@Shell@Internal@3@PEAI@Z @ 0x1803029D4 (--$_IteratorGetMany@U-$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collec.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIChainLink@Chaining@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@123@IIPEAPEAUIChainLink@Chaining@Shell@Internal@3@PEAI@Z @ 0x180302AC4 (--$_VectorGetMany@U-$IVectorView_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collec.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIChainLink@Chaining@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@123@IIPEAPEAUIChainLink@Chaining@Shell@Internal@3@PEAI@Z @ 0x180302BB8 (--$_VectorGetMany@U-$IVector_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collection.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::Shell::Chaining::IChainLink,unsigned int>(
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
