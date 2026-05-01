/*
 * XREFs of ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x180173310
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180173280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$call@P6A?AUPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPhysicalGestureRecognizer@Input@Internal@UI@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x18017342C (--$call@P6A-AUPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@AEBUIActivationFactory@.c)
 *     ??$ActivateInstance@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPhysicalGestureRecognizer@Input@Internal@UI@23@XZ @ 0x1801A0E98 (--$ActivateInstance@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@IActivationFact.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchGestureProcessor::TouchGestureProcessor(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 (__fastcall *v6)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+48h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = &qword_18098E0C8;
  _InterlockedIncrement64(&qword_18098E0C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer>(&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_18098E0C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E0C8);
    v6 = _lambda_3da8103c4b1f6d0ac378af30f7531e06_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v3,
      a1 + 32,
      &v6);
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  v6 = (__int64 (__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *))(a1 + 120);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_WORD *)(a1 + 268) = 0;
  return a1;
}
