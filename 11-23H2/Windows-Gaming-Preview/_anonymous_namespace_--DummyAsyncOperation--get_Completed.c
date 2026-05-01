/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::get_Completed @ 0x1800140E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::get_Completed(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx

  v4 = _Mtx_lock((_Mtx_t)(a1 + 88));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *a2 = *(_QWORD *)(a1 + 168);
  _Mtx_unlock((_Mtx_t)(a1 + 88));
  return 0LL;
}
