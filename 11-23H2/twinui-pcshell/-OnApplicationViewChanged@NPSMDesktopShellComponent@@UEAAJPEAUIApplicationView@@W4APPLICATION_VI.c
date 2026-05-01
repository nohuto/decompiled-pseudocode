/*
 * XREFs of ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180169770
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ??$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z @ 0x18004735C (--$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180068B20 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NPSMDesktopShellComponent::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int AppHwnd; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  struct _RTL_CRITICAL_SECTION *v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  NPSMDesktopShellComponent *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  HWND v14; // rax
  HWND v15; // [rsp+20h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-18h] BYREF
  HWND v17; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  switch ( a3 )
  {
    case 7:
      v15 = 0LL;
      AppHwnd = NPSMDesktopShellComponent::_GetAppHwnd((NPSMDesktopShellComponent *)a1, a2, &v15);
      if ( AppHwnd < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)AppHwnd);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v8 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 144) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (struct _RTL_CRITICAL_SECTION *)v15;
      *(_QWORD *)(a1 + 136) = v15;
      if ( v9 )
      {
        v16 = v9;
        wil::wnf_publish<unsigned __int64>(v7, (__int64)&v16);
      }
      if ( a1 != -96 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      break;
    case 14:
      v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v16 = v10;
      if ( *(struct IApplicationView **)(a1 + 144) == a2 )
      {
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v16);
        v15 = 0LL;
        v12 = NPSMDesktopShellComponent::_GetAppHwnd(v11, a2, &v15);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6F,
            (int)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v12);
        EnterCriticalSection(v10);
        v18 = v10;
        if ( *(struct IApplicationView **)(a1 + 144) == a2 )
        {
          v14 = v15;
          *(_QWORD *)(a1 + 136) = v15;
          v17 = v14;
          wil::wnf_publish<unsigned __int64>(v13, (__int64)&v17);
        }
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v18);
      }
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v16);
      break;
    case 9:
      v18 = 0LL;
      wil::wnf_publish<unsigned __int64>(a1, (__int64)&v18);
      break;
  }
  return 0LL;
}
