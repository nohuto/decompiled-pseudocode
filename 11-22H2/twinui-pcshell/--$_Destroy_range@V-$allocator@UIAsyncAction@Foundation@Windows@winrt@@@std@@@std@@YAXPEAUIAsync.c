/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6B98
 * Callers:
 *     _std::vector_winrt::Windows::Foundation::IAsyncAction_std::allocator_winrt::Windows::Foundation::IAsyncAction___::_Emplace_reallocate_winrt::Windows::Foundation::IAsyncAction__::_1_::catch$3 @ 0x1806C6E56 (_std--vector_winrt--Windows--Foundation--IAsyncAction_std--allocator_winrt--Windows--Foundation-.c)
 *     ??$_Uninitialized_move@PEAUIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6F08 (--$_Uninitialized_move@PEAUIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Fou.c)
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1806C7548 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 *     ?_Change_array@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIAsyncAction@Foundation@Windows@winrt@@_K1@Z @ 0x1806C8694 (-_Change_array@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Found.c)
 *     ?_Tidy@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1806C8818 (-_Tidy@-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Wi.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IAsyncAction>>(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
