/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800C14F0
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x180088160 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@01234@@Z @ 0x18009B1C0 (--0-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPosit.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@Foundation@6@1UKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800C1F84 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1804858AC (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        float *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  void *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  int v14; // r13d
  __int32 v15; // r15d
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int128 v26; // xmm8
  __int128 v27; // xmm10
  __int128 v28; // xmm11
  __int64 v29; // xmm9_8
  int v30; // eax
  __int64 v31; // rax
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  __int128 v40; // xmm6
  __int128 v41; // xmm7
  __int128 v42; // xmm12
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r15d
  int v46; // edx
  __int32 v47; // ecx
  unsigned int v48; // eax
  __int32 v49; // eax
  __int32 v50; // eax
  __int64 v51; // rax
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v56; // xmm6_4
  int v57; // r14d
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  __int64 v64; // rax
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // rax
  __int128 v72; // xmm6
  __int128 v73; // xmm8
  __int128 v74; // xmm9
  __int64 v75; // xmm7_8
  __int64 v76; // rax
  int PositionAndSizeOptionsHub; // eax
  unsigned __int64 v78; // r9
  __int64 v79; // rdx
  float v80; // xmm1_4
  __int64 *v81; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v84; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v85; // [rsp+78h] [rbp-90h] BYREF
  __m256i v86; // [rsp+88h] [rbp-80h]
  __int64 v87; // [rsp+A8h] [rbp-60h]
  __int128 v88; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v90; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v91; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v92; // [rsp+F8h] [rbp-10h]
  __m256i v93; // [rsp+108h] [rbp+0h]
  __int64 v94; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  *(_QWORD *)&v91 = a6;
  if ( !IsPPIEdition() )
  {
    v82 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
    v82 = 0LL;
    v10 = 0;
    v81 = 0LL;
    v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11
      && (v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)v11),
          (v81 = (__int64 *)v12) != 0LL) )
    {
      v81 = 0LL;
      v82 = (__int64 *)v12;
    }
    else
    {
      v10 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v81);
    if ( (v10 & 0x80000000) != 0 )
    {
      v78 = v10;
      v79 = 323LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
        (const char *)v78);
      goto LABEL_50;
    }
    v84 = *(_OWORD *)(a1 + 144);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v81,
      *(HMONITOR *)(a1 + 136),
      (__int64)&v84,
      *(_DWORD *)(a1 + 176),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 200));
    v84 = *(_OWORD *)(a1 + 48);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v89,
      *(HMONITOR *)(a1 + 40),
      (__int64)&v84,
      *(_DWORD *)(a1 + 80),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 184));
    v83 = (__int64)v82;
    if ( v82 )
      (*(void (__fastcall **)(__int64 *))(*v82 + 8))(v82);
    v84 = *(_OWORD *)(a1 + 144);
    v90 = v84;
    v13 = (unsigned int)v81;
    AddOptionsRelativeToInside(1, (unsigned int)&v90, (unsigned int)&v84, (_DWORD)v81, 0, (__int64)&v83);
    v83 = (__int64)v82;
    if ( v82 )
      (*(void (__fastcall **)(__int64 *))(*v82 + 8))(v82);
    v84 = *(_OWORD *)(a1 + 48);
    v90 = v84;
    AddOptionsRelativeToInside(1, (unsigned int)&v90, (unsigned int)&v84, v89, 1, (__int64)&v83);
    v89 = (unsigned int)(int)*(float *)(a1 + 152);
    v14 = (int)*(float *)(a1 + 156);
    *(_QWORD *)&v90 = (unsigned int)(int)*(float *)(a1 + 104);
    *(_QWORD *)&v84 = (unsigned int)(int)*(float *)(a1 + 108);
    v88 = *(_OWORD *)(a1 + 96);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v83,
      *(HMONITOR *)(a1 + 88),
      (__int64)&v88,
      *(_DWORD *)(a1 + 128),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 192));
    WORD5(v92) = 0;
    HIDWORD(v94) = 0;
    *(_QWORD *)&v92 = 0x200000002LL;
    v15 = v89;
    v93.m256i_i32[0] = v89;
    HIDWORD(v92) = v14;
    *(_OWORD *)((char *)v93.m256i_i64 + 4) = __PAIR64__(v13, HIDWORD(v81));
    v16 = a2[1] + a2[3];
    v17 = *(float *)(a1 + 144);
    v18 = *a2 - v17;
    v19 = (float)(int)v89;
    if ( (float)(int)v89 <= v18 )
      v18 = (float)(int)v89;
    v93.m256i_i32[5] = (int)v18;
    v20 = *(float *)(a1 + 148);
    v21 = v16 - v20;
    v22 = (float)v14;
    if ( (float)v14 <= (float)(v16 - v20) )
      v21 = (float)v14;
    v93.m256i_i32[6] = (int)v21;
    v23 = (float)(v17 + *(float *)(a1 + 152)) - *a2;
    if ( v19 <= v23 )
      v23 = (float)(int)v89;
    v93.m256i_i32[7] = (int)v23;
    v24 = (float)(v20 + *(float *)(a1 + 156)) - v16;
    if ( v22 <= v24 )
      v24 = (float)v14;
    LODWORD(v94) = (int)v24;
    WORD4(v92) = 0;
    v25 = *v82;
    v26 = v92;
    v85 = v92;
    v27 = *(_OWORD *)v93.m256i_i8;
    v86 = v93;
    v28 = *(_OWORD *)&v93.m256i_u64[2];
    v29 = v94;
    v87 = v94;
    v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v25 + 104))(v82, &v85);
    v10 = v30;
    if ( v30 < 0 )
    {
      v79 = 380LL;
    }
    else
    {
      v85 = v26;
      DWORD1(v85) = 1;
      v31 = *v82;
      *(_OWORD *)v86.m256i_i8 = v27;
      *(_OWORD *)&v86.m256i_u64[2] = v28;
      v87 = v29;
      v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v31 + 104))(v82, &v85);
      v10 = v30;
      if ( v30 < 0 )
      {
        v79 = 384LL;
      }
      else
      {
        v32 = *(float *)(a1 + 152);
        v33 = *(float *)(a1 + 156);
        v92 = v26;
        v93.m256i_i32[3] = HIDWORD(v27);
        *(_OWORD *)&v93.m256i_u64[2] = v28;
        v94 = v29;
        v93.m256i_i32[0] = v15;
        HIDWORD(v92) = v14;
        v93.m256i_i32[2] = (int)(float)(v32 * 0.5);
        v93.m256i_i32[1] = (int)v33;
        v34 = *(float *)(a1 + 144);
        v35 = *a2 - v34;
        if ( v19 <= v35 )
          v35 = v19;
        v93.m256i_i32[5] = (int)v35;
        v36 = *(float *)(a1 + 148);
        v37 = a2[1] - v36;
        if ( v22 <= v37 )
          v37 = (float)v14;
        v93.m256i_i32[6] = (int)v37;
        v38 = (float)(v34 + v32) - *a2;
        if ( v19 <= v38 )
          v38 = v19;
        v93.m256i_i32[7] = (int)v38;
        v39 = (float)(v36 + v33) - a2[1];
        if ( v22 <= v39 )
          v39 = (float)v14;
        LODWORD(v94) = (int)v39;
        v40 = v92;
        v85 = v92;
        v41 = *(_OWORD *)v93.m256i_i8;
        v42 = *(_OWORD *)&v93.m256i_u64[2];
        DWORD1(v85) = 4;
        v43 = *v82;
        v86 = v93;
        v87 = v94;
        v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v43 + 104))(v82, &v85);
        v10 = v30;
        if ( v30 < 0 )
        {
          v79 = 403LL;
        }
        else
        {
          v85 = v40;
          DWORD1(v85) = 8;
          v44 = *v82;
          *(_OWORD *)v86.m256i_i8 = v41;
          *(_OWORD *)&v86.m256i_u64[2] = v42;
          v87 = v94;
          v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v44 + 104))(v82, &v85);
          v10 = v30;
          if ( v30 < 0 )
          {
            v79 = 407LL;
          }
          else
          {
            *(_OWORD *)&v93.m256i_u64[2] = 0LL;
            v94 = 0LL;
            LODWORD(v92) = 2;
            *(_QWORD *)((char *)&v92 + 4) = 2LL;
            v45 = v90;
            v93.m256i_i64[0] = __PAIR64__(HIDWORD(v83), v90);
            v46 = v84;
            HIDWORD(v92) = v84;
            v93.m256i_i64[1] = (unsigned int)v83;
            v47 = v90;
            v48 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
            if ( v48 < (unsigned int)v90 )
              v47 = v48;
            v93.m256i_i32[5] = v47;
            v49 = v84;
            if ( v93.m256i_i32[6] < (unsigned int)v84 )
              v49 = v93.m256i_i32[6];
            v93.m256i_i32[6] = v49;
            v50 = v90;
            if ( v93.m256i_i32[7] < (unsigned int)v90 )
              v50 = v93.m256i_i32[7];
            v93.m256i_i32[7] = v50;
            if ( (unsigned int)v94 < (unsigned int)v84 )
              v46 = v94;
            LODWORD(v94) = v46;
            WORD4(v92) = 257;
            v51 = *v82;
            v85 = v92;
            v86 = v93;
            v87 = v94;
            v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v51 + 104))(v82, &v85);
            v10 = v30;
            if ( v30 < 0 )
            {
              v79 = 423LL;
            }
            else
            {
              if ( !a5 )
                goto LABEL_40;
              v92 = v26;
              *(_OWORD *)v93.m256i_i8 = v27;
              *(_OWORD *)&v93.m256i_u64[2] = v28;
              v94 = v29;
              v56 = a3[3] + a3[1];
              DWORD1(v92) = 6;
              v57 = (int)a3[2];
              v93.m256i_i32[2] = v57;
              v93.m256i_i32[0] = v57;
              v93.m256i_i32[4] = v57;
              v58 = *(float *)(a1 + 144);
              v59 = *a3 - v58;
              if ( (float)v57 <= v59 )
                v59 = (float)v57;
              v93.m256i_i32[5] = (int)v59;
              v60 = *(float *)(a1 + 148);
              v61 = v56 - v60;
              if ( (float)SHIDWORD(v92) <= (float)(v56 - v60) )
                v61 = (float)SHIDWORD(v92);
              v93.m256i_i32[6] = (int)v61;
              v62 = (float)(v58 + *(float *)(a1 + 152)) - *a3;
              if ( (float)v57 <= v62 )
                v62 = (float)v57;
              v93.m256i_i32[7] = (int)v62;
              v63 = (float)(v60 + *(float *)(a1 + 156)) - v56;
              if ( (float)SHIDWORD(v92) <= v63 )
                v63 = (float)SHIDWORD(v92);
              LODWORD(v94) = (int)v63;
              v64 = *v82;
              v85 = v92;
              v86 = v93;
              v87 = v94;
              v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v64 + 104))(v82, &v85);
              v10 = v30;
              if ( v30 < 0 )
              {
                v79 = 440LL;
              }
              else
              {
                v92 = v26;
                *(_OWORD *)v93.m256i_i8 = v27;
                *(_OWORD *)&v93.m256i_u64[2] = v28;
                v94 = v29;
                DWORD1(v92) = 6;
                v93.m256i_i32[2] = v57;
                v93.m256i_i32[0] = v45;
                v65 = *(float *)(a1 + 144);
                v66 = *a3 - v65;
                if ( (float)v45 <= v66 )
                  v66 = (float)v45;
                v93.m256i_i32[5] = (int)v66;
                v67 = *(float *)(a1 + 148);
                v68 = v56 - v67;
                if ( (float)SHIDWORD(v92) <= (float)(v56 - v67) )
                  v68 = (float)SHIDWORD(v92);
                v93.m256i_i32[6] = (int)v68;
                v69 = (float)(v65 + *(float *)(a1 + 152)) - *a3;
                if ( (float)v45 <= v69 )
                  v69 = (float)v45;
                v93.m256i_i32[7] = (int)v69;
                v70 = (float)(v67 + *(float *)(a1 + 156)) - v56;
                if ( (float)SHIDWORD(v92) <= v70 )
                  v70 = (float)SHIDWORD(v92);
                LODWORD(v94) = (int)v70;
                v71 = *v82;
                v72 = v92;
                v85 = v92;
                v73 = *(_OWORD *)v93.m256i_i8;
                v86 = v93;
                v74 = *(_OWORD *)&v93.m256i_u64[2];
                v75 = v94;
                v87 = v94;
                v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v71 + 104))(v82, &v85);
                v10 = v30;
                if ( v30 < 0 )
                {
                  v79 = 452LL;
                }
                else
                {
                  v85 = v72;
                  WORD4(v85) = 257;
                  v76 = *v82;
                  *(_OWORD *)v86.m256i_i8 = v73;
                  *(_OWORD *)&v86.m256i_u64[2] = v74;
                  v87 = v75;
                  v30 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v76 + 104))(v82, &v85);
                  v10 = v30;
                  if ( v30 >= 0 )
                  {
LABEL_40:
                    v52 = a3[2];
                    if ( v52 > 0.0 )
                    {
                      v80 = a3[3];
                      if ( v80 > 0.0 )
                      {
                        LODWORD(v83) = (int)v52;
                        HIDWORD(v83) = (int)v80;
                        v81 = v82;
                        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v81);
                        v88 = *(_OWORD *)(a1 + 144);
                        v84 = *(_OWORD *)a3;
                        AddOptionsRelativeToInside(3, (unsigned int)&v84, (unsigned int)&v88, v83, 0, (__int64)&v81);
                        v81 = v82;
                        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v81);
                        v88 = *(_OWORD *)(a1 + 144);
                        v84 = *(_OWORD *)a3;
                        AddOptionsRelativeToInside(3, (unsigned int)&v84, (unsigned int)&v88, v83, 1, (__int64)&v81);
                      }
                    }
                    v53 = a4[2];
                    if ( v53 > 0.0 )
                    {
                      v54 = a4[3];
                      if ( v54 > 0.0 )
                      {
                        LODWORD(v83) = (int)v53;
                        HIDWORD(v83) = (int)v54;
                        v81 = v82;
                        if ( v82 )
                          (*(void (__fastcall **)(__int64 *))(*v82 + 8))(v82);
                        v88 = *(_OWORD *)(a1 + 144);
                        v84 = *(_OWORD *)a4;
                        AddOptionsRelativeToInside(5, (unsigned int)&v84, (unsigned int)&v88, v83, 0, (__int64)&v81);
                        v81 = v82;
                        if ( v82 )
                          (*(void (__fastcall **)(__int64 *))(*v82 + 8))(v82);
                        v88 = *(_OWORD *)(a1 + 144);
                        v84 = *(_OWORD *)a4;
                        AddOptionsRelativeToInside(5, (unsigned int)&v84, (unsigned int)&v88, v83, 1, (__int64)&v81);
                      }
                    }
                    v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v82 + 64))(v82, v91);
                    v10 = v30;
                    if ( v30 >= 0 )
                    {
                      v10 = 0;
LABEL_50:
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v82);
                      return v10;
                    }
                    v79 = 478LL;
                    goto LABEL_86;
                  }
                  v79 = 459LL;
                }
              }
            }
          }
        }
      }
    }
LABEL_86:
    v78 = (unsigned int)v30;
    goto LABEL_87;
  }
  v91 = *(_OWORD *)a4;
  v84 = *(_OWORD *)a3;
  v90 = *(_OWORD *)a2;
  PositionAndSizeOptionsHub = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptionsHub(
                                a1,
                                (unsigned int)&v90,
                                (unsigned int)&v84,
                                (unsigned int)&v91,
                                a5,
                                a6);
  v10 = PositionAndSizeOptionsHub;
  if ( PositionAndSizeOptionsHub < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)PositionAndSizeOptionsHub);
  return v10;
}
