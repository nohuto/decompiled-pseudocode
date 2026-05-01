/*
 * XREFs of ?GetRemoteSessionWindowManagerAttributes@@YAXPEAUIRemoteSessionWindowManager@Shell@Internal@Windows@ABI@@AEAE1AEAPEAUHSTRING__@@@Z @ 0x18006EEB4
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GetRemoteSessionWindowManagerAttributes(
        struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        HSTRING *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v8 < 0 )
    {
      v9 = 241LL;
LABEL_10:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
        (const char *)(unsigned int)v8,
        v10);
      return;
    }
    if ( *a2 )
      return;
    v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *, unsigned __int8 *))(*(_QWORD *)a1 + 48LL))(
           a1,
           a3);
    if ( v8 < 0 )
    {
      v9 = 244LL;
      goto LABEL_10;
    }
    if ( *a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct ABI::Windows::Internal::Shell::IRemoteSessionWindowManager *, HSTRING *))(*(_QWORD *)a1 + 64LL))(
             a1,
             a4);
      if ( v8 < 0 )
      {
        v9 = 247LL;
        goto LABEL_10;
      }
    }
  }
}
