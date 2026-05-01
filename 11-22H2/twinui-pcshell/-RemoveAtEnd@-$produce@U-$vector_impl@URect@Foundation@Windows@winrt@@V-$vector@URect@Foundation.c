/*
 * XREFs of ?RemoveAtEnd@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18052A570
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::RemoveAtEnd(
        __int64 a1)
{
  __int64 v1; // r8
  volatile signed __int32 *v2; // rdx
  __int64 *v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h]

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  v2 = (volatile signed __int32 *)(v1 + 40);
  if ( *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) == *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    try
    {
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    catch ( ... )
    {
      v4 = &v5;
      *((_DWORD *)v4 + 20) = *winrt::to_hresult((_DWORD *)v4 + 20);
      return v7;
    }
  }
  _InterlockedIncrement(v2);
  *(_QWORD *)((v1 & -(__int64)(v2 != 0LL)) + 0x38) -= 16LL;
  return 0LL;
}
