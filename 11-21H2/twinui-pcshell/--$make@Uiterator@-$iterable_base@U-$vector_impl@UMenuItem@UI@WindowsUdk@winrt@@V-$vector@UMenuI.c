/*
 * XREFs of ??$make@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@3@@winrt@@YA?AU?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@0@$$QEAPEAU?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@0@@Z @ 0x1805D7F70
 * Callers:
 *     ?First@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805D8D80 (-First@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@WindowsUdk.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator,winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base> *>(
        _QWORD *a1,
        signed __int64 **a2)
{
  _QWORD *v4; // rax
  signed __int64 *v5; // r8
  _QWORD *v6; // r9
  char *v7; // r10
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  v5 = *a2;
  v6 = v4;
  *((_DWORD *)v4 + 6) = *((_DWORD *)*a2 + 10);
  v7 = (char *)(v4 + 2);
  v4[2] = &winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::WindowsUdk::UI::MenuItem>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v4[1] = 1LL;
  *v4 = &winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator::`vftable';
  v4[4] = 0LL;
  v4[5] = v5[6];
  v4[6] = v5[7];
  if ( v5 )
  {
    v4[4] = v5;
    v8 = v5[1];
    while ( v8 >= 0 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(v5 + 1, v8 + 1, v8);
      if ( v9 == v8 )
        goto LABEL_7;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u);
  }
LABEL_7:
  *v6 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator>::`vftable';
  result = a1;
  *a1 = v7;
  return result;
}
