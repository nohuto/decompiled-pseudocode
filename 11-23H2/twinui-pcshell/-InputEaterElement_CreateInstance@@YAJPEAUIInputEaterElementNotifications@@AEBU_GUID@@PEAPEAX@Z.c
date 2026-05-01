/*
 * XREFs of ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x18058E314
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x18057DA64 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x18058E0D0 (--$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL.c)
 */

__int64 __fastcall InputEaterElement_CreateInstance(
        struct IInputEaterElementNotifications *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInputEaterElementNotifications *v9; // [rsp+30h] [rbp+8h] BYREF
  InputEaterElement *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<InputEaterElement,InputEaterElement,IInputEaterElementNotifications * &>(
         &v10,
         (__int64 *)&v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 46LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\inputeaterelement.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (**(__int64 (__fastcall ***)(InputEaterElement *, GUID *, void **))v10)(
         v10,
         &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 47LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v5;
}
