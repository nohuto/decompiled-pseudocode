/*
 * XREFs of ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180039930 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x18012B894 (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ??$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z @ 0x18012BA7C (--$wnf_publish@_K@wil@@YAXAEBU_WNF_STATE_NAME@@AEB_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NPSMDesktopShellComponent::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v6; // eax
  int AppHwnd; // eax
  __int64 v8; // rcx
  __int64 v9; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rax
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  NPSMDesktopShellComponent *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  HWND v15; // rax
  HWND v16; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-18h] BYREF
  HWND v18; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  switch ( a3 )
  {
    case 7:
      v16 = 0LL;
      AppHwnd = NPSMDesktopShellComponent::_GetAppHwnd((NPSMDesktopShellComponent *)a1, a2, &v16);
      if ( AppHwnd < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (__int64)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
          (const char *)(unsigned int)AppHwnd);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v9 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 144) = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (struct _RTL_CRITICAL_SECTION *)v16;
      *(_QWORD *)(a1 + 136) = v16;
      if ( v10 )
      {
        v17 = v10;
        wil::wnf_publish<unsigned __int64>(v8, &v17);
      }
      if ( a1 != -96 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      break;
    case 14:
      v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
      v17 = v11;
      if ( *(struct IApplicationView **)(a1 + 144) == a2 )
      {
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v17);
        v16 = 0LL;
        v13 = NPSMDesktopShellComponent::_GetAppHwnd(v12, a2, &v16);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6F,
            (__int64)"pcshell\\twinui\\nowplayingsessionmanager\\lib\\npsmdesktopshellcomponent.cpp",
            (const char *)(unsigned int)v13);
        EnterCriticalSection(v11);
        v19 = v11;
        if ( *(struct IApplicationView **)(a1 + 144) == a2 )
        {
          v15 = v16;
          *(_QWORD *)(a1 + 136) = v16;
          v18 = v15;
          wil::wnf_publish<unsigned __int64>(v14, &v18);
        }
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v19);
      }
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v17);
      break;
    case 9:
      v19 = 0LL;
      v6 = RtlPublishWnfStateData(WNF_NPSM_FOREGROUND_WINDOW, 0LL, &v19, 8LL) | 0x10000000;
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x352,
          (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)(unsigned int)v6,
          0);
      break;
  }
  return 0LL;
}
