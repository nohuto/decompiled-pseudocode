/*
 * XREFs of ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x1800E5418
 * Callers:
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180106EF0 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CInsightsExperienceManager::RegisterForMonitorNotification(CInsightsExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 34);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  v4 = v3(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 425LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v10);
    goto LABEL_5;
  }
  v4 = (*v12)[3](v12, (GUID *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)), (char *)this + 312);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 427LL;
    goto LABEL_9;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  v7 = **v12;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  v4 = v7(v6, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 304);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 428LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  return v5;
}
