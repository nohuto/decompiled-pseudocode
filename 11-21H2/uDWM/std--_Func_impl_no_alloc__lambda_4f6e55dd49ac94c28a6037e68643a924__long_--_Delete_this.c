/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_::_Delete_this @ 0x180007720
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x180099664 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4f6e55dd49ac94c28a6037e68643a924__long_::_Delete_this(
        __int64 a1,
        char a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 8);
  if ( *v4 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v4);
  if ( a2 )
    return std::_Deallocate<8,0>(a1);
  return result;
}
