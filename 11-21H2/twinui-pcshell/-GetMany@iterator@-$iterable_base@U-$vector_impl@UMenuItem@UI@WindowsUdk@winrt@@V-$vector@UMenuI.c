/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UMenuItem@UI@WindowsUdk@winrt@@@3@@Z @ 0x1805D4DB8
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@U?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x1805D4C40 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$ve.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator::GetMany(
        __int64 a1,
        __m128i *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // r14d
  winrt::Windows::Foundation::IUnknown *v8; // rsi
  __int64 result; // rax
  __m128i pExceptionObject[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) != *(_DWORD *)(a1 + 24) )
  {
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000C);
    throw (winrt::hresult_changed_state *)pExceptionObject;
  }
  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48) - (_QWORD)v3;
  pExceptionObject[0] = *a2;
  v5 = v4 >> 3;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(pExceptionObject[0], 8));
  if ( v6 < (unsigned int)v5 )
    LODWORD(v5) = v6;
  v7 = v5;
  if ( (_DWORD)v5 )
  {
    v8 = (winrt::Windows::Foundation::IUnknown *)pExceptionObject[0].m128i_i64[0];
    while ( 1 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v8, v3);
      v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v8 + 8);
      if ( !--v7 )
        break;
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
  }
  result = (unsigned int)v5;
  *(_QWORD *)(a1 + 40) += 8LL * (unsigned int)v5;
  return result;
}
