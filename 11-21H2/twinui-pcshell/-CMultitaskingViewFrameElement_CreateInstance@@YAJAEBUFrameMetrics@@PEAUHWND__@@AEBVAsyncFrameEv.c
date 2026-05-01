/*
 * XREFs of ?CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@PEAPEAU5@@Z @ 0x1804C1D00
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804B0680 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@55AEAPEAUIAnimationCoordinator@@@Z @ 0x1804C1578 (--$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement_CreateInstance(
        const struct FrameMetrics *a1,
        HWND a2,
        const struct AsyncFrameEvents *a3,
        struct ISwitchThumbnailFactory *a4,
        struct IMultitaskingViewElement *a5,
        struct IMultitaskingViewElement *a6,
        struct IMultitaskingViewElement *a7,
        struct IAnimationCoordinator *a8,
        struct IMultitaskingViewElement **a9)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HWND v13; // [rsp+68h] [rbp+10h] BYREF
  struct ISwitchThumbnailFactory *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a2;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrameElement,IMultitaskingViewElement,FrameMetrics const &,HWND__ * &,AsyncFrameEvents const &,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IAnimationCoordinator * &>(
         a9,
         a1,
         &v13,
         a3,
         &v14,
         &a5,
         &a6,
         &a7,
         &a8);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DE,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
