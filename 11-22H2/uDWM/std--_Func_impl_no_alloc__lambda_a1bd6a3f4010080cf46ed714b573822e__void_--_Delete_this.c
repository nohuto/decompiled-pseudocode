/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Delete_this @ 0x1800A41F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800A276C (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_a1bd6a3f4010080cf46ed714b573822e__void_::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( a2 )
    return std::_Deallocate<8,0>(a1);
  return result;
}
