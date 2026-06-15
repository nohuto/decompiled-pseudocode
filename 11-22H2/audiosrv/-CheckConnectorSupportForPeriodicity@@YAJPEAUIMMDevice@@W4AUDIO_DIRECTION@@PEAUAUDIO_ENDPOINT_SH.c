/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800339A0
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
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
  unsigned int v9; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  double v22; // xmm1_8
  double v23; // xmm0_8
  int v24; // eax
  int v25[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  __int16 v27; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v31; // [rsp+88h] [rbp+28h] BYREF
  __int64 v32; // [rsp+90h] [rbp+30h] BYREF
  int v33; // [rsp+98h] [rbp+38h] BYREF

  v27 = 65;
  v28 = a4;
  v29 = a3;
  v32 = 0LL;
  v7 = *a1;
  if ( a2 )
  {
    *(_QWORD *)v25 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, __int16 *, int *))(v7 + 24))(
            a1,
            &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
            1LL,
            &v27,
            v25);
    v9 = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -2005139404 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B2,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v17);
      goto LABEL_5;
    }
    v18 = v32;
    v32 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25)(
            *(_QWORD *)v25,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v32);
    v13 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v19);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
      goto LABEL_38;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
  }
  else
  {
    *(_QWORD *)v25 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, __int16 *, int *))(v7 + 24))(
           a1,
           &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
           1LL,
           &v27,
           v25);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2005139404 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AB,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v8);
LABEL_5:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v32);
      return v9;
    }
    v11 = v32;
    v32 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25)(
            *(_QWORD *)v25,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v32);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v12);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
      goto LABEL_38;
    }
    if ( *(_QWORD *)v25 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 40LL))(v32, &v31);
  if ( v13 < 0 )
  {
    v20 = 440LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_38;
  }
  if ( !v31 )
  {
    v22 = (double)*(int *)(a3 + 48);
    v23 = (double)(int)a5;
    goto LABEL_55;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 32LL))(v32, &v33);
  if ( v13 < 0 )
  {
    v20 = 451LL;
    goto LABEL_44;
  }
  if ( v33 )
  {
    *(_QWORD *)v25 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v32)(
            v32,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            v25);
    v13 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v25 + 48LL))(*(_QWORD *)v25, 0x40000LL);
      v13 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CB,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
      }
      else
      {
        v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 24LL))(v32, a5, 0LL);
        v13 = v16;
        if ( v16 == -2005139372 || v16 >= 0 )
        {
          v26 = 0LL;
          v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v32)(
                  v32,
                  &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
                  &v26);
          if ( v13 < 0 )
          {
            v21 = 475LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v26 + 32LL))(v26, a6);
            if ( v13 >= 0 )
            {
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              if ( *(_QWORD *)v25 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 16LL))(*(_QWORD *)v25);
              goto LABEL_25;
            }
            v21 = 477LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D6,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v16);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v25);
        }
      }
    }
LABEL_38:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v32);
    return (unsigned int)v13;
  }
  v24 = 20000;
  if ( a5 >= 0x4E20 )
    v24 = a5;
  v22 = (double)v24;
  v23 = (double)*(int *)(a3 + 48);
LABEL_55:
  *a6 = (int)(v22 * v23 / 10000000.0 + 0.5);
LABEL_25:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return 0LL;
}
