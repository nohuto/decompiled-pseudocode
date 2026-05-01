/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18069EA68
 * Callers:
 *     std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Destroy @ 0x1806A8E50 (std--_Ref_count_obj2__anonymous_namespace_--PinConsentPromptManager_--_Destroy.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180418054 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x18069B8B8 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x18069DFD8 (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 */

void __fastcall anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rbp
  _QWORD *i; // rdi
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v3 = *(_QWORD **)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 24); i != v3; i += 3 )
  {
    std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
      &v7,
      i);
    winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel(&v9);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
      v5,
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 32));
    std::_Deallocate<16,0>(*(void **)(a1 + 24), 8 * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v6 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
}
