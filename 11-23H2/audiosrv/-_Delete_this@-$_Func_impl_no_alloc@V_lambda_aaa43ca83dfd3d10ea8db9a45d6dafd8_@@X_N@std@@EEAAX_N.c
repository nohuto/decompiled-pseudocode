/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX_N@Z @ 0x1800F42D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_,void,bool>::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[3];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    operator delete(a1);
}
