/*
 * XREFs of ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803A83B8
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803A5FBC (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z @ 0x1803A8834 (-IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1803A7B0C (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetStuckPlace(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3)
{
  int EdgeUIManager; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IEdgeUiManager *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v11);
  v7 = EdgeUIManager;
  if ( EdgeUIManager >= 0 )
  {
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v11 + 80LL))(
                      v11,
                      a3);
    v7 = EdgeUIManager;
    if ( EdgeUIManager >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 1894LL;
  }
  else
  {
    v8 = 1893LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v7;
}
