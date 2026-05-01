/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800BF524 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURe.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800C104C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ??0?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x1800F5040 (--0-$ComPtr@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKey.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@01234@@Z @ 0x180166644 (--0-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPosit.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180538B6C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        __int128 *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6)
{
  int PositionAndSizeOptionsHub; // eax
  unsigned int v11; // ebx
  void *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  int v19; // r12d
  unsigned int v20; // r13d
  float *v21; // rdi
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  __int64 v31; // rax
  __int128 v32; // xmm8
  __int128 v33; // xmm10
  __int128 v34; // xmm11
  __int64 v35; // xmm9_8
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm4_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  __int128 v47; // xmm6
  __int128 v48; // xmm7
  __int128 v49; // xmm12
  __int64 v50; // rax
  __int64 v51; // rax
  __int32 v52; // ecx
  unsigned int v53; // eax
  __int32 v54; // eax
  __int32 v55; // eax
  __int64 v56; // rax
  float v57; // xmm6_4
  int v58; // edi
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  __int64 v65; // rax
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  __int64 v72; // rax
  __int128 v73; // xmm6
  __int128 v74; // xmm8
  __int128 v75; // xmm9
  __int64 v76; // xmm7_8
  __int64 v77; // rax
  float v78; // xmm1_4
  float v79; // xmm0_4
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rax
  float v83; // xmm0_4
  float v84; // xmm1_4
  __int64 v85; // rax
  __int64 v86; // rax
  int v88; // [rsp+28h] [rbp-E0h]
  int v89; // [rsp+28h] [rbp-E0h]
  int v90; // [rsp+30h] [rbp-D8h]
  int v91; // [rsp+30h] [rbp-D8h]
  __int64 *v92; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+50h] [rbp-B8h] BYREF
  void *v94; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v95; // [rsp+68h] [rbp-A0h] BYREF
  __m256i v96; // [rsp+78h] [rbp-90h]
  __int64 v97; // [rsp+98h] [rbp-70h]
  _DWORD v98[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v100; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v101; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v102; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v103; // [rsp+E8h] [rbp-20h]
  __m256i v104; // [rsp+F8h] [rbp-10h]
  __int64 v105; // [rsp+118h] [rbp+10h]
  __int128 v106; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  *(_QWORD *)&v100 = a2;
  *(_QWORD *)&v101 = a6;
  if ( !IsPPIEdition() )
  {
    v92 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v92);
    v92 = 0LL;
    v11 = 0;
    v93 = 0LL;
    v12 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v94 = v12;
    v13 = 0LL;
    if ( v12 )
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(v12);
      v93 = v13;
      v94 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v94);
    if ( v13 )
    {
      v93 = 0LL;
      v92 = (__int64 *)v13;
    }
    else
    {
      v11 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v93);
    if ( (v11 & 0x80000000) != 0 )
    {
      v14 = v11;
      v15 = 323LL;
LABEL_80:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
        (const char *)v14,
        v88);
LABEL_82:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v92);
      return v11;
    }
    v106 = *(_OWORD *)(a1 + 208);
    v94 = (void *)(a1 + 200);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      &v93,
      *(_QWORD *)(a1 + 200),
      &v106,
      *(_DWORD *)(a1 + 240),
      *(_BYTE *)(a1 + 304),
      *(_QWORD *)(a1 + 312),
      a1 + 296);
    v106 = *(_OWORD *)(a1 + 48);
    LOBYTE(v90) = *(_BYTE *)(a1 + 304);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      &v99,
      *(_QWORD *)(a1 + 40),
      &v106,
      *(_DWORD *)(a1 + 80),
      v90,
      *(_QWORD *)(a1 + 312),
      a1 + 280);
    v16 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
            v98,
            &v92);
    v106 = *(_OWORD *)(a1 + 260);
    AddOptionsRelativeToInside(1, (unsigned int)&v106, a1 + 200, (unsigned int)&v93, 0, v16);
    v17 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
            v98,
            &v92);
    v106 = *(_OWORD *)(a1 + 100);
    AddOptionsRelativeToInside(1, (unsigned int)&v106, a1 + 40, (unsigned int)&v99, 1, v17);
    v99 = (unsigned int)(int)*(float *)(a1 + 268);
    v18 = (int)*(float *)(a1 + 272);
    *(_QWORD *)&v106 = (unsigned int)v18;
    v19 = (int)*(float *)(a1 + 136);
    v20 = (int)*(float *)(a1 + 140);
    v102 = *(_OWORD *)(a1 + 128);
    LOBYTE(v91) = *(_BYTE *)(a1 + 304);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      v98,
      *(_QWORD *)(a1 + 120),
      &v102,
      *(_DWORD *)(a1 + 160),
      v91,
      *(_QWORD *)(a1 + 312),
      a1 + 288);
    WORD5(v103) = 0;
    v104.m256i_i32[4] = 0;
    HIDWORD(v105) = 0;
    *(_QWORD *)&v103 = 0x200000002LL;
    v104.m256i_i64[0] = __PAIR64__(HIDWORD(v93), v99);
    HIDWORD(v103) = v18;
    v104.m256i_i64[1] = (unsigned int)v93;
    v21 = (float *)v100;
    v22 = *(float *)(v100 + 4) + *(float *)(v100 + 12);
    v23 = *(float *)(a1 + 208);
    v24 = *(float *)v100 - v23;
    v25 = (float)(int)v99;
    if ( (float)(int)v99 <= v24 )
      v24 = (float)(int)v99;
    v104.m256i_i32[5] = (int)v24;
    v26 = *(float *)(a1 + 212);
    v27 = v22 - v26;
    v28 = (float)v18;
    if ( (float)v18 <= (float)(v22 - v26) )
      v27 = (float)v18;
    v104.m256i_i32[6] = (int)v27;
    v29 = (float)(v23 + *(float *)(a1 + 216)) - *(float *)v100;
    if ( v25 <= v29 )
      v29 = (float)(int)v99;
    v104.m256i_i32[7] = (int)v29;
    v30 = (float)(v26 + *(float *)(a1 + 220)) - v22;
    if ( v28 <= v30 )
      v30 = (float)v18;
    LODWORD(v105) = (int)v30;
    WORD4(v103) = 0;
    v31 = *v92;
    v32 = v103;
    v95 = v103;
    v33 = *(_OWORD *)v104.m256i_i8;
    v96 = v104;
    v34 = *(_OWORD *)&v104.m256i_u64[2];
    v35 = v105;
    v97 = v105;
    v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v31 + 104))(v92, &v95);
    v11 = v36;
    if ( v36 >= 0 )
    {
      v95 = v32;
      DWORD1(v95) = 1;
      v37 = *v92;
      *(_OWORD *)v96.m256i_i8 = v33;
      *(_OWORD *)&v96.m256i_u64[2] = v34;
      v97 = v35;
      v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v37 + 104))(v92, &v95);
      v11 = v36;
      if ( v36 >= 0 )
      {
        v95 = v32;
        LODWORD(v95) = 6;
        v38 = *v92;
        *(_OWORD *)v96.m256i_i8 = v33;
        *(_OWORD *)&v96.m256i_u64[2] = v34;
        v97 = v35;
        v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v38 + 104))(v92, &v95);
        v11 = v36;
        if ( v36 >= 0 )
        {
          v39 = *(float *)(a1 + 216);
          v40 = *(float *)(a1 + 220);
          v103 = v32;
          v104.m256i_i32[3] = HIDWORD(v33);
          *(_OWORD *)&v104.m256i_u64[2] = v34;
          v105 = v35;
          v104.m256i_i32[0] = v99;
          HIDWORD(v103) = v106;
          v104.m256i_i32[2] = (int)(float)(v39 * 0.5);
          v104.m256i_i32[1] = (int)v40;
          v41 = *(float *)(a1 + 208);
          v42 = *v21 - v41;
          if ( v25 <= v42 )
            v42 = v25;
          v104.m256i_i32[5] = (int)v42;
          v43 = *(float *)(a1 + 212);
          v44 = v21[1] - v43;
          if ( v28 <= v44 )
            v44 = v28;
          v104.m256i_i32[6] = (int)v44;
          v45 = (float)(v39 + v41) - *v21;
          if ( v25 <= v45 )
            v45 = v25;
          v104.m256i_i32[7] = (int)v45;
          v46 = (float)(v40 + v43) - v21[1];
          if ( v28 <= v46 )
            v46 = v28;
          LODWORD(v105) = (int)v46;
          v47 = v103;
          v95 = v103;
          v48 = *(_OWORD *)v104.m256i_i8;
          v49 = *(_OWORD *)&v104.m256i_u64[2];
          DWORD1(v95) = 4;
          v50 = *v92;
          v96 = v104;
          v97 = v105;
          v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v50 + 104))(v92, &v95);
          v11 = v36;
          if ( v36 >= 0 )
          {
            v95 = v47;
            DWORD1(v95) = 8;
            v51 = *v92;
            *(_OWORD *)v96.m256i_i8 = v48;
            *(_OWORD *)&v96.m256i_u64[2] = v49;
            v97 = v105;
            v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v51 + 104))(v92, &v95);
            v11 = v36;
            if ( v36 >= 0 )
            {
              *(_OWORD *)&v104.m256i_u64[2] = 0LL;
              v105 = 0LL;
              LODWORD(v103) = 2;
              *(_QWORD *)((char *)&v103 + 4) = 2LL;
              v104.m256i_i64[0] = __PAIR64__(v98[1], v19);
              HIDWORD(v103) = v20;
              v104.m256i_i64[1] = v98[0];
              v52 = v19;
              v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
              if ( v53 < v19 )
                v52 = v53;
              v104.m256i_i32[5] = v52;
              v54 = v20;
              if ( v104.m256i_i32[6] < v20 )
                v54 = v104.m256i_i32[6];
              v104.m256i_i32[6] = v54;
              v55 = v19;
              if ( v104.m256i_i32[7] < (unsigned int)v19 )
                v55 = v104.m256i_i32[7];
              v104.m256i_i32[7] = v55;
              if ( (unsigned int)v105 < v20 )
                v20 = v105;
              LODWORD(v105) = v20;
              WORD4(v103) = 257;
              v56 = *v92;
              v95 = v103;
              v96 = v104;
              v97 = v105;
              v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v56 + 104))(v92, &v95);
              v11 = v36;
              if ( v36 >= 0 )
              {
                if ( a5 )
                {
                  v103 = v32;
                  *(_OWORD *)v104.m256i_i8 = v33;
                  *(_OWORD *)&v104.m256i_u64[2] = v34;
                  v105 = v35;
                  v57 = a3[3] + a3[1];
                  DWORD1(v103) = 6;
                  v58 = (int)a3[2];
                  v104.m256i_i32[2] = v58;
                  v104.m256i_i32[0] = v58;
                  v104.m256i_i32[4] = v58;
                  v59 = *(float *)(a1 + 208);
                  v60 = *a3 - v59;
                  if ( (float)v58 <= v60 )
                    v60 = (float)v58;
                  v104.m256i_i32[5] = (int)v60;
                  v61 = *(float *)(a1 + 212);
                  v62 = v57 - v61;
                  if ( (float)SHIDWORD(v103) <= (float)(v57 - v61) )
                    v62 = (float)SHIDWORD(v103);
                  v104.m256i_i32[6] = (int)v62;
                  v63 = (float)(v59 + *(float *)(a1 + 216)) - *a3;
                  if ( (float)v58 <= v63 )
                    v63 = (float)v58;
                  v104.m256i_i32[7] = (int)v63;
                  v64 = (float)(v61 + *(float *)(a1 + 220)) - v57;
                  if ( (float)SHIDWORD(v103) <= v64 )
                    v64 = (float)SHIDWORD(v103);
                  LODWORD(v105) = (int)v64;
                  v65 = *v92;
                  v95 = v103;
                  v96 = v104;
                  v97 = v105;
                  v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v65 + 104))(v92, &v95);
                  v11 = v36;
                  if ( v36 < 0 )
                  {
                    v15 = 447LL;
                    goto LABEL_79;
                  }
                  v103 = v32;
                  *(_OWORD *)v104.m256i_i8 = v33;
                  *(_OWORD *)&v104.m256i_u64[2] = v34;
                  v105 = v35;
                  DWORD1(v103) = 6;
                  v104.m256i_i32[2] = v58;
                  v104.m256i_i32[0] = v19;
                  v66 = *(float *)(a1 + 208);
                  v67 = *a3 - v66;
                  if ( (float)v19 <= v67 )
                    v67 = (float)v19;
                  v104.m256i_i32[5] = (int)v67;
                  v68 = *(float *)(a1 + 212);
                  v69 = v57 - v68;
                  if ( (float)SHIDWORD(v103) <= (float)(v57 - v68) )
                    v69 = (float)SHIDWORD(v103);
                  v104.m256i_i32[6] = (int)v69;
                  v70 = (float)(v66 + *(float *)(a1 + 216)) - *a3;
                  if ( (float)v19 <= v70 )
                    v70 = (float)v19;
                  v104.m256i_i32[7] = (int)v70;
                  v71 = (float)(v68 + *(float *)(a1 + 220)) - v57;
                  if ( (float)SHIDWORD(v103) <= v71 )
                    v71 = (float)SHIDWORD(v103);
                  LODWORD(v105) = (int)v71;
                  v72 = *v92;
                  v73 = v103;
                  v95 = v103;
                  v74 = *(_OWORD *)v104.m256i_i8;
                  v96 = v104;
                  v75 = *(_OWORD *)&v104.m256i_u64[2];
                  v76 = v105;
                  v97 = v105;
                  v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v72 + 104))(v92, &v95);
                  v11 = v36;
                  if ( v36 < 0 )
                  {
                    v15 = 459LL;
                    goto LABEL_79;
                  }
                  v95 = v73;
                  WORD4(v95) = 257;
                  v77 = *v92;
                  *(_OWORD *)v96.m256i_i8 = v74;
                  *(_OWORD *)&v96.m256i_u64[2] = v75;
                  v97 = v76;
                  v36 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v77 + 104))(v92, &v95);
                  v11 = v36;
                  if ( v36 < 0 )
                  {
                    v15 = 466LL;
                    goto LABEL_79;
                  }
                }
                v78 = a3[2];
                if ( v78 <= 0.0 || (v79 = a3[3], v79 <= 0.0) )
                {
                  v81 = (int)v94;
                }
                else
                {
                  LODWORD(v93) = (int)v78;
                  HIDWORD(v93) = (int)v79;
                  v80 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
                          &v106,
                          &v92);
                  v81 = (int)v94;
                  AddOptionsRelativeToInside(3, (_DWORD)a3, (_DWORD)v94, (unsigned int)&v93, 0, v80);
                  v82 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
                          &v106,
                          &v92);
                  AddOptionsRelativeToInside(3, (_DWORD)a3, v81, (unsigned int)&v93, 1, v82);
                }
                v83 = a4[2];
                if ( v83 > 0.0 )
                {
                  v84 = a4[3];
                  if ( v84 > 0.0 )
                  {
                    LODWORD(v94) = (int)v83;
                    HIDWORD(v94) = (int)v84;
                    v85 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
                            &v106,
                            &v92);
                    AddOptionsRelativeToInside(5, (_DWORD)a4, v81, (unsigned int)&v94, 0, v85);
                    v86 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>(
                            &v106,
                            &v92);
                    AddOptionsRelativeToInside(5, (_DWORD)a4, v81, (unsigned int)&v94, 1, v86);
                  }
                }
                v36 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v92 + 64))(v92, v101);
                v11 = v36;
                if ( v36 >= 0 )
                {
                  v11 = 0;
                  goto LABEL_82;
                }
                v15 = 485LL;
                goto LABEL_79;
              }
              v15 = 430LL;
            }
            else
            {
              v15 = 414LL;
            }
          }
          else
          {
            v15 = 410LL;
          }
        }
        else
        {
          v15 = 391LL;
        }
      }
      else
      {
        v15 = 384LL;
      }
    }
    else
    {
      v15 = 380LL;
    }
LABEL_79:
    v14 = (unsigned int)v36;
    goto LABEL_80;
  }
  v101 = *(_OWORD *)a4;
  v106 = *(_OWORD *)a3;
  v100 = *a2;
  PositionAndSizeOptionsHub = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptionsHub(
                                a1,
                                (unsigned int)&v100,
                                (unsigned int)&v106,
                                (unsigned int)&v101,
                                a5,
                                a6);
  v11 = PositionAndSizeOptionsHub;
  if ( PositionAndSizeOptionsHub < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)PositionAndSizeOptionsHub,
      v89);
  return v11;
}
