/*
 * XREFs of ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x180093F24
 * Callers:
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180181A8C (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800942B4 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18012B520 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     ??0?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@V?$initializer_list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x18012B954 (--0-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4S.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18012C948 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x18019E350 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // [rsp+24h] [rbp-DCh] BYREF
  int v16; // [rsp+28h] [rbp-D8h] BYREF
  int v17; // [rsp+2Ch] [rbp-D4h] BYREF
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  int *v25; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+68h] [rbp-98h] BYREF
  int *v27; // [rsp+70h] [rbp-90h] BYREF
  int *v28; // [rsp+78h] [rbp-88h] BYREF
  int *v29; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v30[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int128 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  __int64 v45; // [rsp+160h] [rbp+60h] BYREF

  v30[2] = a1;
  v15 = 16;
  v25 = &v15;
  v30[3] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v20,
      &v15);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      a1,
      &v20,
      &v25);
  }
  v35 = 16;
  v5 = v20;
  v20 = 0LL;
  v36 = v5;
  v16 = 2;
  v26 = &v16;
  v30[4] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v21,
      &v16);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v4,
      &v21,
      &v26);
  }
  v37 = 2;
  v7 = v21;
  v21 = 0LL;
  v38 = v7;
  v17 = 6;
  v27 = &v17;
  v30[5] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v22,
      &v17);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v6,
      &v22,
      &v27);
  }
  v39 = 6;
  v9 = v22;
  v22 = 0LL;
  v40 = v9;
  v18 = 4;
  v28 = &v18;
  v30[6] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v23,
      &v18);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v8,
      &v23,
      &v28);
  }
  v41 = 4;
  v11 = v23;
  v23 = 0LL;
  v42 = v11;
  v19 = 0;
  v29 = &v19;
  v30[7] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v24,
      &v19);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v10,
      &v24,
      &v29);
  }
  v43 = 0;
  v12 = v24;
  v24 = 0LL;
  v44 = v12;
  v30[0] = &v35;
  v30[1] = &v45;
  std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
    v31,
    v30);
  winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap(
    a1,
    a2,
    v31);
  std::_Deallocate<16,0>(v33, (*((_QWORD *)&v33 + 1) - v33) & 0xFFFFFFFFFFFFFFF8uLL);
  v33 = 0LL;
  v34 = 0LL;
  std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
    v13,
    v32);
  std::_Deallocate<16,0>(v32, 32LL);
  `eh vector destructor iterator'(
    &v35,
    0x10uLL,
    5uLL,
    std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>);
  return a1;
}
