/*
 * XREFs of ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@U?$IIterator@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1805D6350
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::WindowsUdk::UI::MenuItem>>::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 16;
  if ( !a1 )
    v3 = 32LL;
  v4 = *(_DWORD *)(*(_QWORD *)v3 + 40LL);
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 24LL;
  try
  {
    if ( v4 != *(_DWORD *)v5 )
    {
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000C);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    }
    v6 = a1 + 32;
    if ( !a1 )
      v6 = 48LL;
    v7 = a1 + 24;
    if ( !a1 )
      v7 = 40LL;
    *a2 = *(_QWORD *)v7 != *(_QWORD *)v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v10);
  }
  return result;
}
