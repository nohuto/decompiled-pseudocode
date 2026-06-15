/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Delete_this @ 0x180042FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( a2 )
    operator delete(a1, 0x10uLL);
}
