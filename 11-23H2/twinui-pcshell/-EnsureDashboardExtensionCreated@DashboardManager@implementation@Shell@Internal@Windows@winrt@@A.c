/*
 * XREFs of ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x180239044
 * Callers:
 *     _lambda_344467b8d2742b929ca91d6f35e8528a_::operator() @ 0x180236338 (_lambda_344467b8d2742b929ca91d6f35e8528a_--operator().c)
 *     _lambda_bdc0369aff36f5007facc09437a0c890_::operator() @ 0x1802373BC (_lambda_bdc0369aff36f5007facc09437a0c890_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIClassFactory@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180085278 (--$CoCreateInstance@UIClassFactory@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIClassFac.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x180230ADC (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802356E8 (--1-$test_data_control@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802358F4 (--1-$test_watcher@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int128 *a3)
{
  char IsDashboardExtensionPresent; // di
  volatile signed __int32 *v6; // rbx
  winrt::Windows::Foundation::IUnknown *v7; // rax
  char v8; // bl
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rdi
  char v11; // di
  int v12; // eax
  int v13; // eax
  void (__fastcall ****v14)(_QWORD, __int64 *, __int64 *); // rdi
  char v15; // si
  volatile signed __int32 *v16; // rbx
  int v18; // [rsp+20h] [rbp-79h]
  LPVOID v19; // [rsp+30h] [rbp-69h] BYREF
  int v20; // [rsp+38h] [rbp-61h]
  volatile signed __int32 *v21; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-49h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-41h] BYREF
  __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+70h] [rbp-29h] BYREF
  RTL_SRWLOCK *v28; // [rsp+78h] [rbp-21h] BYREF
  __int128 v29; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v30[48]; // [rsp+90h] [rbp-9h] BYREF
  volatile signed __int32 *v31; // [rsp+C0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 (__fastcall ***v33)(_QWORD, void *, __int64 *); // [rsp+100h] [rbp+67h] BYREF
  __int64 v34; // [rsp+110h] [rbp+77h] BYREF
  __int64 v35; // [rsp+118h] [rbp+7Fh] BYREF

  v20 = 0;
  v29 = *a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>>(
    (struct wil::details::IFailureCallback *)v30,
    &v29);
  IsDashboardExtensionPresent = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent();
  v6 = v31;
  v21 = v31;
  if ( v31 )
    _InterlockedIncrement(v31 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v6 + 2));
  *((_BYTE *)v6 + 265) = IsDashboardExtensionPresent;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v21);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 128), &v28);
  if ( *(_BYTE *)(a1 + 212) )
  {
    v7 = (winrt::Windows::Foundation::IUnknown *)v23;
    v8 = 1;
    v9 = 0LL;
  }
  else
  {
    v7 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
           (winrt::Windows::Foundation::IUnknown *)v22,
           (_QWORD *)(a1 + 136));
    v8 = 2;
    v9 = *(_QWORD *)v7;
  }
  *(_QWORD *)v7 = 0LL;
  v27 = v9;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v22);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v23);
  }
  if ( v9 )
    goto LABEL_15;
  v10 = v31;
  v24 = v31;
  if ( v31 )
    _InterlockedIncrement(v31 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v10 + 2));
  v8 |= 4u;
  if ( !*((_BYTE *)v10 + 265) )
LABEL_15:
    v11 = 0;
  else
    v11 = 1;
  if ( (v8 & 4) != 0 )
    tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v24);
  if ( v11 )
  {
    wil::CoCreateInstance<IClassFactory,wil::err_exception_policy>(&v19);
    v33 = 0LL;
    v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v19 + 24LL))(
            v19,
            0LL,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v33);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6AF,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v12,
        v18);
    if ( v33 )
    {
      v35 = 0LL;
      v13 = (**v33)(v33, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>, &v35);
      if ( v13 < 0 )
        winrt::throw_hresult((unsigned int)v13);
      v34 = v35;
    }
    else
    {
      v34 = 0LL;
    }
    v14 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 136);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(a1 + 136),
      (winrt::Windows::Foundation::IUnknown *)&v34);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v34);
    *(_BYTE *)(a1 + 212) = 0;
    if ( v33 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v33);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  }
  else
  {
    v14 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 136);
  }
  v25 = 0LL;
  v15 = winrt::Windows::Foundation::operator==(v14, &v25);
  v16 = v31;
  v26 = v31;
  if ( v31 )
    _InterlockedIncrement(v31 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
  *((_BYTE *)v16 + 264) = v15;
  tip2::test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_data_control<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((void **)&v26);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    a2,
    v14);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v27);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v28);
  tip2::test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::~test_watcher<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>((__int64)v30);
  return a2;
}
