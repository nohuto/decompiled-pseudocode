/*
 * XREFs of ?RemoveAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x18052A480
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::RemoveAt(
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
                                          - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 4) )
    {
      winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    _InterlockedIncrement(v3);
    v4 = *(_QWORD *)((v2 & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64)) + 0x30) + 16LL * a2;
    v5 = v2 & -(__int64)(v3 != 0LL);
    memmove_0((void *)v4, (const void *)(v4 + 16), *(_QWORD *)(v5 + 0x38) - (v4 + 16));
    *(_QWORD *)(v5 + 56) -= 16LL;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
