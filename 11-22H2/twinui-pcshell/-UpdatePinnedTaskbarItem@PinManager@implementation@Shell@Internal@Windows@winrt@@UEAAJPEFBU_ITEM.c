/*
 * XREFs of ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180084BFC (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ @ 0x18024F828 (--1PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18024F998 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1802509D8 (_anonymous_namespace_--ManageTaskbarPin.c)
 *     ?StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1802524F0 (-StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802525D0 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803966F4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?TryGetProcessImageName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1806A7C78 (-TryGetProcessImageName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAX@.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18 (_anonymous_namespace_--TryGetProcessPublisher.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 ProcessPublisher; // rax
  const unsigned __int16 *v9; // rdi
  __int64 ProcessImageName; // rax
  const unsigned __int16 *v11; // rbx
  unsigned int v12; // ebx
  _BYTE v14[8]; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v15[32]; // [rsp+28h] [rbp-1C0h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-180h] BYREF
  _QWORD v18[40]; // [rsp+70h] [rbp-178h] BYREF

  v17 = 0LL;
  v7 = *(_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                    a1,
                    (winrt *)v14);
  wil::GetProcessHandleForClientOfObject(&v17, v7);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v14);
  memset_0(v18, 0, sizeof(v18));
  ProcessPublisher = anonymous_namespace_::TryGetProcessPublisher(v16);
  v9 = (const unsigned __int16 *)ProcessPublisher;
  if ( *(_QWORD *)(ProcessPublisher + 24) >= 8uLL )
    v9 = *(const unsigned __int16 **)ProcessPublisher;
  ProcessImageName = TryGetProcessImageName(v15, v17);
  v11 = (const unsigned __int16 *)ProcessImageName;
  if ( *(_QWORD *)(ProcessImageName + 24) >= 8uLL )
    v11 = *(const unsigned __int16 **)ProcessImageName;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v18);
  v18[0] = &PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::`vftable';
  PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::StartActivity(
    (PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *)v18,
    v11,
    v9);
  std::wstring::_Tidy_deallocate((__int64)v15);
  std::wstring::_Tidy_deallocate((__int64)v16);
  v12 = anonymous_namespace_::ManageTaskbarPin(a2, a3, a4);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v18,
    v12);
  PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::~PinManagerUpdatePinnedTaskbarItem((PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *)v18);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v17);
  return v12;
}
