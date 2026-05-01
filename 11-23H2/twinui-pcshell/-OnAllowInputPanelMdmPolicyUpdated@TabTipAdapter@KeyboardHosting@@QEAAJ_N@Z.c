/*
 * XREFs of ?OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x1800AD118
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAllowInputPanelMdmPolicyUpdated(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 16) + 176LL))(
         *((_QWORD *)this + 16),
         a2,
         &v8);
  if ( v3 < 0 )
  {
    v4 = 3013LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3,
      v6);
    return (unsigned int)v3;
  }
  if ( v8 == 2 )
  {
    v3 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(this, 2LL, *((unsigned int *)this + 120));
    if ( v3 < 0 )
    {
      v4 = 3017LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
