/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_::_Delete_this @ 0x1800EB0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800C6760 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    std::_Deallocate<8,0>(a1, 0x18uLL);
}
