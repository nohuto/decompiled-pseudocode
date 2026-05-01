/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@YAPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x18069BE10
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAAPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@QEAU21@$$QEAU21@@Z @ 0x18069B94C (--$_Emplace_reallocate@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$I.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x18069B8B8 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Uninitialized_move<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>> *,std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (winrt::Windows::Foundation::IUnknown *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(__int64 *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)a3 = *(v4 - 2);
      a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 + 24);
      *(__int64 *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      v6 = *v4;
      *v4 = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = v6;
      v4 += 3;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
    (__int64)a3,
    a3);
  return a3;
}
