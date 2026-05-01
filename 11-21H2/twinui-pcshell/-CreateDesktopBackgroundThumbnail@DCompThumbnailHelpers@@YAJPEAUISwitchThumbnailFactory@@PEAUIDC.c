/*
 * XREFs of ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1804C2140
 * Callers:
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804C3BC4 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x180520BF0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18052F2AC (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_EmptyStageBackgroundImage_SC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804C3040 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_EmptyStageBackgroundImage_SC@@@detail.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
        DCompThumbnailHelpers *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        const struct tagRECT *a4,
        const struct tagSIZE *a5)
{
  HWND Window; // rbx
  __int64 v10; // rdx
  bool v11; // si
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *); // rdi
  DWORD SysColor; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+50h] [rbp-B0h]
  _DWORD v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-98h] BYREF
  _WORD pvParam[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  Window = 0LL;
  *a5 = 0LL;
  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  if ( IsPPIEdition() )
  {
    LOBYTE(v10) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_EmptyStageBackgroundImage_SC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Hub_EmptyStageBackgroundImage_SC>::GetImpl'::`2'::impl,
      v10);
    Window = FindWindowExW(0LL, 0LL, L"Windows.UI.Core.CoreWindow", L"PPIEmptyStage");
    v11 = Window != 0LL;
  }
  else
  {
    v11 = 0;
  }
  if ( pvParam[0] && (unsigned int)_o__wcsicmp(pvParam, L"(None)") && !IsPPIEdition() || v11 )
  {
    if ( !Window )
    {
      Window = GetShellWindow();
      if ( !Window )
      {
        v15 = -2147019873;
        v16 = 268LL;
        goto LABEL_18;
      }
    }
    Rect = 0LL;
    GetWindowRect(Window, &Rect);
    v17 = *(_QWORD *)this;
    v20[0] = *(_DWORD *)a3 - Rect.left;
    v20[2] = *((_DWORD *)a3 + 2) - Rect.left;
    v20[3] = *((_DWORD *)a3 + 3) - Rect.top;
    v20[1] = *((_DWORD *)a3 + 1) - Rect.top;
    v15 = (*(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *))(v17 + 64))(
            this,
            a2,
            Window,
            0LL,
            a4,
            v20,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            a5);
    if ( v15 < 0 )
    {
      v16 = 283LL;
      goto LABEL_18;
    }
  }
  else
  {
    if ( a4 )
    {
      v12 = *(_QWORD *)&a4->left;
    }
    else
    {
      LODWORD(v19) = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
      HIDWORD(v19) = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
      v12 = v19;
    }
    v13 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *))(*(_QWORD *)this + 112LL);
    SysColor = GetSysColor(1);
    v15 = v13(this, a2, SysColor, v12, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a5);
    if ( v15 < 0 )
    {
      v16 = 264LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"desktop\\private\\shell\\inc\\DCompThumbnailFactory\\DCompThumbnailHelpers.h",
        (const char *)(unsigned int)v15);
    }
  }
  return (unsigned int)v15;
}
