/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCHolographicInputManager@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEAAX_N@Z @ 0x18001ACB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, 0x20uLL);
}
