/*
 * XREFs of ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A93A0
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800A9450 (--$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA-AV-$com_ptr_t@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::StartActivityIndexer(TaskFlowImmersiveShellBroker *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int64 *)wil::ActivateInstance<Windows::Internal::Data::Activities::IActivityIndexer>(&v10);
  v3 = *v2;
  *v2 = 0LL;
  v4 = *((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v10);
  v5 = *((_QWORD *)this + 35);
  v10 = v5;
  if ( v5
    && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5),
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F1,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v10);
    return v7;
  }
  else
  {
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v10);
    return 0LL;
  }
}
