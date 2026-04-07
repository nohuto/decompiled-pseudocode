/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Delete_this @ 0x18009BB80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x180099664 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( a2 )
    return std::_Deallocate<8,0>(a1);
  return result;
}
