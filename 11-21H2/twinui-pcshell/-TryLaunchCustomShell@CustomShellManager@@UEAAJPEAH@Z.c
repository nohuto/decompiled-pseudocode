/*
 * XREFs of ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18015B940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18015B970 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803168CC (--$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CustomShellManager::TryLaunchCustomShell(CustomShellManager *this, int *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  if ( !CustomShellManager::IsCurrentProcessCustomShellHost(this) )
    return 0LL;
  wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(&v12);
  v11 = 0LL;
  v4 = *v12;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(v12, &v11);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v6 = v11;
  if ( v11 )
  {
    *a2 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x50,
        (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v8,
        v9);
  }
  else
  {
    v7 = RtlPublishWnfStateData(WNF_CSH_LAUNCH_EXPLORER_REQUESTED, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        (const char *)(unsigned int)v7,
        0);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v11);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v12);
  return 0LL;
}
