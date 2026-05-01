/*
 * XREFs of _lambda_f7fbaeab830b2805243d9c3b7139d78f_::operator() @ 0x180413B58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f7fbaeab830b2805243d9c3b7139d78f___::Run @ 0x180416C50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f7fbaeab830b2805243d9c3b7139d78f___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F33FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager@@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8EC8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f7fbaeab830b2805243d9c3b7139d78f_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+18h] BYREF

  ***(_QWORD ***)a1 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
    v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 120LL);
    if ( v3 )
    {
      v12 = 0LL;
      v4 = *v3;
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v4 + 48))(v3, &v12);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager>::GetImpl'::`2'::impl,
        1u,
        v5,
        v6);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        &v12,
        &v13);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 520LL))(v13, **(_QWORD **)a1);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x442,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v10);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v12);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x445,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
