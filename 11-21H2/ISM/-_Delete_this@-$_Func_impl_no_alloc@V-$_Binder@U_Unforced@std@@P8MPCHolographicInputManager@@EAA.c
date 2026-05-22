/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCHolographicInputManager@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEAAX_N@Z @ 0x180011440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( a2 )
    return std::_Deallocate<8,0>(a1, 32LL);
  return result;
}
