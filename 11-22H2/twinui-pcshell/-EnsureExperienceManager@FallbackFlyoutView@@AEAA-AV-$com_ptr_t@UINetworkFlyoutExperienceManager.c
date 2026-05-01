/*
 * XREFs of ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806C41EC
 * Callers:
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1802551D0 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x180255520 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x180254FE4 (--$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV-$com_ptr_t.c)
 *     ??$query@UIUnknown@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@1@XZ @ 0x180255044 (--$query@UIUnknown@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$com.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1806C3CEC (--$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@A6AJPEAUIUnknown@@.c)
 *     ??$com_agile_query@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@W4AgileReferenceOptions@@@Z @ 0x1806C3D54 (--$com_agile_query@AEAV-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA-AV-$.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall FallbackFlyoutView::EnsureExperienceManager(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v12 = v4;
  v5 = (__int64 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      (__int64 *)(a1 + 24));
    if ( v4 )
      ReleaseSRWLockShared(v4);
  }
  else
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    v15 = *wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<IUnknown>((__int64 *)(a1 + 8), &v12);
    winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
      v14,
      (__int64 (__fastcall *)(_QWORD, void *, void *, __int64 *))IUnknown_QueryService,
      &v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    v11 = 0LL;
    v6 = v14[0];
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14[0] + 48LL);
    v11 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.MeetNow",
      0x29u,
      0x28u);
    v8 = v7(v6, v17, &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x63,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
        (const char *)(unsigned int)v8,
        v11);
    wil::com_agile_query<wil::com_ptr_t<IInspectable,wil::err_exception_policy> &>(&v13, &v11);
    AcquireSRWLockExclusive(v4);
    v12 = v4;
    if ( !*v5 )
    {
      v9 = v13;
      v13 = 0LL;
      *v5 = v9;
    }
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      v5);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v14);
  }
  return a2;
}
