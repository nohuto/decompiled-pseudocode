/*
 * XREFs of ?RemoveAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x180729E00
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v2 = (a1 - 16) & -(__int64)(a1 != 0);
    v3 = (volatile signed __int32 *)(v2 + 40);
    if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38)
                                          - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 3) )
    {
      winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    _InterlockedIncrement(v3);
    v4 = *(_QWORD *)((v2 & -(__int64)(v3 != 0LL)) + 0x30) + 8LL * a2;
    v5 = v2 & -(__int64)(v3 != 0LL);
    memmove_0((void *)v4, (const void *)(v4 + 8), *(_QWORD *)(v5 + 0x38) - (v4 + 8));
    *(_QWORD *)(v5 + 56) -= 8LL;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
