/*
 * XREFs of ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066DD30
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18066DF90 (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSnapAssistControllerBase::_IsTabletMode(CSnapAssistControllerBase *this)
{
  char v1; // bl
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v5);
  if ( v2 >= 0 )
    return v5 == 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x4AC,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    (const char *)(unsigned int)v2);
  return v1;
}
