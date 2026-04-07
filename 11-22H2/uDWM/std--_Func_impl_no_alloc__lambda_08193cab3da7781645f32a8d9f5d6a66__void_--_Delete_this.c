/*
 * XREFs of std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Delete_this @ 0x1800FB5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800A276C (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Delete_this(
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
