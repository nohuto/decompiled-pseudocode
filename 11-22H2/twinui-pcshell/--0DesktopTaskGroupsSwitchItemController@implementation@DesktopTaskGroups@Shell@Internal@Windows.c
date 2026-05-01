/*
 * XREFs of ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800DDFA8
 * Callers:
 *     ?ActivateInstance@?$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180195280 (-ActivateInstance@-$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@Deskto.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801A2090 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$as@UITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIObjectWithSite@@$0A@@impl@winrt@@YA?AUITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@Windows@1@PEAUIObjectWithSite@@@Z @ 0x1801ABF50 (--$as@UITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIObjectWithSite@@$0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=9
winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *__fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this)
{
  __int64 *v2; // r15
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, __int64 *); // r13
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  void (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // r15
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17[3]; // [rsp+40h] [rbp-30h] BYREF
  GUID v18; // [rsp+58h] [rbp-18h] BYREF

  v17[2] = (__int64)this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v18 = CLSID_ImmersiveShell;
  winrt::create_instance<IServiceProvider>(v17, &v18);
  v5 = v17[0];
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v17[0] + 24LL);
  v7 = *v2;
  *v2 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = v6(v5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v2);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_716be2a0_d1cd_4fdb_9528_785c2866c6a5,
         &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
         &v15);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  winrt::impl::as<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IObjectWithSite,0>(&v16, v15);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 48, &v16);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v10 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v11 = *v3;
  *v3 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v10(v5, &SID_VirtualDesktopManager, &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c, v3);
  v12 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v13 = *v4;
  *v4 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v12(v5, &SID_VirtualDesktopPinnedApps, &GUID_4ce81583_1e4c_4632_a621_07a53543148f, v4);
  if ( v15 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v15);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v17);
  return this;
}
