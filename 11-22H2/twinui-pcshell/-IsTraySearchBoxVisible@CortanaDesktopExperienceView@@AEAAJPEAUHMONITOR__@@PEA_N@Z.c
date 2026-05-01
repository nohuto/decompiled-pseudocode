/*
 * XREFs of ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180483DF0
 * Callers:
 *     _lambda_ed6e4afdce009112f6d3449055a9dabd_::operator() @ 0x1801F1D80 (_lambda_ed6e4afdce009112f6d3449055a9dabd_--operator().c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1804813D0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180484FD0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180482F44 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::IsTraySearchBoxVisible(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        bool *a3)
{
  int EdgeUIManager; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF
  struct IEdgeUiManager *v12; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v12);
  v7 = EdgeUIManager;
  if ( EdgeUIManager >= 0 )
  {
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, int *))(*(_QWORD *)v12 + 96LL))(v12, &v11);
    v7 = EdgeUIManager;
    if ( EdgeUIManager >= 0 )
    {
      *a3 = v11 != 0;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 2410LL;
  }
  else
  {
    v8 = 2407LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v7;
}
