/*
 * XREFs of ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180538B6C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800BF524 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURe.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800C104C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@01234@@Z @ 0x180166644 (--0-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPosit.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptionsHub(
        __int64 a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v9; // ebx
  void *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // eax
  int v18; // r13d
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int128 v25; // xmm7
  __int128 v26; // xmm8
  __int64 v27; // xmm9_8
  float v28; // xmm6_4
  int v29; // r14d
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int64 v43; // rax
  __int128 v44; // xmm6
  __int128 v45; // xmm8
  __int128 v46; // xmm9
  __int64 v47; // xmm7_8
  __int64 v48; // rax
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  __int64 v54; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h]
  __int128 v57; // [rsp+78h] [rbp-90h] BYREF
  __int128 v58; // [rsp+88h] [rbp-80h]
  __int128 v59; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-40h]
  __int128 v63; // [rsp+D8h] [rbp-30h]
  __int64 v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F8h] [rbp-10h]
  __int128 v66; // [rsp+108h] [rbp+0h] BYREF
  __int128 v67; // [rsp+118h] [rbp+10h]
  __int128 v68; // [rsp+128h] [rbp+20h]
  __int128 v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+148h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v65 = a6;
  v55[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v55);
  v55[0] = 0LL;
  v9 = 0;
  v54 = 0LL;
  v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10
    && (v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)v10),
        (v54 = v11) != 0) )
  {
    v54 = 0LL;
    v55[0] = v11;
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  if ( v9 >= 0 )
  {
    v14 = (int)*(float *)(a1 + 216);
    v15 = (int)*(float *)(a1 + 220);
    v56 = v15;
    *(_OWORD *)&v55[1] = *(_OWORD *)(a1 + 208);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      &v54,
      *(HMONITOR *)(a1 + 200),
      (__int64)&v55[1],
      *(_DWORD *)(a1 + 240),
      *(_BYTE *)(a1 + 304),
      *(double *)(a1 + 312),
      (double *)(a1 + 296));
    v66 = *(_OWORD *)(a1 + 48);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      &v55[1],
      *(HMONITOR *)(a1 + 40),
      (__int64)&v66,
      *(_DWORD *)(a1 + 80),
      *(_BYTE *)(a1 + 304),
      *(double *)(a1 + 312),
      (double *)(a1 + 280));
    v70 = 0LL;
    *(_QWORD *)&v67 = 0xE00000001LL;
    *(_QWORD *)&v68 = __PAIR64__(HIDWORD(v54), v14);
    HIDWORD(v67) = v15;
    *((_QWORD *)&v68 + 1) = v14;
    DWORD2(v67) = 0;
    v16 = *(_QWORD *)v55[0];
    v61 = v67;
    v62 = v68;
    v63 = 0LL;
    v64 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v16 + 104))(v55[0], &v61);
    v9 = v17;
    if ( v17 >= 0 )
    {
      v18 = (int)*(float *)(a1 + 136);
      v19 = (int)*(float *)(a1 + 140);
      v66 = *(_OWORD *)(a1 + 128);
      KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        a1 + 16,
        &v55[1],
        *(HMONITOR *)(a1 + 120),
        (__int64)&v66,
        *(_DWORD *)(a1 + 160),
        *(_BYTE *)(a1 + 304),
        *(double *)(a1 + 312),
        (double *)(a1 + 288));
      v64 = 0LL;
      LODWORD(v61) = 2;
      *(_QWORD *)((char *)&v61 + 4) = 2LL;
      *(_QWORD *)&v62 = __PAIR64__(HIDWORD(v54), v14);
      HIDWORD(v61) = v56;
      *((_QWORD *)&v62 + 1) = (unsigned int)v54;
      v69 = 0LL;
      v70 = 0LL;
      LODWORD(v67) = 2;
      *(_QWORD *)((char *)&v67 + 4) = 2LL;
      *(_QWORD *)&v68 = __PAIR64__(HIDWORD(v55[1]), v18);
      HIDWORD(v67) = v19;
      *((_QWORD *)&v68 + 1) = LODWORD(v55[1]);
      v20 = v18;
      v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      if ( v21 < v18 )
        v20 = v21;
      DWORD1(v69) = v20;
      v22 = v19;
      if ( DWORD2(v69) < v19 )
        v22 = DWORD2(v69);
      DWORD2(v69) = v22;
      v23 = v18;
      if ( HIDWORD(v69) < v18 )
        v23 = HIDWORD(v69);
      HIDWORD(v69) = v23;
      if ( (unsigned int)v70 < v19 )
        v19 = v70;
      LODWORD(v70) = v19;
      WORD4(v67) = 257;
      v24 = *(_QWORD *)v55[0];
      v57 = v67;
      v58 = v68;
      v59 = v69;
      v60 = v70;
      v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v24 + 104))(v55[0], &v57);
      v9 = v17;
      if ( v17 >= 0 )
      {
        if ( a5 )
        {
          v25 = v61;
          v67 = v61;
          v26 = v62;
          v68 = v62;
          v69 = 0LL;
          v27 = v64;
          v70 = v64;
          v28 = a3[3] + a3[1];
          DWORD1(v67) = 6;
          v29 = (int)a3[2];
          DWORD2(v68) = v29;
          LODWORD(v68) = v29;
          LODWORD(v69) = v29;
          v30 = *(float *)(a1 + 208);
          v31 = *a3 - v30;
          if ( (float)v29 <= v31 )
            v31 = (float)v29;
          DWORD1(v69) = (int)v31;
          v32 = *(float *)(a1 + 212);
          v33 = v28 - v32;
          if ( (float)SHIDWORD(v67) <= (float)(v28 - v32) )
            v33 = (float)SHIDWORD(v67);
          DWORD2(v69) = (int)v33;
          v34 = (float)(v30 + *(float *)(a1 + 216)) - *a3;
          if ( (float)v29 <= v34 )
            v34 = (float)v29;
          HIDWORD(v69) = (int)v34;
          v35 = (float)(v32 + *(float *)(a1 + 220)) - v28;
          if ( (float)SHIDWORD(v67) <= v35 )
            v35 = (float)SHIDWORD(v67);
          LODWORD(v70) = (int)v35;
          v36 = *(_QWORD *)v55[0];
          v57 = v67;
          v58 = v68;
          v59 = v69;
          v60 = v70;
          v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v36 + 104))(v55[0], &v57);
          v9 = v17;
          if ( v17 < 0 )
          {
            v13 = 267LL;
            goto LABEL_50;
          }
          v67 = v25;
          v68 = v26;
          v69 = 0LL;
          v70 = v27;
          DWORD1(v67) = 6;
          DWORD2(v68) = v29;
          LODWORD(v68) = v18;
          v37 = *(float *)(a1 + 208);
          v38 = *a3 - v37;
          if ( (float)v18 <= v38 )
            v38 = (float)v18;
          DWORD1(v69) = (int)v38;
          v39 = *(float *)(a1 + 212);
          v40 = v28 - v39;
          if ( (float)SHIDWORD(v67) <= (float)(v28 - v39) )
            v40 = (float)SHIDWORD(v67);
          DWORD2(v69) = (int)v40;
          v41 = (float)(v37 + *(float *)(a1 + 216)) - *a3;
          if ( (float)v18 <= v41 )
            v41 = (float)v18;
          HIDWORD(v69) = (int)v41;
          v42 = (float)(v39 + *(float *)(a1 + 220)) - v28;
          if ( (float)SHIDWORD(v67) <= v42 )
            v42 = (float)SHIDWORD(v67);
          LODWORD(v70) = (int)v42;
          v43 = *(_QWORD *)v55[0];
          v44 = v67;
          v57 = v67;
          v45 = v68;
          v58 = v68;
          v46 = v69;
          v59 = v69;
          v47 = v70;
          v60 = v70;
          v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v43 + 104))(v55[0], &v57);
          v9 = v17;
          if ( v17 < 0 )
          {
            v13 = 279LL;
            goto LABEL_50;
          }
          v57 = v44;
          WORD4(v57) = 257;
          v48 = *(_QWORD *)v55[0];
          v58 = v45;
          v59 = v46;
          v60 = v47;
          v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v48 + 104))(v55[0], &v57);
          v9 = v17;
          if ( v17 < 0 )
          {
            v13 = 286LL;
            goto LABEL_50;
          }
        }
        v49 = a3[2];
        if ( v49 > 0.0 )
        {
          v50 = a3[3];
          if ( v50 > 0.0 )
          {
            LODWORD(v55[1]) = (int)v49;
            HIDWORD(v55[1]) = (int)v50;
            v54 = v55[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v54);
            AddOptionsRelativeToInside(3, (__int64)a3, a1 + 200, (unsigned int *)&v55[1], 0, &v54);
            v54 = v55[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v54);
            AddOptionsRelativeToInside(3, (__int64)a3, a1 + 200, (unsigned int *)&v55[1], 1, &v54);
          }
        }
        v51 = *(float *)(a4 + 8);
        if ( v51 > 0.0 )
        {
          v52 = *(float *)(a4 + 12);
          if ( v52 > 0.0 )
          {
            LODWORD(v54) = (int)v51;
            HIDWORD(v54) = (int)v52;
            v55[1] = v55[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v55[1]);
            AddOptionsRelativeToInside(5, a4, a1 + 200, (unsigned int *)&v54, 0, &v55[1]);
            v55[1] = v55[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v55[1]);
            AddOptionsRelativeToInside(5, a4, a1 + 200, (unsigned int *)&v54, 1, &v55[1]);
          }
        }
        v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55[0] + 64LL))(v55[0], v65);
        v9 = v17;
        if ( v17 >= 0 )
        {
          v9 = 0;
          goto LABEL_53;
        }
        v13 = 305LL;
        goto LABEL_50;
      }
      v13 = 250LL;
    }
    else
    {
      v13 = 213LL;
    }
LABEL_50:
    v12 = (unsigned int)v17;
    goto LABEL_51;
  }
  v12 = (unsigned int)v9;
  v13 = 177LL;
LABEL_51:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v12);
LABEL_53:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v55);
  return (unsigned int)v9;
}
