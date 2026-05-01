/*
 * XREFs of ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C1EB0
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804C30C4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804C3DC0 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x1804C1964 (--8-$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C19A4 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1804C41AC (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
        __int64 a1,
        __int64 a2,
        struct IDCompThumbnail *a3,
        __int64 a4,
        ...)
{
  struct IDCompThumbnail **v6; // r15
  _QWORD *v7; // r12
  float *v8; // rsi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail ***); // rbx
  unsigned int Color; // eax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IDCompThumbnail **v15; // rbx
  __int64 (__fastcall *v16)(struct IDCompThumbnail **, __int64, _QWORD, _QWORD); // rdi
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, __int64, __int64, GUID *, __int64 *); // rdi
  int v21; // eax
  float v22; // xmm0_4
  int DimmingLayerThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h]
  struct IDCompThumbnail **v28; // [rsp+A0h] [rbp+60h] BYREF
  va_list va; // [rsp+A0h] [rbp+60h]
  __int64 v30; // [rsp+A8h] [rbp+68h] BYREF
  va_list va1; // [rsp+A8h] [rbp+68h]
  va_list va2; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v28 = va_arg(va1, struct IDCompThumbnail **);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v27 = a4;
  v26 = a2;
  v6 = v28;
  *v28 = 0LL;
  v7 = (_QWORD *)v30;
  *(_QWORD *)v30 = 0LL;
  v8 = (float *)(a1 + 348);
  if ( *(_DWORD *)(a1 + 356) && !HighContrastAwareOpacity<float>::operator==(a1 + 348, a1 + 360) )
  {
    v28 = 0LL;
    v9 = *(_QWORD *)(a1 + 488);
    v10 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail ***))(*(_QWORD *)v9 + 112LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)va);
    v30 = 0x100000001LL;
    Color = CImmersiveColor::GetColor(0xABu);
    v12 = v10(v9, a3, Color, v30, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (struct IDCompThumbnail ***)va);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v15 = v28;
      v16 = (__int64 (__fastcall *)(struct IDCompThumbnail **, __int64, _QWORD, _QWORD))*((_QWORD *)*v28 + 4);
      HighContrastAwareOpacity<float>::operator float(v8);
      v12 = v16(v15, v17, 0LL, 0LL);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v18 = *(_DWORD *)(a1 + 356);
        v26 = 0LL;
        v19 = *(_QWORD *)(a1 + 488);
        v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v19 + 80LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
        LODWORD(v30) = 1;
        HIDWORD(v30) = v18;
        v21 = v20(v19, v27, v30, 3LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v26);
        v13 = v21;
        if ( v21 >= 0 )
        {
          v30 = a1;
          (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), __int64 *))(*(_QWORD *)v26 + 80LL))(
            v26,
            LambdaCustomPaintProc<_lambda_5e9c18940e8e88d162ff7728dae26002_,ID2D1DeviceContext *>,
            (__int64 *)va1);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
          *v6 = (struct IDCompThumbnail *)v28;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
          *v7 = v26;
          v13 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x39F,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)v21);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
        goto LABEL_12;
      }
      v14 = 919LL;
    }
    else
    {
      v14 = 918LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v12);
LABEL_12:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)va);
    return v13;
  }
  v22 = HighContrastAwareOpacity<float>::operator float(v8);
  DimmingLayerThumbnail = CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
                            *(struct ISwitchThumbnailFactory **)(a1 + 488),
                            v22,
                            a3,
                            v6);
  v13 = DimmingLayerThumbnail;
  if ( DimmingLayerThumbnail < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)DimmingLayerThumbnail);
  return v13;
}
