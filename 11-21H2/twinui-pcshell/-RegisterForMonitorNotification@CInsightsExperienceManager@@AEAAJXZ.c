/*
 * XREFs of ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x1800D5498
 * Callers:
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FEEB0 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CInsightsExperienceManager::RegisterForMonitorNotification(CInsightsExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rsi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 34);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  v4 = v3(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 455LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_5;
  }
  v4 = (*v11)[3](v11, (GUID *)((char *)this + 24), (char *)this + 312);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 457LL;
    goto LABEL_9;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  v7 = **v11;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  v4 = v7(v6, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 304);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 458LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  return v5;
}
