/*
 * XREFs of ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18059B558
 * Callers:
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059AD90 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(
        IUnknown **this,
        struct IApplicationView **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(this[3], &stru_18089DCA8, &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343, &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(void *, struct IApplicationView **))(*(_QWORD *)ppvOut + 32LL))(ppvOut, a2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 417LL;
  }
  else
  {
    v6 = 416LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
