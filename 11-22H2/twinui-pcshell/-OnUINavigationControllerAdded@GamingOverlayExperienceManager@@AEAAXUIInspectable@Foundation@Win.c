/*
 * XREFs of ?OnUINavigationControllerAdded@GamingOverlayExperienceManager@@AEAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@45@@Z @ 0x180403670
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180051A34 (--4hstring@winrt@@QEAAAEAU01@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIGameController@Input@Gaming@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1803F6F3C (--$as@UIGameController@Input@Gaming@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winr.c)
 *     ??$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@?$factory_cache_entry@URawGameController@Input@Gaming@Windows@winrt@@UIRawGameControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@Z @ 0x1803F7214 (--$call@AEAV_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@@-$factory_cache_entry@URawGameController.c)
 *     ?FromGameController@?$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@AEBUIGameController@Input@Gaming@Windows@3@@Z @ 0x1803FBD64 (-FromGameController@-$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameController.c)
 *     ?HardwareProductId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180400480 (-HardwareProductId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@G.c)
 *     ?HardwareVendorId@?$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804004CC (-HardwareVendorId@-$consume_Windows_Gaming_Input_IRawGameController@UIRawGameController@Input@Ga.c)
 *     ?IsWireless@?$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180401740 (-IsWireless@-$consume_Windows_Gaming_Input_IGameController@UIUINavigationController@Input@Gaming.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x180407698 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall GamingOverlayExperienceManager::OnUINavigationControllerAdded(
        GamingOverlayExperienceManager *this,
        struct IInspectable a2,
        const struct winrt::Windows::Gaming::Input::UINavigationController *a3)
{
  double v6; // xmm0_8
  struct winrt::impl::hstring_header *v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v9; // r8d
  __int64 v10; // rbx
  unsigned __int16 v11; // ax
  _WORD *v12; // rax
  unsigned int v13; // r8d
  _QWORD *v14; // rax
  unsigned __int16 v15; // ax
  _WORD *v16; // rax
  unsigned int v17; // r8d
  _QWORD *v18; // rax
  struct winrt::impl::hstring_header *v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  __time64_t Time; // [rsp+38h] [rbp-D0h] BYREF
  winrt::impl *v25; // [rsp+40h] [rbp-C8h] BYREF
  winrt::impl *v26; // [rsp+48h] [rbp-C0h] BYREF
  struct winrt::impl::hstring_header *v27; // [rsp+50h] [rbp-B8h] BYREF
  struct winrt::impl::hstring_header *v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-A0h]
  _QWORD v31[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v33[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v34[9]; // [rsp+B8h] [rbp-50h] BYREF
  _WORD v35[24]; // [rsp+102h] [rbp-6h] BYREF
  _WORD v36[3]; // [rsp+132h] [rbp+2Ah] BYREF

  v32[2] = a2.lpVtbl;
  Time = 0LL;
  _time64(&Time);
  v6 = _o__difftime64(Time, *((_QWORD *)this + 178));
  *((_QWORD *)this + 178) = Time;
  if ( v6 > (double)(winrt::impl::consume_Windows_Gaming_Input_IGameController<winrt::Windows::Gaming::Input::IUINavigationController>::IsWireless((__int64 *)a3) != 0
                   ? 6
                   : 2) )
  {
    v26 = 0LL;
    v25 = 0LL;
    winrt::impl::as<winrt::Windows::Gaming::Input::IGameController,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v23,
      *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a3);
    if ( v23 )
    {
      v29 = &v23;
      v30 = &qword_180990CA8;
      _InterlockedIncrement64(&qword_180990CA8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics> )
      {
        winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics>,
          &v22,
          &v23);
        _InterlockedDecrement64(&qword_180990CA8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990CA8);
        winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::RawGameController,winrt::Windows::Gaming::Input::IRawGameControllerStatics>::call<_lambda_825b5c2f3834d6ddb55fa03d184e4233_ &>(
          v8,
          (__int64)&v22,
          &v29);
      }
      v10 = v22;
      if ( v22 )
      {
        v11 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareProductId(&v22);
        v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v35, v11);
        std::wstring::wstring((__int64)v33, v12, v35);
        v14 = v33;
        if ( v33[3] >= 8uLL )
          v14 = (_QWORD *)v33[0];
        v31[0] = v14;
        v31[1] = v33[2];
        winrt::hstring::operator=(&v26, (__int64)v31, v13);
        std::wstring::_Tidy_deallocate((__int64)v33);
        v15 = winrt::impl::consume_Windows_Gaming_Input_IRawGameController<winrt::Windows::Gaming::Input::IRawGameController>::HardwareVendorId(&v22);
        v16 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v36, v15);
        std::wstring::wstring((__int64)v34, v16, v36);
        v18 = v34;
        if ( v34[3] >= 8uLL )
          v18 = (_QWORD *)v34[0];
        v32[0] = v18;
        v32[1] = v34[2];
        winrt::hstring::operator=(&v25, (__int64)v32, v17);
        std::wstring::_Tidy_deallocate((__int64)v34);
      }
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    }
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    v30 = (__int64 *)&v27;
    v27 = winrt::impl::duplicate_hstring(v26, v7, v9);
    v28 = winrt::impl::duplicate_hstring(v25, v19, v20);
    GamingOverlayExperienceManager::SignalGamepadConnect(v21, &v28, &v27);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v25);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v26);
  }
  if ( a2.lpVtbl->QueryInterface )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2.lpVtbl);
}
