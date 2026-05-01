/*
 * XREFs of ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180084BFC (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7FC (--1PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18024F998 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1802509D8 (_anonymous_namespace_--ManageTaskbarPin.c)
 *     ?StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x180252410 (-StartActivity@PinManagerUnpinTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802525D0 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803966F4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?TryGetProcessImageName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1806A7C78 (-TryGetProcessImageName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rdx
  __int64 ProcessPublisher; // rax
  const unsigned __int16 *v7; // rdi
  __int64 ProcessImageName; // rax
  const unsigned __int16 *v9; // rbx
  unsigned int v10; // ebx
  _BYTE v12[8]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-1B0h] BYREF
  _BYTE v14[32]; // [rsp+48h] [rbp-190h] BYREF
  __int64 v15; // [rsp+68h] [rbp-170h] BYREF
  _QWORD v16[40]; // [rsp+70h] [rbp-168h] BYREF

  v15 = 0LL;
  v5 = *(_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                    a1,
                    (winrt *)v12);
  wil::GetProcessHandleForClientOfObject(&v15, v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v12);
  memset_0(v16, 0, sizeof(v16));
  ProcessPublisher = anonymous_namespace_::TryGetProcessPublisher(v14);
  v7 = (const unsigned __int16 *)ProcessPublisher;
  if ( *(_QWORD *)(ProcessPublisher + 24) >= 8uLL )
    v7 = *(const unsigned __int16 **)ProcessPublisher;
  ProcessImageName = TryGetProcessImageName(v13, v15);
  v9 = (const unsigned __int16 *)ProcessImageName;
  if ( *(_QWORD *)(ProcessImageName + 24) >= 8uLL )
    v9 = *(const unsigned __int16 **)ProcessImageName;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
  v16[0] = &PinManagerTelemetry::PinManagerUnpinTaskbarItem::`vftable';
  PinManagerTelemetry::PinManagerUnpinTaskbarItem::StartActivity(
    (PinManagerTelemetry::PinManagerUnpinTaskbarItem *)v16,
    v9,
    v7);
  std::wstring::_Tidy_deallocate((__int64)v13);
  std::wstring::_Tidy_deallocate((__int64)v14);
  v10 = anonymous_namespace_::ManageTaskbarPin(a2, 0LL, a3);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v16,
    v10);
  PinManagerTelemetry::PinManagerUnpinTaskbarItem::~PinManagerUnpinTaskbarItem((PinManagerTelemetry::PinManagerUnpinTaskbarItem *)v16);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v15);
  return v10;
}
