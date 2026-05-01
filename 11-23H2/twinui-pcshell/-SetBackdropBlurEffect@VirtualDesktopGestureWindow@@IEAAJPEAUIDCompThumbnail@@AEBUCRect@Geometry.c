/*
 * XREFs of ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180610E08
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180474A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180474A10.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18060A02C (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x18060A5D8 (--0-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUI.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x180612DA0 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 */

// Hidden C++ exception states: #wind=33
__int64 __fastcall VirtualDesktopGestureWindow::SetBackdropBlurEffect(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        const struct Geometry::CRect *a3,
        float a4)
{
  __m128 v6; // xmm9
  __m128 v7; // xmm10
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  int ActivationFactory; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD); // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 **); // rdi
  __int64 (__fastcall **v23)(_QWORD, GUID *, __int64 **); // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, __int64); // r15
  __int64 v34; // r14
  int v35; // eax
  __int64 (__fastcall **v36)(_QWORD, _QWORD, _QWORD); // rax
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  int v49[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v54; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v55)(_QWORD, GUID *, _QWORD **); // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v56; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v57; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 **); // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+78h] [rbp-90h] BYREF
  __int64 v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v61; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v62; // [rsp+90h] [rbp-78h] BYREF
  __int64 v63; // [rsp+98h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v65; // [rsp+A8h] [rbp-60h] BYREF
  int v66; // [rsp+B0h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v6 = (__m128)COERCE_UNSIGNED_INT((float)(*((_DWORD *)a3 + 2) - *(_DWORD *)a3));
  v7 = (__m128)COERCE_UNSIGNED_INT((float)(*((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1)));
  v8 = (__m128)COERCE_UNSIGNED_INT((float)((*((_DWORD *)a3 + 2) - *(_DWORD *)a3) / 2));
  v9 = (__m128)COERCE_UNSIGNED_INT((float)((*((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1)) / 2));
  v63 = 0LL;
  v68 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  ActivationFactory = RoGetActivationFactory(v68, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v63);
  v11 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v55 = 0LL;
    v12 = v63;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v63 + 48LL);
    v55 = 0LL;
    v68 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v14 = v13(v12, v68, &v55);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
LABEL_66:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
      goto LABEL_67;
    }
    v62 = 0LL;
    v15 = (**v55)(v55, &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2, &v62);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30F,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v15);
LABEL_65:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v62);
      goto LABEL_66;
    }
    v64 = 0LL;
    v16 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v64);
    v11 = v16;
    v17 = v64;
    if ( v16 < 0 )
    {
      v18 = 786LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_63;
    }
    v16 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
            (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v64 + 32),
            a4);
    v11 = v16;
    if ( v16 < 0 )
    {
      v18 = 787LL;
      goto LABEL_11;
    }
    *(_DWORD *)(v17 + 80) = 1;
    *(_DWORD *)(v17 + 76) = 0;
    v19 = v62;
    if ( *(_QWORD **)(v17 + 64) != v62 )
    {
      v56 = v62;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v56);
      v20 = *(_QWORD *)(v17 + 64);
      *(_QWORD *)(v17 + 64) = v19;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
      &v56,
      v21);
    v54 = 0LL;
    v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))v56;
    v23 = (__int64 (__fastcall **)(_QWORD, GUID *, __int64 **))*v56;
    v54 = 0LL;
    v24 = ((__int64 (__fastcall **)(_QWORD *, GUID *, __int64 **))v23)[11](v56, (GUID *)v17, &v54);
    v11 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v24);
LABEL_62:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
LABEL_63:
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v17);
      goto LABEL_65;
    }
    v51 = 0LL;
    v25 = *v54;
    v51 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v25 + 48))(v54, &v51);
    v11 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v26);
LABEL_61:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
      goto LABEL_62;
    }
    v61 = 0LL;
    v27 = (**v22)(v22, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v61);
    v11 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x320,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v27);
LABEL_60:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
      goto LABEL_61;
    }
    v53 = 0LL;
    v28 = *v61;
    v53 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v28 + 64))(
            v61,
            &v53);
    v11 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x322,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v29);
LABEL_59:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
      goto LABEL_60;
    }
    v60 = 0LL;
    v30 = (**v53)(v53, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v60);
    v11 = v30;
    if ( v30 < 0 )
    {
      v31 = 804LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v30);
LABEL_58:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
      goto LABEL_59;
    }
    v32 = v51;
    v33 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v51 + 56LL);
    v34 = v60;
    v68 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
    v30 = v33(v32, v68, v34);
    v11 = v30;
    if ( v30 < 0 )
    {
      v31 = 805LL;
      goto LABEL_27;
    }
    v59 = 0LL;
    v35 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v51)(
            v51,
            &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
            &v59);
    v11 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x327,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v35);
LABEL_57:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
      goto LABEL_58;
    }
    v50 = 0LL;
    v36 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v22;
    v50 = 0LL;
    v37 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **), __int64 *))v36[22])(v22, &v50);
    v11 = v37;
    if ( v37 < 0 )
    {
      v38 = 811LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v37);
LABEL_56:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v50);
      goto LABEL_57;
    }
    v37 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 56LL))(v50, v59);
    v11 = v37;
    if ( v37 < 0 )
    {
      v38 = 812LL;
      goto LABEL_34;
    }
    *(_QWORD *)v49 = 0LL;
    v39 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v50)(
            v50,
            &GUID_117e202d_a859_4c89_873b_c2aa566788e3,
            v49);
    v11 = v39;
    if ( v39 < 0 )
    {
      v40 = 815LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v39);
LABEL_55:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v49);
      goto LABEL_56;
    }
    v39 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)v49 + 288LL))(
            *(_QWORD *)v49,
            _mm_unpacklo_ps(v6, v7).m128_u64[0]);
    v11 = v39;
    if ( v39 < 0 )
    {
      v40 = 818LL;
      goto LABEL_41;
    }
    v41 = **(_QWORD **)v49;
    v65 = _mm_unpacklo_ps(_mm_xor_ps(v8, (__m128)_xmm), _mm_xor_ps(v9, (__m128)_xmm)).m128_u64[0];
    v66 = 0;
    v39 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v41 + 168))(*(_QWORD *)v49, &v65);
    v11 = v39;
    if ( v39 < 0 )
    {
      v40 = 819LL;
      goto LABEL_41;
    }
    v42 = *(_QWORD *)a2;
    v58 = 0LL;
    v43 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v42 + 104))(
            a2,
            &v58);
    v11 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x337,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v43);
LABEL_54:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
      goto LABEL_55;
    }
    v57 = 0LL;
    v44 = (**v58)(v58, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v57);
    v11 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x339,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v44);
LABEL_53:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
      goto LABEL_54;
    }
    v52 = 0LL;
    v45 = *v57;
    v52 = 0LL;
    v46 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v45 + 360))(v57, &v52);
    v11 = v46;
    if ( v46 >= 0 )
    {
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v52 + 72LL))(v52, *(_QWORD *)v49);
      v11 = v46;
      if ( v46 >= 0 )
      {
        v11 = 0;
        goto LABEL_52;
      }
      v47 = 828LL;
    }
    else
    {
      v47 = 827LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v46);
LABEL_52:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    goto LABEL_53;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30B,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_67:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
  return v11;
}
