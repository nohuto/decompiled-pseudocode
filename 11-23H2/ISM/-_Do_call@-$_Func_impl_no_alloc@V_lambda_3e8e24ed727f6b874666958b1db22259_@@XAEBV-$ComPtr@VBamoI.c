/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_3e8e24ed727f6b874666958b1db22259_@@XAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@std@@EEAAXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z @ 0x180148FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc<_lambda_3e8e24ed727f6b874666958b1db22259_,void,Microsoft::WRL::ComPtr<BamoInputObserverClientProxy> const &>::_Do_call(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD))
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ****v6)(_QWORD); // [rsp+38h] [rbp+10h]

  v5 = *a2;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v5);
  v6 = &v5;
  result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))v5[1][3])(v5 + 1, *(_QWORD *)(a1 + 8));
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    return (*v4)[1](v4);
  }
  return result;
}
