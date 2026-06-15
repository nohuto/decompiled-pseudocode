/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180017FC0
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // esi
  __int128 *v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int128 *v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  int v29; // esi
  __int128 *i; // rdi
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rax
  int v36; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-40h] BYREF
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v42 = 0LL;
  v43 = 0LL;
  v40[0] = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
    v40);
  if ( a2 )
  {
    if ( v40[0] )
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v40[0] + 64LL))(
             v40[0],
             &PKEY_AudioEngine_HWMixFormat,
             &v42);
    else
      v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_HWMixFormat,
             &v42);
    v7 = v6;
    if ( v6 < 0 )
    {
      v38 = 200LL;
      goto LABEL_94;
    }
    if ( v40[0] )
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v40[0] + 64LL))(
             v40[0],
             &PKEY_AudioEngine_MixFormat,
             &v42);
    else
      v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_MixFormat,
             &v42);
    v7 = v8;
    if ( v8 < 0 )
    {
      v38 = 204LL;
      goto LABEL_94;
    }
  }
  v9 = 0;
  v10 = (__int128 *)qword_180182D30;
  do
  {
    if ( a2 )
    {
      v41 = *v10;
      v11 = 0;
      while ( 1 )
      {
        v12 = qword_180182D30[2 * v11] - v41;
        if ( !v12 )
          v12 = qword_180182D30[2 * v11 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 0xA )
        {
          v39 = 213LL;
LABEL_101:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x80070490LL,
            v40[0]);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v40);
          return 2147943568LL;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v45 = v11 + 2;
      if ( v40[0] )
        v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
                v40[0],
                &v44,
                &v42,
                v41);
      else
        v13 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
                a1,
                &v44,
                &v42,
                v41);
      v7 = v13;
      if ( v13 < 0 )
      {
        v38 = 216LL;
        goto LABEL_94;
      }
      v41 = *v10;
      v14 = 0;
      while ( 1 )
      {
        v15 = qword_180182D30[2 * v14] - v41;
        if ( !v15 )
          v15 = qword_180182D30[2 * v14 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v15 )
          break;
        if ( ++v14 >= 0xA )
          goto LABEL_27;
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
      v45 = v14 + 2;
      if ( v40[0] )
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
          v40[0],
          &v44,
          &v42,
          v41);
      else
        ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
          a1,
          &v44,
          &v42,
          v41);
    }
LABEL_27:
    if ( a3 )
    {
      v41 = *v10;
      v16 = 0;
      while ( 1 )
      {
        v17 = qword_180182D30[2 * v16] - v41;
        if ( !v17 )
          v17 = qword_180182D30[2 * v16 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v17 )
          break;
        if ( ++v16 >= 0xA )
        {
          v39 = 228LL;
          goto LABEL_101;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v45 = v16 + 602;
      if ( v40[0] )
        v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
                v40[0],
                &v44,
                &v42,
                v41);
      else
        v18 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
                a1,
                &v44,
                &v42,
                v41);
      v7 = v18;
      if ( v18 < 0 )
      {
        v38 = 231LL;
        goto LABEL_94;
      }
      v41 = *v10;
      v19 = 0;
      while ( 1 )
      {
        v20 = qword_180182D30[2 * v19] - v41;
        if ( !v20 )
          v20 = qword_180182D30[2 * v19 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v20 )
          break;
        if ( ++v19 >= 0xA )
          goto LABEL_45;
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
      v45 = v19 + 602;
      if ( v40[0] )
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
          v40[0],
          &v44,
          &v42,
          v41);
      else
        ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
          a1,
          &v44,
          &v42,
          v41);
    }
LABEL_45:
    ++v9;
    ++v10;
  }
  while ( v9 < 0xA );
  v21 = 0;
  v22 = (__int128 *)qword_180182D30;
  do
  {
    if ( a2 )
    {
      v41 = *v22;
      v23 = 0;
      while ( 1 )
      {
        v24 = qword_180182D30[2 * v23] - v41;
        if ( !v24 )
          v24 = qword_180182D30[2 * v23 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v24 )
          break;
        if ( ++v23 >= 0xA )
        {
          v39 = 247LL;
          goto LABEL_101;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v45 = v23 + 2;
      v25 = v40[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
              v40[0],
              &v44,
              &v42,
              v41)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v44,
              &v42,
              v41);
      v7 = v25;
      if ( v25 < 0 )
      {
        v38 = 250LL;
        goto LABEL_94;
      }
    }
    if ( a3 )
    {
      v41 = *v22;
      v26 = 0;
      while ( 1 )
      {
        v27 = qword_180182D30[2 * v26] - v41;
        if ( !v27 )
          v27 = qword_180182D30[2 * v26 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v27 )
          break;
        if ( ++v26 >= 0xA )
        {
          v39 = 256LL;
          goto LABEL_101;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v45 = v26 + 602;
      v28 = v40[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
              v40[0],
              &v44,
              &v42,
              v41)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v44,
              &v42,
              v41);
      v7 = v28;
      if ( v28 < 0 )
      {
        v38 = 259LL;
        goto LABEL_94;
      }
    }
    ++v21;
    ++v22;
  }
  while ( v21 < 0xA );
  v29 = 0;
  for ( i = (__int128 *)qword_180182D30; ; ++i )
  {
    if ( a2 )
    {
      v41 = *i;
      v31 = 0;
      while ( 1 )
      {
        v32 = qword_180182D30[2 * v31] - v41;
        if ( !v32 )
          v32 = qword_180182D30[2 * v31 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v32 )
          break;
        if ( ++v31 >= 0xA )
        {
          v39 = 269LL;
          goto LABEL_101;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v45 = v31 + 2;
      v33 = v40[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
              v40[0],
              &v44,
              &v42,
              v41)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v44,
              &v42,
              v41);
      v7 = v33;
      if ( v33 < 0 )
        break;
    }
    if ( a3 )
    {
      v41 = *i;
      v34 = 0;
      while ( 1 )
      {
        v35 = qword_180182D30[2 * v34] - v41;
        if ( !v35 )
          v35 = qword_180182D30[2 * v34 + 1] - *((_QWORD *)&v41 + 1);
        if ( !v35 )
          break;
        if ( ++v34 >= 0xA )
        {
          v39 = 278LL;
          goto LABEL_101;
        }
      }
      v44 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v45 = v34 + 602;
      v36 = v40[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, _QWORD))(*(_QWORD *)v40[0] + 64LL))(
              v40[0],
              &v44,
              &v42,
              v41)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v44,
              &v42,
              v41);
      v7 = v36;
      if ( v36 < 0 )
      {
        v38 = 281LL;
        goto LABEL_94;
      }
    }
    if ( (unsigned int)++v29 >= 0xA )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v40);
      return 0LL;
    }
  }
  v38 = 272LL;
LABEL_94:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v38,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)v7,
    v40[0]);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v40);
  return v7;
}
