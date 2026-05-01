/*
 * XREFs of ?GetActivationComponent@ApplicationContainerActivation@@SA?AV?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806309E0
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x1806302A0 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180633DFC (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180627530 (--$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIServi.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall ApplicationContainerActivation::GetActivationComponent(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  wil::CoCreateInstance<IServiceProvider,wil::err_exception_policy>(
    (__int64 *)&v8,
    &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239);
  *a1 = 0LL;
  v2 = v8;
  v3 = *v8;
  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, _QWORD *))(v3 + 24))(
         v2,
         &GUID_ae76144d_7798_45b0_8065_d2af280de3d9,
         &GUID_ae76144d_7798_45b0_8065_d2af280de3d9,
         a1);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x169,
      (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
      (const char *)(unsigned int)v4,
      v6);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v8);
  return a1;
}
