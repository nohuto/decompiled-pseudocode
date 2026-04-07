/*
 * XREFs of ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800180F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180018730 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x180018750 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18002E5D0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x18005D2B0 (_o_ceilf_0.c)
 *     floorf @ 0x18005D2D4 (floorf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CDWriteText::ValidateVisual(CDWriteText *this)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // eax
  float v7; // xmm8_4
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  CGraphicsDeviceManager *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // xmm3_4
  unsigned int v14; // xmm1_4
  int v15; // eax
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  int v18; // eax
  int v19; // eax
  __int64 (__fastcall **v20)(_QWORD, _QWORD, _QWORD); // rax
  int v21; // eax
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v23)(_QWORD, GUID *, _QWORD); // rdi
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v26)(_QWORD, GUID *, __int64 *); // rdi
  __m128 v27; // xmm0
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v29)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // [rsp+28h] [rbp-99h]
  int *v38; // [rsp+28h] [rbp-99h]
  __int64 v39; // [rsp+38h] [rbp-89h] BYREF
  __int64 v40; // [rsp+40h] [rbp-81h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-79h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, _QWORD); // [rsp+50h] [rbp-71h] BYREF
  __int64 v43; // [rsp+58h] [rbp-69h] BYREF
  __int64 v44; // [rsp+60h] [rbp-61h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-59h] BYREF
  __int64 v46; // [rsp+70h] [rbp-51h] BYREF
  int v47[2]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v48; // [rsp+80h] [rbp-41h] BYREF
  _DWORD v49[4]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v50[16]; // [rsp+A0h] [rbp-21h] BYREF
  float v51; // [rsp+B0h] [rbp-11h]
  float v52; // [rsp+B4h] [rbp-Dh]
  float v53; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 22) & 2;
  v3 = CVisual::ValidateVisual(this);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !v2 && (*((_DWORD *)this + 22) & 0x1000) == 0 )
      return 0LL;
    v46 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
    if ( (int)CDWriteText::CreateTextLayout(this) < 0 )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), v46);
      v4 = v32;
      if ( v32 >= 0 )
      {
        *((_DWORD *)this + 22) &= ~0x1000u;
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)v32,
          v37);
      }
      goto LABEL_35;
    }
    v40 = 0LL;
    v39 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 36) + 480LL))(*((_QWORD *)this + 36), v50);
    v4 = v6;
    if ( v6 < 0 )
    {
      v33 = 121LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 36) + 488LL))(*((_QWORD *)this + 36), v49);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v7 = floorf(COERCE_FLOAT(v49[0] ^ _xmm)) - 1.0;
        v8 = _mm_xor_ps((__m128)v49[1], (__m128)_xmm);
        v8.m128_f32[0] = floorf(v8.m128_f32[0]);
        v9 = v8;
        v9.m128_f32[0] = v8.m128_f32[0] - 1.0;
        *(float *)&v48 = (float)(o_ceilf_0(*(float *)&v49[2] + v52) + 1.0) - v7;
        *((float *)&v48 + 1) = (float)(o_ceilf_0(*(float *)&v49[3] + v53) + 1.0) - v9.m128_f32[0];
        v41 = 0LL;
        v10 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
        v11 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v10);
        if ( v11 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x33,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
            (const char *)(unsigned int)v11,
            v37);
        v38 = (int *)&v41;
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(**((_QWORD **)v10 + 5) + 48LL))(
                *((_QWORD **)v10 + 5),
                v48,
                87LL);
        v4 = v12;
        if ( v12 < 0 )
        {
          v34 = 140LL;
        }
        else
        {
          v12 = (**v41)(v41, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, &v40);
          v4 = v12;
          if ( v12 < 0 )
          {
            v34 = 143LL;
          }
          else
          {
            v38 = v47;
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v40 + 24LL))(
                    v40,
                    0LL,
                    &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
                    &v39);
            v4 = v12;
            if ( v12 >= 0 )
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 272LL))(v39, 2LL);
              v48 = 0LL;
              (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v39 + 376LL))(v39, &v48);
              v43 = 0LL;
              *(float *)&v13 = (float)*((unsigned __int8 *)this + 514) / 255.0;
              *(float *)&v14 = (float)*((unsigned __int8 *)this + 513) / 255.0;
              *(float *)&v48 = (float)*((unsigned __int8 *)this + 512) / 255.0;
              *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v13, v14);
              HIDWORD(v48) = 1065353216;
              v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*(_QWORD *)v39 + 64LL))(
                      v39,
                      &v48,
                      0LL,
                      &v43);
              v4 = v15;
              if ( v15 < 0 )
              {
                v35 = 165LL;
              }
              else
              {
                v16 = (__m128)COERCE_UNSIGNED_INT((float)v47[0]);
                v16.m128_f32[0] = v16.m128_f32[0] - v7;
                v17 = (__m128)COERCE_UNSIGNED_INT((float)v47[1]);
                v17.m128_f32[0] = v17.m128_f32[0] - v9.m128_f32[0];
                LODWORD(v38) = 0;
                (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v39 + 224LL))(
                  v39,
                  _mm_unpacklo_ps(v16, v17).m128_u64[0],
                  *((_QWORD *)this + 36),
                  v43);
                v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
                v4 = v15;
                if ( v15 >= 0 )
                {
                  v44 = 0LL;
                  v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v40)(
                          v40,
                          &GUID_1527540d_42c7_47a6_a408_668f79a90dfb,
                          &v44);
                  v4 = v18;
                  if ( v18 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xB2,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
                      (const char *)(unsigned int)v18,
                      0);
                    goto LABEL_31;
                  }
                  v42 = 0LL;
                  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 192LL))(v5, v44, &v42);
                  v4 = v19;
                  if ( v19 < 0 )
                  {
                    v36 = 181LL;
                  }
                  else
                  {
                    v20 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v42;
                    if ( (*((_BYTE *)this + 92) & 1) != 0 )
                    {
                      v19 = ((__int64 (*)(void))v20[9])();
                      v4 = v19;
                      if ( v19 < 0 )
                      {
                        v36 = 185LL;
                        goto LABEL_54;
                      }
                    }
                    else
                    {
                      v19 = ((__int64 (*)(void))v20[9])();
                      v4 = v19;
                      if ( v19 < 0 )
                      {
                        v36 = 189LL;
                        goto LABEL_54;
                      }
                    }
                    v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD), _QWORD))(*v42)[11])(
                            v42,
                            0LL);
                    v4 = v19;
                    if ( v19 >= 0 )
                    {
                      v45 = 0LL;
                      v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v42)[15])(v42);
                      v4 = v21;
                      if ( v21 < 0 )
                      {
                        v31 = 195LL;
                      }
                      else
                      {
                        v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v42;
                        v23 = **v42;
                        v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
                        if ( v45 )
                        {
                          v45 = 0LL;
                          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v24)[2])(v24);
                        }
                        v21 = v23(v22, &GUID_d27174d5_64f5_4692_9dc7_71b61d7e5880, &v45);
                        v4 = v21;
                        if ( v21 < 0 )
                        {
                          v31 = 196LL;
                        }
                        else
                        {
                          v25 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
                          v26 = (*v45)[11];
                          v9.m128_f32[0] = v9.m128_f32[0] + (float)((float)((float)*((int *)this + 33) - v51) * 0.5);
                          v27 = v9;
                          v27.m128_f32[0] = floorf(v9.m128_f32[0]);
                          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), unsigned __int64))v26)(
                            v25,
                            _mm_unpacklo_ps((__m128)0LL, v27).m128_u64[0]);
                          v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
                          v29 = **v45;
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
                          v21 = v29(v28, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v46);
                          v4 = v21;
                          if ( v21 < 0 )
                          {
                            v31 = 200LL;
                          }
                          else
                          {
                            v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
                                    *((_QWORD *)this + 31),
                                    v46);
                            v4 = v21;
                            if ( v21 >= 0 )
                            {
                              *((_DWORD *)this + 22) &= ~0x1000u;
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
                              return 0LL;
                            }
                            v31 = 201LL;
                          }
                        }
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v31,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
                        (const char *)(unsigned int)v21,
                        0);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
                      goto LABEL_30;
                    }
                    v36 = 191LL;
                  }
LABEL_54:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v36,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
                    (const char *)(unsigned int)v19,
                    0);
LABEL_30:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
LABEL_31:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
LABEL_32:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
LABEL_33:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
LABEL_34:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
LABEL_35:
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
                  return v4;
                }
                v35 = 174LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v35,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
                (const char *)(unsigned int)v15,
                (int)v38);
              goto LABEL_32;
            }
            v34 = 150LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)v12,
          (int)v38);
        goto LABEL_33;
      }
      v33 = 122LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v6,
      v37);
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
    (const char *)(unsigned int)v3,
    v37);
  return v4;
}
