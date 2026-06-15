/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this @ 0x1400387A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this(
        __int64 *Block,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(Block + 3);
  v4 = (std::_Ref_count_base *)Block[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    operator delete(Block);
}
