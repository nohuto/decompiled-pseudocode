/*
 * XREFs of ??$_Cleanup@I@Detail@Collections@Foundation@Windows@@YAXPEAPEAUHSTRING__@@I@Z @ 0x180181E44
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUHSTRING__@@$00@123@IPEAPEAUHSTRING__@@PEAI@Z @ 0x180182284 (--$_IteratorGetMany@U-$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHST.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUHSTRING__@@$00@123@IIPEAPEAUHSTRING__@@PEAI@Z @ 0x1801823E4 (--$_VectorGetMany@U-$IVectorView_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHST.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUHSTRING__@@$00@123@IIPEAPEAUHSTRING__@@PEAI@Z @ 0x1801824D8 (--$_VectorGetMany@U-$IVector_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Detail::_Cleanup<unsigned int>(HSTRING *a1, unsigned int a2)
{
  __int64 v3; // rdi
  HRESULT result; // eax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = WindowsDeleteString(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
