/*
 * XREFs of ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1804C41AC
 * Callers:
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C1EB0 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804C30C4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
        struct ISwitchThumbnailFactory *a1,
        double a2,
        struct IDCompThumbnail *a3,
        struct IDCompThumbnail **a4)
{
  __int64 (__fastcall *v7)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail **); // rbx
  unsigned int Color; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IDCompThumbnail *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  *a4 = 0LL;
  v15 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)a1 + 112LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
  v16 = 0x100000001LL;
  Color = CImmersiveColor::GetColor(0xABu);
  v9 = v7(a1, a3, Color, v16, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v15);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 32LL))(
           v15,
           v10,
           0LL,
           0LL);
    v11 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      *a4 = v15;
      v11 = 0;
      goto LABEL_7;
    }
    v12 = 889LL;
  }
  else
  {
    v12 = 887LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
    (const char *)(unsigned int)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
  return v11;
}
