/*
 * XREFs of ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803AF700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1803B6F04 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::GetViewForSwitchByHostId(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int ViewForSwitchInternalByHostId; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v8 = a1 - 32;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  ViewForSwitchInternalByHostId = CAppViewManager::_GetViewForSwitchInternalByHostId(v8, a2, a3);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v11 = 862LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternalByHostId);
    goto LABEL_6;
  }
  ViewForSwitchInternalByHostId = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
                                    a5,
                                    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                    v7);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId < 0 )
  {
    v11 = 863LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  return v10;
}
