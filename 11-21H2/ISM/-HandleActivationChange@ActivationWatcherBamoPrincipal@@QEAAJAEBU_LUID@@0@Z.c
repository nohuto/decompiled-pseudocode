/*
 * XREFs of ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x18008DAEC
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x18008AEA4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008D28C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x18008E480 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18008E4C4 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_18008E4C4.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x18008E500 (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800E6D20 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ActivationWatcherBamoPrincipal::HandleActivationChange(
        ActivationWatcherBamoPrincipal *this,
        const struct _LUID *a2,
        const struct _LUID *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 *ActivatableEntity; // rax
  const char *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  int ViewIdFromWindowId; // eax
  int TopLevelHostView; // eax
  __int64 WindowIdFromViewId; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rbx
  const char *v23; // r9
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct _LUID v29; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x8000LL) == *(_QWORD *)(v6 + 24) )
  {
    v29 = *a3;
    v27[0] = (__int64)*a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      byte_1801FF738,
      v7,
      v8,
      (__int64)v27,
      (__int64)&v29);
  }
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v10 = 0LL;
  v27[0] = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  if ( !(unsigned __int8)operator==(a2, &v29) )
  {
    ActivatableEntity = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, &v25, a2);
    v10 = *ActivatableEntity;
    *ActivatableEntity = 0LL;
    v27[0] = v10;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    if ( !v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        62LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        v13);
    ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(retaddr, *(_QWORD *)(v10 + 88), 1);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 40LL))(v10 + 8);
    v15 = *(_QWORD *)(v10 + 8);
    if ( v14 )
      v16 = (*(__int64 (__fastcall **)(__int64))(v15 + 40))(v10 + 8);
    else
      v16 = (*(__int64 (__fastcall **)(__int64))(v15 + 24))(v10 + 8);
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v16);
    TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchy, ViewIdFromWindowId);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, TopLevelHostView);
    v20 = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, &v25, WindowIdFromViewId);
    v11 = *v20;
    *v20 = 0LL;
    v26 = v11;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
  }
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 72LL))((char *)this + 8, v11);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, v10);
  v25 = 0LL;
  if ( !(unsigned __int8)operator==(a3, &v29) )
  {
    v21 = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, &v29, a3);
    v22 = *v21;
    *v21 = 0LL;
    v25 = v22;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v29);
    if ( !v22 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        79LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        v23);
    ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(retaddr, *(_QWORD *)(v22 + 88), 0);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v27);
  return 0LL;
}
