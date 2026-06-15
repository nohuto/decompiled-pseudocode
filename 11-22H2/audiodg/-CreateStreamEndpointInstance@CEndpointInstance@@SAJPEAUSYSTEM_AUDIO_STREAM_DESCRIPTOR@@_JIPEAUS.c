/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001AC90 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140005BC0 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x1400198B8 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001A6B8 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14001A82C (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140023054 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2A4 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2C8 (--1-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd@@@w.c)
 *     wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___ @ 0x14004A304 (wil--details--lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___--_lambda_call__lambda_41ab.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        __int64 a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v9; // r13
  BOOL v10; // edi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r10
  int started; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v18; // r10
  unsigned int v19; // r11d
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // r10
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  HRESULT v26; // eax
  const IID *v27; // r10
  HRESULT v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  struct IAudioEndpointRT *v33; // rbx
  int v34; // edi
  __int64 v35; // rdx
  __int64 *v36; // rcx
  int v37; // edx
  __int64 *v38; // rcx
  __int64 v39; // rdx
  CEndpointInstance *v40; // rax
  struct CEndpointInstance *v41; // rax
  int ppv; // [rsp+28h] [rbp-C1h]
  LPVOID v44; // [rsp+88h] [rbp-61h] BYREF
  struct HandleSendReceiveServer *v45; // [rsp+90h] [rbp-59h] BYREF
  LPVOID v46; // [rsp+98h] [rbp-51h] BYREF
  struct IAudioEndpointRT *v47; // [rsp+A0h] [rbp-49h] BYREF
  unsigned int pvData[4]; // [rsp+A8h] [rbp-41h] BYREF
  DWORD pcbData[4]; // [rsp+B8h] [rbp-31h] BYREF
  char v50; // [rsp+C8h] [rbp-21h]
  __int128 v51; // [rsp+D8h] [rbp-11h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v52; // [rsp+E8h] [rbp-1h] BYREF
  char v53; // [rsp+F0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v55; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned int v56; // [rsp+148h] [rbp+5Fh]

  v56 = a3;
  v55 = a1;
  v52 = &v55;
  v53 = 1;
  v9 = *((_QWORD *)a1 + 16);
  v10 = *(_DWORD *)a1 != 0;
  v11 = *(unsigned __int16 *)(v9 + 12);
  v12 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(a2, *(_DWORD *)(v9 + 8), *(unsigned __int16 *)(v9 + 12), pvData);
  started = v12;
  if ( v12 < 0 )
  {
    v15 = (unsigned int)v12;
    v16 = 294LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v15,
      ppv);
    goto LABEL_69;
  }
  if ( pvData[0] + a3 < pvData[0] )
  {
    v16 = 295LL;
    goto LABEL_67;
  }
  v17 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*(_QWORD *)(v13 + 24), *(_DWORD *)(v9 + 8), v11, pvData);
  started = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v16 = 299LL;
    goto LABEL_68;
  }
  if ( *((_DWORD *)v18 + 2) == 1 )
  {
    v20 = pvData[0];
  }
  else
  {
    v20 = pvData[0];
    if ( v19 > pvData[0] )
      v20 = v19;
  }
  v21 = v20 * v11;
  if ( (unsigned __int64)(v20 * v11) > 0xFFFFFFFF )
  {
    v16 = 308LL;
LABEL_67:
    started = -2147024362;
    v15 = 2147942934LL;
    goto LABEL_68;
  }
  *(_QWORD *)&v51 = *((_QWORD *)v18 + 2);
  v45 = 0LL;
  v44 = 0LL;
  if ( (*((_DWORD *)v18 + 34) & 0x40000) == 0 )
    goto LABEL_26;
  if ( !IsEqualGUID((const struct _GUID *)v18 + 5, &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v44 = 0LL;
    v26 = CoCreateInstance((const IID *const)(v22 + 80), 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &v44);
    started = v26;
    if ( v26 >= 0 )
    {
      v26 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v44 + 24LL))(v44, (__int64)v55 + 96);
      started = v26;
      if ( v26 >= 0 )
      {
LABEL_25:
        v18 = v55;
LABEL_26:
        v46 = 0LL;
        if ( IsEqualGUID((const struct _GUID *)v18 + 4, &GUID_00000000_0000_0000_0000_000000000000) )
        {
          v46 = 0LL;
          v28 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
                  &v46,
                  &v51);
          started = v28;
          if ( v28 < 0 )
          {
            v29 = 339LL;
            goto LABEL_29;
          }
        }
        else
        {
          v46 = 0LL;
          v28 = CoCreateInstance(v27 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v46);
          started = v28;
          if ( v28 < 0 )
          {
            v29 = 333LL;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)(unsigned int)v28,
              ppv);
LABEL_30:
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v46);
            goto LABEL_22;
          }
          v28 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v46 + 24LL))(v46, (__int64)v55 + 96);
          started = v28;
          if ( v28 < 0 )
          {
            v29 = 334LL;
            goto LABEL_29;
          }
        }
        v47 = 0LL;
        if ( v10 )
        {
          v47 = 0LL;
          v51 = *((_OWORD *)v55 + 3);
          *(GUID *)pvData = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
          v31 = privateCreateCrossProcessEndpoint((const struct _GUID *)pvData, &v51, v30, &v47);
          started = v31;
          if ( v31 < 0 )
          {
            v32 = 405LL;
LABEL_49:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v32,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)(unsigned int)v31,
              ppv);
LABEL_50:
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
            goto LABEL_30;
          }
          *(_QWORD *)pcbData = 0LL;
          v33 = v47;
          v34 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, DWORD *))v47->lpVtbl->QueryInterface)(
                  v47,
                  &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                  pcbData);
          if ( v34 < 0 )
          {
            v35 = 408LL;
LABEL_40:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v35,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)(unsigned int)v34,
              ppv);
            v36 = (__int64 *)pcbData;
LABEL_54:
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v36);
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v46);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
            wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(&v45);
            started = v34;
            goto LABEL_69;
          }
          v37 = 0;
          if ( *((_QWORD *)v55 + 32) || *((_QWORD *)v55 + 34) )
            v37 = (int)((double)(int)*((_QWORD *)v55 + 33) * (double)*(int *)(v9 + 4) / 10000000.0 + 0.5);
          ppv = v37;
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)pcbData + 24LL))(
                  *(_QWORD *)pcbData,
                  v9,
                  v21,
                  v56);
          if ( v34 < 0 )
          {
            v35 = 431LL;
            goto LABEL_40;
          }
          *(GUID *)a4 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
          *((_DWORD *)a4 + 234) = 0;
          *((_DWORD *)a4 + 4) = v21;
          v38 = (__int64 *)pcbData;
LABEL_60:
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v38);
          v40 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          *(_QWORD *)pvData = v40;
          if ( v40 )
          {
            v41 = CEndpointInstance::CEndpointInstance(v40, v33, v45, 0LL);
            *(_QWORD *)pvData = v41;
            if ( v41 )
            {
              v45 = 0LL;
              *(_QWORD *)pvData = 0LL;
              *a7 = v41;
              wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(pvData);
              wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
              wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v46);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
              wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(&v45);
              started = 0;
              goto LABEL_69;
            }
          }
          else
          {
            *(_QWORD *)pvData = 0LL;
          }
          started = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C3,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
            (const char *)0x8007000ELL,
            ppv);
          wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(pvData);
          goto LABEL_50;
        }
        v47 = 0LL;
        *(_OWORD *)pcbData = *((_OWORD *)v55 + 3);
        *(GUID *)pvData = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
        v31 = privateCreateCrossProcessEndpoint((const struct _GUID *)pvData, pcbData, v30, &v47);
        started = v31;
        if ( v31 < 0 )
        {
          v32 = 348LL;
          goto LABEL_49;
        }
        *(_QWORD *)&v51 = 0LL;
        v33 = v47;
        v34 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int128 *))v47->lpVtbl->QueryInterface)(
                v47,
                &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                &v51);
        if ( v34 >= 0 )
        {
          if ( *((_DWORD *)v55 + 76) == 2 )
          {
            pvData[0] = 0;
            pcbData[0] = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"SuppressBridgeTargetGlitchLogging",
              0x18u,
              0LL,
              pvData,
              pcbData);
          }
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl);
          ppv = 0;
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v51 + 24LL))(v51, v9, v21, a3);
          if ( v34 >= 0 )
          {
            *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
            *((_DWORD *)a4 + 234) = 0;
            *((_DWORD *)a4 + 4) = v21;
            v38 = (__int64 *)&v51;
            goto LABEL_60;
          }
          v39 = 393LL;
        }
        else
        {
          v39 = 351LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v34,
          ppv);
        v36 = (__int64 *)&v51;
        goto LABEL_54;
      }
      v25 = 325LL;
    }
    else
    {
      v25 = 324LL;
    }
    v24 = (unsigned int)v26;
    goto LABEL_21;
  }
  *(_QWORD *)pcbData = &v45;
  *(_QWORD *)&pcbData[2] = 0LL;
  v50 = 1;
  started = CEndpointInstance::StartALPCHandleServer(
              (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)v22,
              (struct HandleSendReceiveServer **)&pcbData[2]);
  if ( v50 )
  {
    v23 = **(void (__fastcall *****)(_QWORD, __int64))pcbData;
    **(_QWORD **)pcbData = *(_QWORD *)&pcbData[2];
    if ( v23 )
      (**v23)(v23, 1LL);
  }
  if ( started >= 0 )
    goto LABEL_25;
  v24 = (unsigned int)started;
  v25 = 319LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)v24,
    ppv);
LABEL_22:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
  wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(&v45);
LABEL_69:
  wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___(&v52);
  return (unsigned int)started;
}
