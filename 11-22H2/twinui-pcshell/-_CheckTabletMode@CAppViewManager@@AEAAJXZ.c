/*
 * XREFs of ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x1803B56C0
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1803AE6C0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppViewManager::_CheckTabletMode(IUnknown **this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         this[15],
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &ppvOut);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 947LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_9;
  }
  v2 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 951LL;
    goto LABEL_5;
  }
  if ( v7 )
    v3 = -2147019873;
  else
    v3 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v3;
}
