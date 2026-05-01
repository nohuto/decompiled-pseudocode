/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x18042CD9C
 * Callers:
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x180431594 (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_3729ee5694c21d370e67b314ad1382e5_::operator() @ 0x18042F528 (_lambda_3729ee5694c21d370e67b314ad1382e5_--operator().c)
 *     ?InternalRelease@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804355F0 (-InternalRelease@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // r14
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v10 = a4;
  v9 = a1;
  for ( i = a2; i != a3; ++i )
  {
    v9 = (_QWORD *)*i;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    lambda_3729ee5694c21d370e67b314ad1382e5_::operator()(a4, &v9);
  }
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(a4);
  return a1;
}
