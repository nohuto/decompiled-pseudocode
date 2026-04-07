/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z @ 0x180104EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1800A276C (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Delete_this(
        __int64 a1,
        char a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 8);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  if ( a2 )
    std::_Deallocate<8,0>(a1);
}
