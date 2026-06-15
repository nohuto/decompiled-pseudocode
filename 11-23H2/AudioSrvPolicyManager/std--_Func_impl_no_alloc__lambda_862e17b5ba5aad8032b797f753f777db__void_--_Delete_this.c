/*
 * XREFs of std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Delete_this @ 0x18001ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_862e17b5ba5aad8032b797f753f777db__void_::_Delete_this(
        volatile signed __int32 **a1,
        char a2)
{
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
