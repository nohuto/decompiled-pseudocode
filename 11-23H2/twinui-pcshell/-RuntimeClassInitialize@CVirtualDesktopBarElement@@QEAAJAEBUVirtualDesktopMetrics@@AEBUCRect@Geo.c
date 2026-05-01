/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x180581630
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@$$QEAPEAUIObservableObjectArray@@$$QEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x18056C340 (--$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMe.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x180572A0C (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18057B1B8 (-CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU.c)
 *     ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___ @ 0x180580D1C (ObservableProperty_bool_--AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___.c)
 *     ??$As@UIVirtualDesktopContainerElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopContainerElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180580E50 (--$As@UIVirtualDesktopContainerElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEB.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@012@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x18058118C (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@A_ea_18058118C.c)
 *     ?Initialize@?$CWeakRefSource@VCVirtualDesktopBarElement@@@WeakReference@@QEAAJPEAVCVirtualDesktopBarElement@@@Z @ 0x1805813FC (-Initialize@-$CWeakRefSource@VCVirtualDesktopBarElement@@@WeakReference@@QEAAJPEAVCVirtualDeskto.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180581F5C (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopBarElement::RuntimeClassInitialize(
        CVirtualDesktopBarElement *this,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray *a4,
        struct IVirtualDesktopElementFactory *a5,
        struct ISwitchThumbnailFactory *a6)
{
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  char v12; // r12
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int Color; // edi
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rsi
  unsigned int v19; // r14d
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  struct ISwitchThumbnailFactory **v22; // rdi
  struct ISwitchThumbnailFactory *v23; // rbx
  __int64 (__fastcall *v24)(struct ISwitchThumbnailFactory *, __int64, __int64, GUID *, char *); // rdi
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdx
  int Instance; // eax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // [rsp+38h] [rbp-81h]
  __int64 v34; // [rsp+50h] [rbp-69h] BYREF
  struct ISwitchThumbnailFactory *v35; // [rsp+58h] [rbp-61h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-59h] BYREF
  struct ISwitchThumbnailFactory *v37; // [rsp+68h] [rbp-51h] BYREF
  struct IVirtualDesktopElementFactory *v38; // [rsp+70h] [rbp-49h] BYREF
  struct IObservableObjectArray *v39[2]; // [rsp+78h] [rbp-41h] BYREF
  char v40; // [rsp+88h] [rbp-31h]
  __int128 v41; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v42[2]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v41 = a3;
  v39[0] = a4;
  v35 = a5;
  v38 = a5;
  v7 = (_OWORD *)((char *)this + 232);
  v8 = 3LL;
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    *(v7 - 1) = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    --v8;
  }
  while ( v8 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  v7[2] = *((_OWORD *)a2 + 2);
  v7[3] = *((_OWORD *)a2 + 3);
  v7[4] = *((_OWORD *)a2 + 4);
  v7[5] = *((_OWORD *)a2 + 5);
  v7[6] = *((_OWORD *)a2 + 6);
  v9 = (__int64 *)((char *)this + 224);
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 28, (__int64)a6);
  v10 = *((_QWORD *)this + 28);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v10 + 120LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 11);
  v12 = 1;
  v34 = 0x100000001LL;
  v13 = v11(v10, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
  if ( v13 < 0 )
  {
    v14 = 19LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  Color = CImmersiveColor::GetColor(0xB6u);
  v17 = *v9;
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v9 + 112LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 96);
  v34 = 0x100000001LL;
  v13 = v18(
          v17,
          *((_QWORD *)this + 11),
          Color,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 768);
  if ( v13 < 0 )
  {
    v14 = 21LL;
    goto LABEL_5;
  }
  v19 = CImmersiveColor::GetColor(0x490u);
  if ( HIBYTE(v19) )
  {
    v20 = *v9;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v9 + 112LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 97);
    v34 = 0x100000001LL;
    v13 = v21(
            v20,
            *((_QWORD *)this + 11),
            v19,
            0x100000001LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 776);
    if ( v13 < 0 )
    {
      v14 = 27LL;
      goto LABEL_5;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 97) + 32LL))(
            *((_QWORD *)this + 97),
            *((_QWORD *)this + 97),
            0LL,
            0LL);
    if ( v13 < 0 )
    {
      v14 = 28LL;
      goto LABEL_5;
    }
  }
  v22 = (struct ISwitchThumbnailFactory **)((char *)this + 728);
  v13 = WeakReference::CWeakRefSource<CVirtualDesktopBarElement>::Initialize((__int64 *)this + 91, (__int64)this);
  if ( v13 < 0 )
  {
    v14 = 31LL;
    goto LABEL_5;
  }
  v23 = *v22;
  v37 = *v22;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
  v39[1] = this;
  v40 = 1;
  v24 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, __int64, __int64, GUID *, char *))(*(_QWORD *)v35 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 94);
  v25 = v24(v35, *v9, 1LL, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (char *)this + 752);
  v26 = v25;
  if ( v25 >= 0 )
  {
    v25 = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
            this,
            *((_QWORD *)this + 94));
    v26 = v25;
    if ( v25 < 0 )
    {
      v27 = 41LL;
      goto LABEL_19;
    }
    v36 = 0LL;
    v35 = (struct ISwitchThumbnailFactory *)*v9;
    Instance = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopContainerElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray * &,IVirtualDesktopElementFactory * &,ISwitchThumbnailFactory *>(
                 (__int64 *)&v36,
                 (CVirtualDesktopBarElement *)((char *)this + 232),
                 (const struct Geometry::CRect *)v41,
                 v39,
                 &v38,
                 &v35);
    v26 = Instance;
    if ( Instance >= 0 )
    {
      Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopContainerElement>(
                   &v36,
                   (__int64 *)this + 92);
      v26 = Instance;
      if ( Instance >= 0 )
      {
        memset(v42, 0, sizeof(v42));
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 93);
        Instance = CScrollViewerHost_CreateInstance(
                     3u,
                     (__int64)this + 376,
                     (__int64)&v41,
                     (__int64)v42,
                     96,
                     (__int64)v36,
                     *v9,
                     v33,
                     (CVirtualDesktopBarElement *)((char *)this + 744));
        v26 = Instance;
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                       this,
                       *((_QWORD *)this + 93));
          v26 = Instance;
          if ( Instance >= 0 )
          {
            CVirtualDesktopBarElement::_UpdateScrollElementVisibility(this);
            v35 = v23;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
            v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
            v34 = (__int64)v23;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
            v32 = ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___(v30, &v34, v31);
            v26 = v32;
            if ( v32 >= 0 )
            {
              v12 = 0;
              v26 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x54,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
                (const char *)(unsigned int)v32);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
            goto LABEL_33;
          }
          v29 = 70LL;
        }
        else
        {
          v29 = 69LL;
        }
      }
      else
      {
        v29 = 59LL;
      }
    }
    else
    {
      v29 = 57LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)Instance);
LABEL_33:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
    goto LABEL_34;
  }
  v27 = 40LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
    (const char *)(unsigned int)v25);
LABEL_34:
  if ( v12 )
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
  return v26;
}
