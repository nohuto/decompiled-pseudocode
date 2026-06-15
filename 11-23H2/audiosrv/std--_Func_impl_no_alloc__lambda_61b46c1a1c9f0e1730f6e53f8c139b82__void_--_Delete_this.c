/*
 * XREFs of std::_Func_impl_no_alloc__lambda_61b46c1a1c9f0e1730f6e53f8c139b82__void_::_Delete_this @ 0x18011B980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_61b46c1a1c9f0e1730f6e53f8c139b82__void_::_Delete_this(
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
