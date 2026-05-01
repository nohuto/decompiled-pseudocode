/*
 * XREFs of _lambda_68022f0d3b489cdc066e60d642ae628d_::operator() @ 0x180108C28
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68022f0d3b489cdc066e60d642ae628d___::Run @ 0x180108BD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_68022f0d3b489cdc066e60d6_ea_180108BD0.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Emplace@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180108DB0 (--$_Emplace@AEAW4WindowingEnvironmentType@@AEAV-$com_ptr_t@UIWindowingEnvironmentConfigInternal@.c)
 *     ??$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@wil@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1801093FC (--$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012AC70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_68022f0d3b489cdc066e60d642ae628d_::operator()(unsigned int **a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rax
  __int64 *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  int v16[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  v19 = 0LL;
  v2 = (__int64 *)*((_QWORD *)*a1 + 24);
  v3 = *v2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(v2, &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v4,
      v16[0]);
  v5 = *a1[1];
  v18 = 0LL;
  v6 = (__int64 *)*((_QWORD *)*a1 + 23);
  v7 = *v6;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v7 + 48))(v6, v5, &v18);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v8,
      v16[0]);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 23) + 80LL))(*((_QWORD *)*a1 + 23), v18);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v9,
      v16[0]);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v10,
      v16[0]);
  v21 = v18;
  v11 = (__int64 *)wil::MakeOrThrow<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
                     &v20,
                     a1,
                     &v21,
                     a1[1]);
  v12 = (__int64 *)a1[2];
  v13 = *v11;
  *v11 = 0LL;
  v14 = *v12;
  *v12 = (v13 + 40) & -(__int64)(v13 != 0);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v20 )
  {
    v20 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release();
  }
  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::_Emplace<enum WindowingEnvironmentType &,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy> &>(
    *a1 + 42,
    v16,
    a1[1],
    a1[2]);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
  return 0LL;
}
