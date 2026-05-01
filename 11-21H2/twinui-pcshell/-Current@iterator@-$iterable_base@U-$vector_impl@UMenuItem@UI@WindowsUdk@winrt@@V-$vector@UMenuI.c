/*
 * XREFs of ?Current@iterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@3@XZ @ 0x1805D8CF4
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@U?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805DC680 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180353220 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator::Current(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  _QWORD *v3; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) != *(_DWORD *)(a1 + 24) )
  {
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000C);
    throw (winrt::hresult_changed_state *)pExceptionObject;
  }
  v3 = *(_QWORD **)(a1 + 40);
  if ( v3 == *(_QWORD **)(a1 + 48) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  *(_QWORD *)a2 = *v3;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
