/*
 * XREFs of ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D1C88
 * Callers:
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1801D4140 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1801D44F0 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x1801D3B58 (--$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV-$com_ptr_t.c)
 *     ??$query@UIUnknown@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801D3D18 (--$query@UIUnknown@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$com.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1805D1B98 (--$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@.c)
 *     ??$com_agile_query@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@W4AgileReferenceOptions@@@Z @ 0x1805D1BF8 (--$com_agile_query@AEAV-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA-AV-$.c)
 */

// Hidden C++ exception states: #wind=10
RTL_SRWLOCK *__fastcall FallbackFlyoutView::EnsureExperienceManager(__int64 a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v4; // r15
  __int64 *v5; // r14
  RTL_SRWLOCK *v6; // rbx
  __int64 (__fastcall *v7)(RTL_SRWLOCK *, __int64, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rax
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v13 = a2;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v11 = v4;
  v5 = (__int64 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      (__int64 *)(a1 + 24));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    v15 = *wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<IUnknown>((__int64 *)(a1 + 8), &v13);
    winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
      &v11,
      (__int64 (__fastcall *)(_QWORD, void *, void *, __int64 *))IUnknown_QueryService,
      &v15);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
    v12 = 0LL;
    v6 = v11;
    v7 = (__int64 (__fastcall *)(RTL_SRWLOCK *, __int64, __int64 *))*((_QWORD *)v11->Ptr + 6);
    v12 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.MeetNow",
      0x29u,
      0x28u);
    v8 = v7(v6, v17, &v12);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x63,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
        (const char *)(unsigned int)v8,
        (int)v11);
    wil::com_agile_query<wil::com_ptr_t<IInspectable,wil::err_exception_policy> &>(&v14, &v12);
    wil::AcquireSRWLockExclusive(&v13, v4);
    if ( !*v5 )
    {
      v9 = v14;
      v14 = 0LL;
      *v5 = v9;
    }
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      v5);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v11);
  }
  return a2;
}
