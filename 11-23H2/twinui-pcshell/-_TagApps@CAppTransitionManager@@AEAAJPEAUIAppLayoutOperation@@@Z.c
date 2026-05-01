/*
 * XREFs of ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180598FD4
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAppTransitionTagger@@QEAA@XZ @ 0x180597114 (--1CAppTransitionTagger@@QEAA@XZ.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x180598CFC (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180599128 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagApps(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int i; // esi
  __int64 v9; // rax
  int (__fastcall *v10)(struct IAppLayoutOperation *, _QWORD, GUID *, struct IAppLayoutOperationItem **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct IAppLayoutOperationItem *v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 23);
  v4 = *((_DWORD *)this + 75);
  v15 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, (char *)this + 264, v4);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    for ( i = 0; i < v13; ++i )
    {
      v9 = *(_QWORD *)a2;
      v14 = 0LL;
      v10 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, struct IAppLayoutOperationItem **))(v9 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
      if ( v10(a2, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v14) >= 0 )
        CAppTransitionManager::_PrepareTaggingInfoForApp(this, v14);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
    }
    if ( *((_DWORD *)this + 71) == 1 && !*((_BYTE *)this + 281) )
      CAppTransitionManager::_TagBuffer(this, a2);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  CAppTransitionTagger::~CAppTransitionTagger((CAppTransitionTagger *)&v15);
  return v7;
}
