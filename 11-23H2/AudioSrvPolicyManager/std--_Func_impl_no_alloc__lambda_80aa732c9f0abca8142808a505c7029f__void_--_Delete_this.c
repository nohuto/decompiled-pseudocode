/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this @ 0x18000B890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  volatile signed __int32 *v3; // rbx

  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  if ( a2 )
    operator delete(a1, 0x28uLL);
}
