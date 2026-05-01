/*
 * XREFs of ??$_Cleanup@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@I@Z @ 0x1802DE508
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@123@IPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAI@Z @ 0x1802DEA1C (--$_IteratorGetMany@U-$IIterator_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@123@IIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAI@Z @ 0x1802DEBB0 (--$_VectorGetMany@U-$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@123@IIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAI@Z @ 0x1802DECA4 (--$_VectorGetMany@U-$IVector_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,unsigned int>(
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
