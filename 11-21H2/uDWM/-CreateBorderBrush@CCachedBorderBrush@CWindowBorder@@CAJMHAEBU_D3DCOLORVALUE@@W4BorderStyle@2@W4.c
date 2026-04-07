/*
 * XREFs of ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003929C
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800378B4 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x1800273CC (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800361F4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18003A3FC (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18003A494 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A4B4 (--$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A624 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A680 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A6DC (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180097070 (--1-$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@.c)
 *     wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___ @ 0x180101008 (wil--details--lambda_call__lambda_9b895451a2b89393d97211386094df83___--_lambda_call__lambda_9b89.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderBrush(
        float a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  CGraphicsDeviceManager *v10; // rbx
  int v11; // eax
  __int64 v12; // r14
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 *); // rdi
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  float v28; // xmm12_4
  float v29; // xmm9_4
  float v30; // xmm6_4
  __m128 v31; // xmm14
  __m128 v32; // xmm10
  __int64 (__fastcall *v33)(__int64, unsigned __int64, __int64, __int64, int *); // rbx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, _QWORD, GUID *, ID2D1DeviceContext **, int *); // rdi
  int v38; // eax
  ID2D1DeviceContext *v39; // rbx
  int v40; // eax
  ID2D1DeviceContext *v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  ID2D1DeviceContext *v44; // rbx
  __int64 (__fastcall *v45)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(__int64, __int64 *); // rdi
  int v48; // eax
  __int64 v49; // rdx
  ID2D1DeviceContext *v50; // rbx
  __int64 (__fastcall *v51)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  __int64 v52; // rdi
  int v53; // eax
  __m128 v54; // xmm2
  __m128 v55; // xmm2
  __int64 (__fastcall *v56)(__int64, float *, __int64 *); // rbx
  int v57; // eax
  __int64 (__fastcall *v58)(__int64, __int64 *); // rbx
  int v59; // eax
  __int64 v60; // rbx
  __int64 (__fastcall *v61)(__int64, enum D2D1_COMPOSITE_MODE *); // rdi
  int v62; // eax
  __int64 v63; // rdx
  __m128 v64; // xmm6
  const struct D2D_POINT_2F *v65; // r8
  const struct D2D_RECT_F *v66; // r9
  const struct D2D_POINT_2F *v67; // r8
  const struct D2D_RECT_F *v68; // r9
  ID2D1DeviceContext *v69; // rbx
  int v70; // eax
  int v71; // eax
  __int64 v72; // rdx
  __int64 *v73; // rax
  int v75; // [rsp+28h] [rbp-E0h]
  enum D2D1_INTERPOLATION_MODE v76; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v77; // [rsp+30h] [rbp-D8h]
  enum D2D1_COMPOSITE_MODE v78; // [rsp+30h] [rbp-D8h]
  ID2D1DeviceContext *v79; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v82; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1Effect *v83; // [rsp+78h] [rbp-90h] BYREF
  __int64 v84; // [rsp+80h] [rbp-88h] BYREF
  __int64 v85; // [rsp+88h] [rbp-80h] BYREF
  int v86; // [rsp+90h] [rbp-78h] BYREF
  int v87; // [rsp+94h] [rbp-74h]
  int v88; // [rsp+98h] [rbp-70h] BYREF
  enum D2D1_COMPOSITE_MODE v89[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-60h] BYREF
  int v91[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v92; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v95; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h] BYREF
  std::_Ref_count_base *v99; // [rsp+F0h] [rbp-18h]
  int v100; // [rsp+F8h] [rbp-10h] BYREF
  int v101; // [rsp+100h] [rbp-8h] BYREF
  float v102; // [rsp+108h] [rbp+0h] BYREF
  __int64 v103; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v104; // [rsp+118h] [rbp+10h]
  __int128 v105; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v106[40]; // [rsp+130h] [rbp+28h]
  __int64 v107; // [rsp+158h] [rbp+50h]
  __int64 v108; // [rsp+160h] [rbp+58h]
  __int128 v109; // [rsp+168h] [rbp+60h] BYREF
  char v110; // [rsp+178h] [rbp+70h]
  __int128 v111; // [rsp+180h] [rbp+78h] BYREF
  float v112; // [rsp+190h] [rbp+88h]
  float v113; // [rsp+194h] [rbp+8Ch]
  __int128 v114; // [rsp+198h] [rbp+90h] BYREF
  float v115; // [rsp+1A8h] [rbp+A0h] BYREF
  float v116; // [rsp+1ACh] [rbp+A4h]
  __m128 v117; // [rsp+1B0h] [rbp+A8h]
  float v118[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  __m128 v119; // [rsp+1C8h] [rbp+C0h]
  _OWORD v120[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v121; // [rsp+218h] [rbp+110h]
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v102 = a1;
  v101 = a2;
  v100 = a4;
  v104 = a6;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 32LL);
  v10 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v11 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v11,
      v75);
  v12 = *((_QWORD *)v10 + 5);
  v97 = 0LL;
  v96 = 0LL;
  v13 = **v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v97);
  v14 = v13(v9, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v97);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v17 = **v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v96);
    v14 = v17(v9, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v96);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 326LL;
      goto LABEL_6;
    }
    v85 = 0LL;
    v18 = v96;
    v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v96 + 112LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v85);
    v20 = v19(v18, &v85);
    v15 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14A,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v20);
LABEL_94:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v85);
      goto LABEL_95;
    }
    v84 = 0LL;
    v21 = v97;
    v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v97 + 184LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v84);
    v23 = v22(v21, &v84);
    v15 = v23;
    if ( v23 < 0 )
    {
      v24 = 333LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v23);
LABEL_93:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v84);
      goto LABEL_94;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v84 + 88LL))(v84, 1LL);
    v15 = v23;
    if ( v23 < 0 )
    {
      v24 = 334LL;
      goto LABEL_15;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v84 + 56LL))(v84, 0LL);
    v15 = v23;
    if ( v23 < 0 )
    {
      v24 = 335LL;
      goto LABEL_15;
    }
    v92 = 0LL;
    v25 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
            &v84,
            &v92);
    v15 = v25;
    if ( v25 < 0 )
    {
      v26 = 339LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v25);
LABEL_92:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v92);
      goto LABEL_93;
    }
    v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v85 + 168LL))(v85, v92);
    v15 = v25;
    if ( v25 < 0 )
    {
      v26 = 340LL;
      goto LABEL_22;
    }
    LOBYTE(v27) = 1;
    v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v85 + 88LL))(v85, v27);
    v15 = v25;
    if ( v25 < 0 )
    {
      v26 = 341LL;
      goto LABEL_22;
    }
    LODWORD(v114) = 0;
    v80 = 0LL;
    v88 = 0;
    CWindowBorder::GetShadowParameters(a5, a2, (float *)&v114, (float *)&v80, &v88, (_DWORD *)&v80 + 1);
    v28 = (float)a2 / 96.0;
    v29 = *(float *)&v114;
    v30 = fmaxf((float)((float)(v28 * a1) + 2.0) + (float)((float)(v28 * a1) + 2.0), *(float *)&v114);
    v31 = (__m128)(unsigned int)v114;
    v31.m128_f32[0] = *(float *)&v114 * 2.0;
    v32 = v31;
    v32.m128_f32[0] = (float)(*(float *)&v114 * 2.0) + v30;
    *(_QWORD *)v91 = 0LL;
    v33 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, int *))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v91);
    v34 = v33(v12, _mm_unpacklo_ps(v32, v32).m128_u64[0], 87LL, 1LL, v91);
    v15 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v34);
LABEL_91:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(v91);
      goto LABEL_92;
    }
    v95 = 0LL;
    v35 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
            v91,
            &v95);
    v15 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x170,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v35);
LABEL_90:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v95);
      goto LABEL_91;
    }
    v79 = 0LL;
    v36 = v95;
    v37 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, ID2D1DeviceContext **, int *))(*(_QWORD *)v95 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v79);
    v38 = v37(v36, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, &v79, &v86);
    v15 = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v38);
LABEL_89:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v79);
      goto LABEL_90;
    }
    v111 = _xmm;
    v112 = (float)v86;
    v113 = (float)v87;
    (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v79 + 240LL))(v79, &v111);
    *(_QWORD *)&v111 = &v79;
    *((_QWORD *)&v111 + 1) = &v95;
    v109 = v111;
    v110 = 1;
    v83 = 0LL;
    v82 = 0LL;
    v115 = v29;
    v116 = v29;
    v117.m128_f32[0] = v30 + v29;
    v117.m128_f32[1] = v30 + v29;
    v117.m128_f32[2] = v28 * a1;
    v117.m128_f32[3] = v28 * a1;
    if ( a5 )
    {
      v81 = 0LL;
      v39 = v79;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
      *(_QWORD *)&v114 = _mm_unpacklo_ps(v32, v32).m128_u64[0];
      v40 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, _QWORD, _DWORD, __int64 *))(*(_QWORD *)v39 + 96LL))(
              v39,
              &v114,
              0LL,
              0LL,
              0,
              &v81);
      v15 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18E,
          (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v40);
LABEL_46:
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v81);
LABEL_88:
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v82);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v83);
        wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___(&v109);
        goto LABEL_89;
      }
      *(_QWORD *)&v111 = 0LL;
      v41 = v79;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v111);
      v114 = _xmm;
      v42 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, __int128 *))(*(_QWORD *)v41 + 64LL))(
              v41,
              &v114,
              0LL,
              &v111);
      v15 = v42;
      if ( v42 < 0 )
      {
        v43 = 403LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v43,
          (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v42);
LABEL_45:
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v111);
        goto LABEL_46;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 384LL))(v81);
      v114 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v81 + 376LL))(v81, &v114);
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v81 + 152LL))(v81, &v115, v111);
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v81 + 392LL))(v81, 0LL, 0LL);
      v15 = v42;
      if ( v42 < 0 )
      {
        v43 = 408LL;
        goto LABEL_38;
      }
      v44 = v79;
      v45 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v79 + 504LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v83);
      v42 = v45(v44, &CLSID_D2D1Shadow, &v83);
      v15 = v42;
      if ( v42 < 0 )
      {
        v43 = 411LL;
        goto LABEL_38;
      }
      v98 = 0LL;
      v46 = v81;
      v47 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v81 + 456LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v98);
      v48 = v47(v46, &v98);
      v15 = v48;
      if ( v48 < 0 )
      {
        v49 = 414LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v49,
          (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v48);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v98);
        goto LABEL_45;
      }
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v83 + 112LL))(
        v83,
        0LL,
        v98,
        1LL);
      *(float *)&v114 = v29 / 3.0;
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int))(*(_QWORD *)v83 + 72LL))(
        v83,
        0LL,
        0LL,
        &v114,
        4);
      *(_QWORD *)&v114 = 0LL;
      DWORD2(v114) = 0;
      HIDWORD(v114) = v88;
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v83 + 72LL))(
        v83,
        1LL,
        0LL,
        &v114,
        16);
      if ( a5 != 1 )
      {
        v50 = v79;
        v51 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v79 + 504LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
        v48 = v51(v50, &CLSID_D2D1Shadow, &v82);
        v15 = v48;
        if ( v48 < 0 )
        {
          v49 = 422LL;
          goto LABEL_44;
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v82 + 112LL))(
          v82,
          0LL,
          v98,
          1LL);
        *(float *)&v80 = *(float *)&v80 / 3.0;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64 *, int))(*(_QWORD *)v82 + 72LL))(
          v82,
          0LL,
          0LL,
          &v80,
          4);
        *(_QWORD *)&v114 = 0LL;
        DWORD2(v114) = 0;
        HIDWORD(v114) = HIDWORD(v80);
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v82 + 72LL))(
          v82,
          1LL,
          0LL,
          &v114,
          16);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v98);
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v111);
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v81);
    }
    v111 = 0LL;
    (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v79 + 376LL))(v79, &v111);
    v116 = v116 - (float)(v29 * 0.5);
    v117.m128_f32[1] = v117.m128_f32[1] - (float)(v29 * 0.5);
    v94 = 0LL;
    v52 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 16LL);
    *(_QWORD *)&v111 = 0LL;
    DWORD2(v111) = v32.m128_i32[0];
    HIDWORD(v111) = v32.m128_i32[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v94);
    v53 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v52 + 40LL))(v52, &v111, &v94);
    v15 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v53);
LABEL_87:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v94);
      goto LABEL_88;
    }
    v54 = (__m128)COERCE_UNSIGNED_INT((float)((a2 + 48) / 96));
    if ( !a4 )
      v54.m128_f32[0] = v54.m128_f32[0] + 1.0;
    v55 = _mm_shuffle_ps(v54, v54, 0);
    v118[0] = v55.m128_f32[0] + v115;
    v118[1] = v55.m128_f32[0] + v116;
    v119 = _mm_sub_ps(v117, v55);
    v93 = 0LL;
    v56 = *(__int64 (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v52 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v93);
    v57 = v56(v52, v118, &v93);
    v15 = v57;
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v57);
LABEL_86:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v93);
      goto LABEL_87;
    }
    v90 = 0LL;
    v58 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 80LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v90);
    v59 = v58(v52, &v90);
    v15 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v59);
LABEL_85:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v90);
      goto LABEL_86;
    }
    *(_QWORD *)v89 = 0LL;
    v60 = v90;
    v61 = *(__int64 (__fastcall **)(__int64, enum D2D1_COMPOSITE_MODE *))(*(_QWORD *)v90 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v89);
    v62 = v61(v60, v89);
    v15 = v62;
    if ( v62 < 0 )
    {
      v63 = 472LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v63,
        (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v62);
LABEL_84:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(v89);
      goto LABEL_85;
    }
    v77 = v89[0];
    v62 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v94 + 88LL))(v94, v93, 3LL);
    v15 = v62;
    if ( v62 < 0 )
    {
      v63 = 476LL;
      goto LABEL_63;
    }
    v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v89 + 72LL))(*(_QWORD *)v89);
    v15 = v62;
    if ( v62 < 0 )
    {
      v63 = 477LL;
      goto LABEL_63;
    }
    *(_QWORD *)&v111 = 0LL;
    DWORD2(v111) = v32.m128_i32[0];
    HIDWORD(v111) = v32.m128_i32[0];
    v64 = (__m128)v111;
    memset_0((char *)&v105 + 4, 0, 0x44uLL);
    LODWORD(v105) = v64.m128_i32[0];
    DWORD1(v105) = _mm_shuffle_ps(v64, v64, 85).m128_u32[0];
    DWORD2(v105) = _mm_shuffle_ps(v64, v64, 170).m128_u32[0];
    HIDWORD(v105) = _mm_shuffle_ps(v64, v64, 255).m128_u32[0];
    *(_QWORD *)v106 = v90;
    *(_DWORD *)&v106[8] = 0;
    *(_OWORD *)&v106[12] = _xmm;
    *(_QWORD *)&v106[28] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)&v106[36] = 1065353216;
    v107 = 0LL;
    LODWORD(v108) = 0;
    v120[0] = v105;
    v120[1] = *(_OWORD *)v106;
    v120[2] = *(_OWORD *)&v106[16];
    v120[3] = *(unsigned __int64 *)&v106[32];
    v121 = v108;
    (*(void (__fastcall **)(ID2D1DeviceContext *, _OWORD *, _QWORD))(*(_QWORD *)v79 + 320LL))(v79, v120, 0LL);
    if ( v83 )
    {
      ID2D1DeviceContext::DrawImage(v79, v83, v65, v66, FLOAT_0_25, v77);
      if ( v82 )
      {
        v111 = _xmm;
        v112 = (float)v86;
        v113 = (float)((float)v87 - (float)(v29 * 0.5)) + (float)(v28 + v28);
        (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v79 + 240LL))(v79, &v111);
        ID2D1DeviceContext::DrawImage(v79, v82, v67, v68, v76, v78);
        v111 = _xmm;
        v112 = (float)v86;
        v113 = (float)v87;
        (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v79 + 240LL))(v79, &v111);
      }
    }
    if ( *(float *)(a3 + 12) > 0.0 )
    {
      *(_QWORD *)&v111 = 0LL;
      v69 = v79;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v111);
      v70 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, _QWORD, __int128 *))(*(_QWORD *)v69 + 64LL))(
              v69,
              a3,
              0LL,
              &v111);
      v15 = v70;
      if ( v70 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FA,
          (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v70);
        Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v111);
        goto LABEL_84;
      }
      (*(void (__fastcall **)(ID2D1DeviceContext *, float *, _QWORD))(*(_QWORD *)v79 + 152LL))(v79, &v115, v111);
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v111);
    }
    (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v79 + 328LL))(v79);
    v103 = 0LL;
    v71 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
            v91,
            &v103);
    v15 = v71;
    if ( v71 >= 0 )
    {
      v71 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v84 + 104LL))(v84, v103);
      v15 = v71;
      if ( v71 >= 0 )
      {
        v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 216LL))(v85);
        v15 = v71;
        if ( v71 >= 0 )
        {
          v71 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                  &v85,
                  &v92);
          v15 = v71;
          if ( v71 >= 0 )
          {
            HIDWORD(v80) = v31.m128_i32[0];
            *(float *)&v111 = v29;
            *((float *)&v111 + 1) = v29 * 0.5;
            v73 = (__int64 *)std::make_shared<CWindowBorder::CCachedBorderBrush,float &,int &,_D3DCOLORVALUE const &,enum CWindowBorder::BorderStyle &,enum CWindowBorder::ShadowStyle &,D2D_VECTOR_2F,float,Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>(
                               (unsigned int)&v98,
                               (unsigned int)&v102,
                               (unsigned int)&v101,
                               a3,
                               (__int64)&v100,
                               (__int64)&a5,
                               (__int64)&v111,
                               (__int64)&v80 + 4,
                               (__int64)&v92);
            std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(v104, v73);
            if ( v99 )
              std::_Ref_count_base::_Decref(v99);
            v15 = 0;
            goto LABEL_83;
          }
          v72 = 529LL;
        }
        else
        {
          v72 = 526LL;
        }
      }
      else
      {
        v72 = 515LL;
      }
    }
    else
    {
      v72 = 514LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v72,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v71);
LABEL_83:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v103);
    goto LABEL_84;
  }
  v16 = 325LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v14);
LABEL_95:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v96);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v97);
  return v15;
}
