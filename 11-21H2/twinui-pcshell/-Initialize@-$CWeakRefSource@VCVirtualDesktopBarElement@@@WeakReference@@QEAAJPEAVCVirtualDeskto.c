/*
 * XREFs of ?Initialize@?$CWeakRefSource@VCVirtualDesktopBarElement@@@WeakReference@@QEAAJPEAVCVirtualDesktopBarElement@@@Z @ 0x1804C6A6C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C6CA0 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@V12@AEAPEAVCVirtualDesktopBarElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@AEAPEAVCVirtualDesktopBarElement@@@Z @ 0x1804C6638 (--$MakeAndInitialize@V-$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@V12@AEAPEAVCV.c)
 */

__int64 __fastcall WeakReference::CWeakRefSource<CVirtualDesktopBarElement>::Initialize(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CVirtualDesktopBarElement>,WeakReference::CWeakReference<CVirtualDesktopBarElement>,CVirtualDesktopBarElement * &>(
         a1,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v3);
  return v4;
}
