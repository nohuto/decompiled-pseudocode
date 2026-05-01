/*
 * XREFs of ??$_Uninitialized_move@PEAUIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6F08
 * Callers:
 *     ??$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1806C6D44 (--$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@-$vector@UIAsyncAction@Foundatio.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6B98 (--$_Destroy_range@V-$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsync.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Uninitialized_move<winrt::Windows::Foundation::IAsyncAction *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IAsyncAction>>(a3, a3);
  return a3;
}
