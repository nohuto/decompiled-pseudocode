/*
 * XREFs of ?SetAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIUstruct_Windows_UI_WindowId@23@@Z @ 0x18072A0F0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r10
  volatile signed __int32 *v4; // r9
  __int64 v5; // rcx
  __int64 *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h]

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v4 = (volatile signed __int32 *)(v3 + 40);
  v5 = a2;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38)
                                        - *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30)) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    try
    {
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    catch ( ... )
    {
      v7 = &v8;
      *((_DWORD *)v7 + 22) = *winrt::to_hresult((_DWORD *)v7 + 22);
      return v10;
    }
  }
  _InterlockedIncrement(v4);
  *(_QWORD *)(*(_QWORD *)((v3 & -(__int64)(v4 != 0LL)) + 0x30) + 8 * v5) = a3;
  return 0LL;
}
