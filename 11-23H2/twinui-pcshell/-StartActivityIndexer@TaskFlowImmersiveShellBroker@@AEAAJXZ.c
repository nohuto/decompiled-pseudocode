/*
 * XREFs of ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F8CC
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@details@wil@@QEAA_NXZ @ 0x180111BE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@detail.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIActivityIndexer@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180498AB8 (--$ActivateInstance@UIActivityIndexer@Activities@Data@Internal@Windows@@@wil@@YA-AV-$com_ptr_t@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::StartActivityIndexer(TaskFlowImmersiveShellBroker *this)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveTimelineActivities>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveTimelineActivities>::GetImpl'::`2'::impl) )
    return 0LL;
  v3 = (__int64 *)wil::ActivateInstance<Windows::Internal::Data::Activities::IActivityIndexer>(&v11);
  v4 = *v3;
  *v3 = 0LL;
  v5 = *((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v11);
  v6 = *((_QWORD *)this + 35);
  v11 = v6;
  if ( v6
    && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6),
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30B,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v7,
      v9);
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v11);
    return v8;
  }
  else
  {
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v11);
    return 0LL;
  }
}
