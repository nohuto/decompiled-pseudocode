/*
 * XREFs of ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18002C904
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18001A414 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017D7C (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017DD8 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017E34 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180018730 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001A708 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x18001B9E0 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ??$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x1800521FC (--$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180053FE4 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     _lambda_9b895451a2b89393d97211386094df83_::operator() @ 0x180054BFC (_lambda_9b895451a2b89393d97211386094df83_--operator().c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180055174 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___ @ 0x18010648C (wil--details--lambda_call__lambda_9b895451a2b89393d97211386094df83___--_lambda_call__lambda_9b89.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderBrush(
        float a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  CGraphicsDeviceManager *v10; // rbx
  int v11; // eax
  __int64 v12; // r14
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)); // rdi
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)); // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm6_4
  __m128 v29; // xmm11
  __m128 v30; // xmm7
  __int64 (__fastcall *v31)(__int64, unsigned __int64, __int64, __int64); // rbx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, GUID *, ID2D1DeviceContext **); // rdi
  int v36; // eax
  ID2D1DeviceContext *v37; // rbx
  int v38; // eax
  ID2D1DeviceContext *v39; // rbx
  int v40; // eax
  ID2D1DeviceContext *v41; // rbx
  __int64 (__fastcall *v42)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, __int128 *); // rdi
  int v45; // eax
  ID2D1DeviceContext *v46; // rbx
  __int64 (__fastcall *v47)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  float v48; // xmm6_4
  __int64 v49; // rdi
  int v50; // eax
  __m128 v51; // xmm2
  __m128 v52; // xmm2
  __int64 (__fastcall *v53)(__int64, float *, __int64 *); // rbx
  int v54; // eax
  __int64 (__fastcall *v55)(__int64, __int64 *); // rbx
  int v56; // eax
  __int64 v57; // rbx
  __int64 (__fastcall *v58)(__int64, enum D2D1_COMPOSITE_MODE *); // rdi
  int v59; // eax
  const struct D2D_POINT_2F *v60; // r8
  const struct D2D_RECT_F *v61; // r9
  const struct D2D_POINT_2F *v62; // r8
  const struct D2D_RECT_F *v63; // r9
  ID2D1DeviceContext *v64; // rbx
  int v65; // eax
  int v66; // eax
  __int64 v67; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  int v76; // [rsp+28h] [rbp-E0h]
  int *v77; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v78; // [rsp+30h] [rbp-D8h]
  enum D2D1_COMPOSITE_MODE v79; // [rsp+30h] [rbp-D8h]
  ID2D1DeviceContext *v80; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v81)(_QWORD, GUID *, __int64); // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v82)(_QWORD, GUID *, __int64); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v83; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1Effect *v84; // [rsp+78h] [rbp-90h] BYREF
  int v85[2]; // [rsp+80h] [rbp-88h] BYREF
  struct ID2D1Effect *v86; // [rsp+88h] [rbp-80h] BYREF
  __int64 v87; // [rsp+90h] [rbp-78h] BYREF
  __int64 v88; // [rsp+98h] [rbp-70h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-58h] BYREF
  enum D2D1_COMPOSITE_MODE v92[2]; // [rsp+B8h] [rbp-50h] BYREF
  float v93; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v95; // [rsp+D0h] [rbp-38h] BYREF
  int v96; // [rsp+E0h] [rbp-28h] BYREF
  int v97; // [rsp+E4h] [rbp-24h]
  int v98; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-18h] BYREF
  std::_Ref_count_base *v100; // [rsp+F8h] [rbp-10h]
  __int64 v101; // [rsp+100h] [rbp-8h] BYREF
  __int64 v102; // [rsp+108h] [rbp+0h] BYREF
  int v103; // [rsp+110h] [rbp+8h] BYREF
  int v104; // [rsp+118h] [rbp+10h] BYREF
  float v105; // [rsp+120h] [rbp+18h] BYREF
  __int64 v106; // [rsp+128h] [rbp+20h]
  __m256i v107; // [rsp+140h] [rbp+38h]
  __int128 v108; // [rsp+160h] [rbp+58h]
  __int64 v109; // [rsp+170h] [rbp+68h]
  __int128 v110; // [rsp+178h] [rbp+70h] BYREF
  float v111; // [rsp+188h] [rbp+80h]
  float v112; // [rsp+18Ch] [rbp+84h]
  __int128 v113; // [rsp+190h] [rbp+88h] BYREF
  __int128 v114; // [rsp+1A0h] [rbp+98h] BYREF
  float v115; // [rsp+1B0h] [rbp+A8h]
  float v116; // [rsp+1B4h] [rbp+ACh]
  float v117; // [rsp+1B8h] [rbp+B0h] BYREF
  float v118; // [rsp+1BCh] [rbp+B4h]
  __m128 v119; // [rsp+1C0h] [rbp+B8h]
  float v120[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  __m128 v121; // [rsp+1D8h] [rbp+D0h]
  __int128 v122; // [rsp+1E8h] [rbp+E0h] BYREF
  __m256i v123; // [rsp+1F8h] [rbp+F0h]
  __int128 v124; // [rsp+218h] [rbp+110h]
  __int64 v125; // [rsp+228h] [rbp+120h]
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v105 = a1;
  v104 = a2;
  v103 = a4;
  v106 = a6;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL);
  v10 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v11 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v11,
      v76);
  v12 = *((_QWORD *)v10 + 5);
  v102 = 0LL;
  v101 = 0LL;
  v13 = **v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v102);
  v14 = v13(v9, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v102);
  v15 = v14;
  if ( v14 < 0 )
  {
    v69 = 325LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v69,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v14,
      v76);
LABEL_95:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v101);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v102);
    return v15;
  }
  v16 = **v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v101);
  v14 = v16(v9, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v101);
  v15 = v14;
  if ( v14 < 0 )
  {
    v69 = 326LL;
    goto LABEL_48;
  }
  v81 = 0LL;
  v17 = v101;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v101 + 112LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
  v19 = v18(v17, &v81);
  v15 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v19,
      v76);
LABEL_94:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
    goto LABEL_95;
  }
  v82 = 0LL;
  v20 = v102;
  v21 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v102 + 184LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
  v22 = v21(v20, &v82);
  v15 = v22;
  if ( v22 < 0 )
  {
    v70 = 333LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v70,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v22,
      v76);
LABEL_93:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
    goto LABEL_94;
  }
  v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64))(*v82)[11])(v82, 1LL);
  v15 = v22;
  if ( v22 < 0 )
  {
    v70 = 334LL;
    goto LABEL_52;
  }
  v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), _QWORD))(*v82)[7])(v82, 0LL);
  v15 = v22;
  if ( v22 < 0 )
  {
    v70 = 335LL;
    goto LABEL_52;
  }
  v83 = 0LL;
  v23 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v82,
          (__int64)&v83);
  v15 = v23;
  if ( v23 < 0 )
  {
    v71 = 339LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v71,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v23,
      v76);
LABEL_92:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v83);
    goto LABEL_93;
  }
  v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64))(*v81)[21])(v81, v83);
  v15 = v23;
  if ( v23 < 0 )
  {
    v71 = 340LL;
    goto LABEL_56;
  }
  LOBYTE(v24) = 1;
  v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64))(*v81)[11])(v81, v24);
  v15 = v23;
  if ( v23 < 0 )
  {
    v71 = 341LL;
    goto LABEL_56;
  }
  LODWORD(v113) = 0;
  v93 = 0.0;
  v98 = 0;
  LODWORD(v110) = 0;
  CWindowBorder::GetShadowParameters(a5, a2, (float *)&v113, &v93, &v98, &v110);
  v25 = (float)a2 / 96.0;
  v26 = v25 * a1;
  v27 = *(float *)&v113;
  v28 = fmaxf((float)(v26 + 2.0) + (float)(v26 + 2.0), *(float *)&v113);
  v29 = (__m128)(unsigned int)v113;
  v29.m128_f32[0] = *(float *)&v113 * 2.0;
  v30 = v29;
  v30.m128_f32[0] = (float)(*(float *)&v113 * 2.0) + v28;
  *(_QWORD *)v85 = 0LL;
  v31 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(*(_QWORD *)v12 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v85);
  v32 = v31(v12, _mm_unpacklo_ps(v30, v30).m128_u64[0], 87LL, 1LL);
  v15 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v32,
      (int)v85);
LABEL_91:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v85);
    goto LABEL_92;
  }
  v87 = 0LL;
  v33 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v85,
          &v87);
  v15 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v33,
      (int)v85);
LABEL_90:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v87);
    goto LABEL_91;
  }
  v80 = 0LL;
  v34 = v87;
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, ID2D1DeviceContext **))(*(_QWORD *)v87 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v80);
  v77 = &v96;
  v36 = v35(v34, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, &v80);
  v15 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v36,
      (int)&v96);
LABEL_89:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v80);
    goto LABEL_90;
  }
  v114 = _xmm;
  v115 = (float)v96;
  v116 = (float)v97;
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v80 + 240LL))(v80, &v114);
  *(_QWORD *)&v95 = &v80;
  *((_QWORD *)&v95 + 1) = &v87;
  v114 = v95;
  LOBYTE(v115) = 1;
  v86 = 0LL;
  v84 = 0LL;
  v117 = v27;
  v118 = v27;
  v119.m128_f32[0] = v28 + v27;
  v119.m128_f32[1] = v28 + v27;
  v119.m128_f32[2] = v25 * a1;
  v119.m128_f32[3] = v25 * a1;
  if ( a5 )
  {
    v89 = 0LL;
    v37 = v80;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v89);
    *(_QWORD *)&v113 = _mm_unpacklo_ps(v30, v30).m128_u64[0];
    LODWORD(v77) = 0;
    v38 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v37 + 96LL))(
            v37,
            &v113,
            0LL,
            0LL);
    v15 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v38,
        0);
LABEL_65:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v89);
LABEL_88:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v84);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v86);
      wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___(&v114);
      goto LABEL_89;
    }
    v99 = 0LL;
    v39 = v80;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
    v113 = _xmm;
    v40 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, __int64 *))(*(_QWORD *)v39 + 64LL))(
            v39,
            &v113,
            0LL,
            &v99);
    v15 = v40;
    if ( v40 < 0 )
    {
      v72 = 403LL;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 384LL))(v89);
      v113 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v89 + 376LL))(v89, &v113);
      (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v89 + 152LL))(v89, &v117, v99);
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v89 + 392LL))(v89, 0LL, 0LL);
      v15 = v40;
      if ( v40 < 0 )
      {
        v72 = 408LL;
      }
      else
      {
        v41 = v80;
        v42 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v80 + 504LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v86);
        v40 = v42(v41, &CLSID_D2D1Shadow, &v86);
        v15 = v40;
        if ( v40 >= 0 )
        {
          *(_QWORD *)&v95 = 0LL;
          v43 = v89;
          v44 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v89 + 456LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v95);
          v45 = v44(v43, &v95);
          v15 = v45;
          if ( v45 < 0 )
          {
            v73 = 414LL;
          }
          else
          {
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v86 + 112LL))(
              v86,
              0LL,
              v95,
              1LL);
            *(float *)&v113 = v27 / 3.0;
            LODWORD(v77) = 4;
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v86 + 72LL))(
              v86,
              0LL,
              0LL,
              &v113,
              v77);
            *(_QWORD *)&v113 = 0LL;
            DWORD2(v113) = 0;
            HIDWORD(v113) = v98;
            LODWORD(v77) = 16;
            (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *))(*(_QWORD *)v86 + 72LL))(
              v86,
              1LL,
              0LL,
              &v113);
            if ( a5 == 1 )
            {
LABEL_23:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v95);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v89);
              goto LABEL_24;
            }
            v46 = v80;
            v47 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v80 + 504LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v84);
            v45 = v47(v46, &CLSID_D2D1Shadow, &v84);
            v15 = v45;
            if ( v45 >= 0 )
            {
              (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v84 + 112LL))(
                v84,
                0LL,
                v95,
                1LL);
              v93 = v93 / 3.0;
              (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v84 + 72LL))(
                v84,
                0LL,
                0LL,
                &v93,
                4);
              *(_QWORD *)&v113 = 0LL;
              DWORD2(v113) = 0;
              HIDWORD(v113) = v110;
              LODWORD(v77) = 16;
              (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *))(*(_QWORD *)v84 + 72LL))(
                v84,
                1LL,
                0LL,
                &v113);
              goto LABEL_23;
            }
            v73 = 422LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v73,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v45,
            (int)v77);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v95);
          goto LABEL_64;
        }
        v72 = 411LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v72,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v40,
      0);
LABEL_64:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v99);
    goto LABEL_65;
  }
LABEL_24:
  v110 = 0LL;
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v80 + 376LL))(v80, &v110);
  v48 = v27 * 0.5;
  v118 = v118 - (float)(v27 * 0.5);
  v119.m128_f32[1] = v119.m128_f32[1] - (float)(v27 * 0.5);
  v88 = 0LL;
  v49 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 16LL);
  *(_QWORD *)&v110 = 0LL;
  DWORD2(v110) = v30.m128_i32[0];
  HIDWORD(v110) = v30.m128_i32[0];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v88);
  v50 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v49 + 40LL))(v49, &v110, &v88);
  v15 = v50;
  if ( v50 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v50,
      (int)v77);
LABEL_87:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v88);
    goto LABEL_88;
  }
  v51 = (__m128)COERCE_UNSIGNED_INT((float)((a2 + 48) / 96));
  if ( !a4 )
    v51.m128_f32[0] = v51.m128_f32[0] + 1.0;
  v52 = _mm_shuffle_ps(v51, v51, 0);
  v120[0] = v52.m128_f32[0] + v117;
  v120[1] = v52.m128_f32[0] + v118;
  v121 = _mm_sub_ps(v119, v52);
  v91 = 0LL;
  v53 = *(__int64 (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v49 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v91);
  v54 = v53(v49, v120, &v91);
  v15 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v54,
      (int)v77);
LABEL_86:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v91);
    goto LABEL_87;
  }
  v90 = 0LL;
  v55 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 80LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v90);
  v56 = v55(v49, &v90);
  v15 = v56;
  if ( v56 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v56,
      (int)v77);
LABEL_85:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v90);
    goto LABEL_86;
  }
  *(_QWORD *)v92 = 0LL;
  v57 = v90;
  v58 = *(__int64 (__fastcall **)(__int64, enum D2D1_COMPOSITE_MODE *))(*(_QWORD *)v90 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v92);
  v59 = v58(v57, v92);
  v15 = v59;
  if ( v59 < 0 )
  {
    v74 = 472LL;
LABEL_76:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v74,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v59,
      (int)v77);
    goto LABEL_84;
  }
  v78 = v92[0];
  LODWORD(v77) = FLOAT_0_25;
  v59 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v88 + 88LL))(v88, v91, 3LL);
  v15 = v59;
  if ( v59 < 0 )
  {
    v74 = 476LL;
    goto LABEL_76;
  }
  v59 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v92 + 72LL))(*(_QWORD *)v92);
  v15 = v59;
  if ( v59 < 0 )
  {
    v74 = 477LL;
    goto LABEL_76;
  }
  *(_QWORD *)&v110 = 0LL;
  DWORD2(v110) = v30.m128_i32[0];
  HIDWORD(v110) = v30.m128_i32[0];
  v109 = 0LL;
  v107.m256i_i64[0] = v90;
  v107.m256i_i32[2] = 0;
  *(_OWORD *)((char *)&v107.m256i_u64[1] + 4) = _xmm;
  v107.m256i_i32[7] = 0;
  v108 = 0x3F80000000000000uLL;
  v122 = v110;
  v123 = v107;
  v124 = 0x3F80000000000000uLL;
  v125 = 0LL;
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD))(*(_QWORD *)v80 + 320LL))(v80, &v122, 0LL);
  if ( v86 )
  {
    ID2D1DeviceContext::DrawImage(v80, v86, v60, v61, FLOAT_0_25, v78);
    if ( v84 )
    {
      v110 = _xmm;
      v111 = (float)v96;
      v112 = (float)((float)v97 - v48) + (float)(v25 + v25);
      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v80 + 240LL))(v80, &v110);
      ID2D1DeviceContext::DrawImage(v80, v84, v62, v63, (enum D2D1_INTERPOLATION_MODE)v77, v79);
      v110 = _xmm;
      v111 = (float)v96;
      v112 = (float)v97;
      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v80 + 240LL))(v80, &v110);
    }
  }
  if ( *(float *)(a3 + 12) > 0.0 )
  {
    *(_QWORD *)&v110 = 0LL;
    v64 = v80;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v110);
    v65 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, _QWORD, __int128 *))(*(_QWORD *)v64 + 64LL))(
            v64,
            a3,
            0LL,
            &v110);
    v15 = v65;
    if ( v65 >= 0 )
    {
      (*(void (__fastcall **)(ID2D1DeviceContext *, float *, _QWORD))(*(_QWORD *)v80 + 152LL))(v80, &v117, v110);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v110);
      goto LABEL_38;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v65,
      (int)v77);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v110);
LABEL_84:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v92);
    goto LABEL_85;
  }
LABEL_38:
  (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v80 + 328LL))(v80);
  v94 = 0LL;
  v66 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v85,
          &v94);
  v15 = v66;
  if ( v66 < 0 )
  {
    v75 = 514LL;
LABEL_83:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v75,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v66,
      (int)v77);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v94);
    goto LABEL_84;
  }
  v66 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), __int64))(*v82)[13])(v82, v94);
  v15 = v66;
  if ( v66 < 0 )
  {
    v75 = 515LL;
    goto LABEL_83;
  }
  *(float *)&v77 = v48 + (float)(v48 + (float)((float)(v48 + v26) + 2.0));
  v66 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v81)[27])(v81);
  v15 = v66;
  if ( v66 < 0 )
  {
    v75 = 526LL;
    goto LABEL_83;
  }
  v66 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v81,
          (__int64)&v83);
  v15 = v66;
  if ( v66 < 0 )
  {
    v75 = 529LL;
    goto LABEL_83;
  }
  LODWORD(v110) = v29.m128_i32[0];
  *(float *)&v95 = v27;
  *((float *)&v95 + 1) = v27 * 0.5;
  v67 = std::make_shared<CWindowBorder::CCachedBorderBrush,float &,int &,_D3DCOLORVALUE const &,enum CWindowBorder::BorderStyle &,enum CWindowBorder::ShadowStyle &,D2D_VECTOR_2F,float,Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>(
          (unsigned int)&v99,
          (unsigned int)&v105,
          (unsigned int)&v104,
          a3,
          (__int64)&v103,
          (__int64)&a5,
          (__int64)&v95,
          (__int64)&v110,
          (__int64)&v83);
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(v106, v67);
  if ( v100 )
    std::_Ref_count_base::_Decref(v100);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v94);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v92);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v90);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v91);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v88);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v84);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v86);
  LOBYTE(v115) = 0;
  lambda_9b895451a2b89393d97211386094df83_::operator()(&v114);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v87);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v85);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v83);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v81);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v101);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v102);
  return 0LL;
}
