/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180162A54
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CheckConnectorSupportForPeriodicity(
        __int64 *a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  double v19; // xmm1_8
  double v20; // xmm0_8
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v27[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  __int16 v29; // [rsp+40h] [rbp-20h] BYREF
  int v30; // [rsp+48h] [rbp-18h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v33; // [rsp+88h] [rbp+28h] BYREF
  __int64 v34; // [rsp+90h] [rbp+30h] BYREF
  int v35; // [rsp+98h] [rbp+38h] BYREF

  v29 = 65;
  v30 = a4;
  v31 = a3;
  v34 = 0LL;
  v7 = *a1;
  if ( a2 )
  {
    *(_QWORD *)v27 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, __int16 *, int *))(v7 + 24))(
            a1,
            &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
            1LL,
            &v29,
            v27);
    v14 = v13;
    if ( v13 < 0 )
    {
      v10 = -2005139404;
      if ( v13 != -2005139404 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B4,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v13);
        v10 = v14;
      }
      goto LABEL_9;
    }
    v15 = v34;
    v34 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v27)(
            *(_QWORD *)v27,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v34);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_9;
    }
LABEL_19:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v27);
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 40LL))(v34, &v33);
    v10 = v17;
    if ( v17 < 0 )
    {
      v18 = 442LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_47;
    }
    if ( !v33 )
    {
      v19 = (double)*(int *)(a3 + 48);
      v20 = (double)(int)a5;
LABEL_45:
      *a6 = (int)(v19 * v20 / 10000000.0 + 0.5);
      goto LABEL_46;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 32LL))(v34, &v35);
    v10 = v17;
    if ( v17 < 0 )
    {
      v18 = 453LL;
      goto LABEL_25;
    }
    if ( !v35 )
    {
      v25 = 20000;
      if ( a5 >= 0x4E20 )
        v25 = a5;
      v19 = (double)v25;
      v20 = (double)*(int *)(a3 + 48);
      goto LABEL_45;
    }
    v28 = 0LL;
    v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v34)(
            v34,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v28);
    v10 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, 0x40000LL);
      v10 = v21;
      if ( v21 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v34 + 24LL))(v34, a5, 0LL);
        v10 = v21;
        if ( v21 == -2005139372 || v21 >= 0 )
        {
          *(_QWORD *)v27 = 0LL;
          v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v34)(
                  v34,
                  &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
                  v27);
          v10 = v23;
          if ( v23 >= 0 )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)v27 + 32LL))(*(_QWORD *)v27, a6);
            v10 = v23;
            if ( v23 >= 0 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v27);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
LABEL_46:
              v10 = 0;
              goto LABEL_47;
            }
            v24 = 479LL;
          }
          else
          {
            v24 = 477LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v27);
LABEL_40:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
          goto LABEL_47;
        }
        v22 = 472LL;
      }
      else
      {
        v22 = 461LL;
      }
    }
    else
    {
      v22 = 458LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_40;
  }
  *(_QWORD *)v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, __int16 *, int *))(v7 + 24))(
         a1,
         &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
         1LL,
         &v29,
         v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = -2005139404;
    if ( v8 != -2005139404 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AD,
        (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v8);
      v10 = v9;
    }
    goto LABEL_9;
  }
  v11 = v34;
  v34 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v27)(
          *(_QWORD *)v27,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v34);
  v10 = v12;
  if ( v12 >= 0 )
    goto LABEL_19;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AE,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)(unsigned int)v12);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v27);
LABEL_47:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
  return v10;
}
