/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_d6a52f33f18072da6f3a09c89335510b_@@XPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@std@@EEAAX_N@Z @ 0x180011FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<_lambda_d6a52f33f18072da6f3a09c89335510b_,void,_MIT_BASE_INPUT_OBSERVER_PACKET const *>::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( a2 )
    return std::_Deallocate<8,0>(a1, 16LL);
  return result;
}
