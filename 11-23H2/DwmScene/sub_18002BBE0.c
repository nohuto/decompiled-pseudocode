/*
 * XREFs of sub_18002BBE0 @ 0x18002BBE0
 * Callers:
 *     sub_18002D540 @ 0x18002D540 (sub_18002D540.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800740D4 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 */

LPVOID __fastcall sub_18002BBE0(LPVOID lpMem, char a2)
{
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
