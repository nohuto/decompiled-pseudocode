/*
 * XREFs of ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803A89E0
 * Callers:
 *     _lambda_a0005991c4d1e4c1aea655bfe9fd5c05_::operator() @ 0x1803A55A8 (_lambda_a0005991c4d1e4c1aea655bfe9fd5c05_--operator().c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803A5FBC (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803A9BB0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1803A7B0C (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
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
    v8 = 2411LL;
  }
  else
  {
    v8 = 2408LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v7;
}
