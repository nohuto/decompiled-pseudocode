/*
 * XREFs of ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x180586B38
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1802E556E (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@V12@AEAPEAVSwitchItemThumbnailElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@AEAPEAVSwitchItemThumbnailElement@@@Z @ 0x180586414 (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@V12@AEAPEAVS.c)
 */

__int64 __fastcall WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<SwitchItemThumbnailElement>,WeakReference::CWeakReference<SwitchItemThumbnailElement>,SwitchItemThumbnailElement * &>(
         a1,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v3);
  return v4;
}
