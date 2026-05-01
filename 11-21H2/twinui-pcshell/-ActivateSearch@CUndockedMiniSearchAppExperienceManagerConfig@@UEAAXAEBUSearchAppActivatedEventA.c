/*
 * XREFs of ?ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1320
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800716A8 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_1800716A8.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014C058 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_18014C058.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A6F14 (Windows--Internal--ComTaskPool--QueueTask__lambda_5a859347bbbbbb78c34c3a6938b2a83e___.c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::__lambda_5a859347bbbbbb78c34c3a6938b2a83e_ @ 0x1801A6FCC (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--__lambda_5a859347bbbbbb78c34c3a6938b2a83e_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FA4 (--1MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAA.c)
 *     ?StartActivity@MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1803A366C (-StartActivity@MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTel.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CUndockedMiniSearchAppExperienceManagerConfig::ActivateSearch(
        CUndockedMiniSearchAppExperienceManagerConfig *this,
        const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *a2)
{
  const unsigned __int16 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  winrt::impl *v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v12[40]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v14[8]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v15[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  (*(void (__fastcall **)(CUndockedMiniSearchAppExperienceManagerConfig *, winrt::impl **))(*(_QWORD *)this + 8LL))(
    this,
    v11);
  v4 = winrt::hstring::c_str((winrt::hstring *)v11);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"MiniSearchAppExperienceManager_ActivateAppAsync");
  v15[0] = &MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::`vftable';
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::StartActivity(
    (MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *)v15,
    v4);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)v15);
  v12[0] = (volatile signed __int32 *)&MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::`vftable';
  winrt::hstring::hstring((winrt::hstring *)v13, v11);
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)v14,
    a2);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_5a859347bbbbbb78c34c3a6938b2a83e___(
         v6,
         v5,
         *((_DWORD *)this + 2),
         (__int64)v12);
  lambda_5a859347bbbbbb78c34c3a6938b2a83e_::__lambda_5a859347bbbbbb78c34c3a6938b2a83e_(v12);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      (int)v11[0]);
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::~MiniSearchAppExperienceManager_ActivateAppAsync((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *)v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v11, v8, v9, v10);
}
