/*
 * XREFs of _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_ @ 0x180682B80
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows_::_1_::dtor$1 @ 0x1806856D3 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806856D3.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 24);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
