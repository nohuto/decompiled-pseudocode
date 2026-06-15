/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001D8B0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14001A82C (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001B550 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x140037F7C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2A4 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B4A4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x140060880 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     ??4?$com_ptr_t@UIAudioEndpoint@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoint@@@Z @ 0x140060930 (--4-$com_ptr_t@UIAudioEndpoint@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoint@.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x140061298 (McTemplateU0zq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r12
  _DWORD *v4; // r15
  HRESULT v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  unsigned __int16 *v10; // r13
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 (__fastcall **v16)(_QWORD, _QWORD, _QWORD); // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r12d
  BOOL v20; // esi
  int v21; // r15d
  struct IAudioEndpointRT *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  void *v27; // rax
  CEndpointInstance *v28; // r14
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, HANDLE *); // rdi
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  __int64 v36; // r9
  __int64 v37; // rdx
  struct IAudioEndpointRT *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 (__fastcall **v45)(_QWORD, _QWORD, _QWORD); // rax
  int v46; // eax
  __int64 v47; // rcx
  int *ppv; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v50; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  CEndpointInstance *v54; // [rsp+58h] [rbp-A8h] BYREF
  struct IAudioEndpointRT *v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v57[8]; // [rsp+70h] [rbp-90h] BYREF
  int v58[2]; // [rsp+78h] [rbp-88h] BYREF
  int v59[2]; // [rsp+80h] [rbp-80h] BYREF
  int v60; // [rsp+88h] [rbp-78h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h] BYREF
  __int128 v62; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v63; // [rsp+A8h] [rbp-58h]
  _WORD v64[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+DCh] [rbp-24h]
  __int64 v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+F4h] [rbp-Ch]
  int v71; // [rsp+F8h] [rbp-8h]
  int v72; // [rsp+FCh] [rbp-4h]
  int v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+104h] [rbp+4h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  int v77; // [rsp+110h] [rbp+10h]
  int v78; // [rsp+114h] [rbp+14h]
  BOOL v79; // [rsp+118h] [rbp+18h]
  int v80; // [rsp+11Ch] [rbp+1Ch]
  int v81; // [rsp+120h] [rbp+20h]
  void *v82[2]; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = a2;
  v82[0] = a2;
  v4 = (_DWORD *)((char *)a1 + 100);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq_EtwEventWriteTransfer(a1, a2, *((_QWORD *)a1 + 7), (unsigned int)*v4);
  v57[1] = 1;
  v56 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  if ( *v4 != 1 )
  {
    v50 = 0LL;
    v5 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v50);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v5,
        (int)ppv);
LABEL_59:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v50);
      goto LABEL_96;
    }
    v49 = 0LL;
    v7 = *(_QWORD *)v50;
    v49 = 0LL;
    v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(v7 + 40))(v50, *((_QWORD *)a1 + 7), &v49);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v8,
        (int)ppv);
LABEL_58:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v49);
      goto LABEL_59;
    }
    v53 = 0LL;
    v9 = (**v49)(v49, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v53);
    v6 = v9;
    if ( v9 < 0 )
    {
      v39 = (unsigned int)v9;
      v40 = 95LL;
    }
    else
    {
      if ( v53 )
      {
        v10 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        v62 = 0LL;
        v63 = 0LL;
        LOWORD(v62) = 65;
        v11 = 0LL;
        hObject = 0LL;
        v12 = 0LL;
        v54 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 48LL))(v53);
        v14 = v10[8];
        if ( v13 )
        {
          v11 = CoTaskMemAlloc(v14 + 32);
          hObject = v11;
          if ( v11 )
          {
            *v11 = v10[8] + 32;
            v11[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v11[2] = *v4;
            memcpy_0(v11 + 3, v10, v10[8] + 18LL);
            v15 = v10[8] + 32;
            v63 = v11;
LABEL_11:
            DWORD2(v62) = v15;
            if ( !*((_DWORD *)a1 + 18) )
            {
              *(_QWORD *)v58 = 0LL;
              v16 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v49;
              *(_QWORD *)v58 = 0LL;
              ppv = v58;
              v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *))v16[3])(
                      v49,
                      &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                      1LL,
                      &v62);
              v6 = v17;
              if ( v17 < 0 )
              {
                v44 = 147LL;
              }
              else
              {
                v18 = v52;
                v52 = 0LL;
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                v17 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v58)(
                        *(_QWORD *)v58,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v52);
                v6 = v17;
                if ( v17 >= 0 )
                {
                  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v58);
LABEL_17:
                  v19 = *((_DWORD *)a1 + 24);
                  v20 = *((_DWORD *)a1 + 20) != 0;
                  v21 = *v4;
                  if ( g_u32AEWMILogLevel >= 4 )
                  {
                    memset_0(v64, 0, 0x40uLL);
                    v64[0] = 120;
                    v66 = 0x20000;
                    v65 = AEWMIGUID_ENDPOINT_ACTIVATION;
                    v64[2] = 1025;
                    v67 = 0LL;
                    v68 = 0;
                    v69 = *((_DWORD *)a1 + 34);
                    v70 = v21;
                    v71 = *((_DWORD *)a1 + 18);
                    v72 = *((_DWORD *)a1 + 35);
                    v73 = *v10;
                    v74 = *((_DWORD *)v10 + 1);
                    v75 = v10[7];
                    v76 = v10[1];
                    v77 = *((_DWORD *)a1 + 8);
                    v78 = *((_DWORD *)a1 + 19);
                    v79 = v20;
                    v80 = v19;
                    v81 = 0;
                    EtwLogTraceEvent(g_hAEWMITraceHandle, v64);
                  }
                  v22 = v55;
                  v55 = 0LL;
                  if ( v22 )
                    ((void (__fastcall *)(struct IAudioEndpointRT *))v22->lpVtbl->Release)(v22);
                  v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v52)(
                          v52,
                          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                          &v55);
                  v6 = v23;
                  if ( v23 >= 0 )
                  {
                    v24 = v56;
                    v56 = 0LL;
                    if ( v24 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                    v25 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v55->lpVtbl->QueryInterface)(
                            v55,
                            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                            &v56);
                    v6 = v25;
                    if ( v25 >= 0 )
                    {
                      if ( v12 )
                        CoTaskMemFree(v12);
                      if ( v11 )
                        CoTaskMemFree(v11);
                      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v53);
                      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v49);
                      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v50);
                      v2 = (struct CEndpointInstance **)v82[0];
                      goto LABEL_30;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xB9,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                      (const char *)(unsigned int)v25,
                      (int)ppv);
                    if ( v12 )
                      CoTaskMemFree(v12);
                    if ( v11 )
                      CoTaskMemFree(v11);
                    goto LABEL_63;
                  }
                  v42 = (unsigned int)v23;
                  v41 = 182LL;
                  goto LABEL_68;
                }
                v44 = 149LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v44,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                (const char *)(unsigned int)v17,
                (int)v58);
              wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v58);
              goto LABEL_71;
            }
            *(_QWORD *)v59 = 0LL;
            v45 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v49;
            *(_QWORD *)v59 = 0LL;
            ppv = v59;
            v46 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *))v45[3])(
                    v49,
                    &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                    1LL,
                    &v62);
            v6 = v46;
            if ( v46 < 0 )
            {
              v43 = 160LL;
            }
            else
            {
              v47 = v52;
              v52 = 0LL;
              if ( v47 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
              v46 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v59)(
                      *(_QWORD *)v59,
                      &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                      &v52);
              v6 = v46;
              if ( v46 >= 0 )
              {
                wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v59);
                goto LABEL_17;
              }
              v43 = 162LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v43,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)(unsigned int)v46,
              (int)v59);
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v59);
            goto LABEL_71;
          }
          v41 = 126LL;
        }
        else
        {
          v12 = CoTaskMemAlloc(v14 + 64);
          v54 = (CEndpointInstance *)v12;
          if ( v12 )
          {
            *v12 = v10[8] + 64;
            v12[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v12[2] = *v4;
            *(_OWORD *)(v12 + 3) = *(_OWORD *)((char *)a1 + 104);
            *(_OWORD *)(v12 + 7) = *(_OWORD *)((char *)a1 + 148);
            memcpy_0(v12 + 11, v10, v10[8] + 18LL);
            v15 = v10[8] + 64;
            v63 = v12;
            goto LABEL_11;
          }
          v41 = 111LL;
        }
        v6 = -2147024882;
        v42 = 2147942414LL;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v41,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v42,
          (int)ppv);
LABEL_71:
        wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v54);
        wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&hObject);
        goto LABEL_63;
      }
      v6 = -2147024809;
      v39 = 2147942487LL;
      v40 = 96LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v39,
      (int)ppv);
LABEL_63:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v53);
    goto LABEL_58;
  }
  if ( !*((_QWORD *)a1 + 8) )
  {
    v6 = -2147024809;
    v36 = 2147942487LL;
    v37 = 73LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v36,
      (int)ppv);
LABEL_96:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v52);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v55);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v56);
    wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___(v57);
    return v6;
  }
  wil::com_ptr_t<IAudioEndpoint,wil::err_returncode_policy>::operator=(&v56);
  v52 = 0LL;
  v26 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v56)(
          v56,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v52);
  v6 = v26;
  if ( v26 < 0 )
  {
    v37 = 79LL;
LABEL_50:
    v36 = (unsigned int)v26;
    goto LABEL_51;
  }
  v38 = v55;
  v55 = 0LL;
  if ( v38 )
    ((void (__fastcall *)(struct IAudioEndpointRT *))v38->lpVtbl->Release)(v38);
  v26 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v56)(
          v56,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v55);
  v6 = v26;
  if ( v26 < 0 )
  {
    v37 = 82LL;
    goto LABEL_50;
  }
LABEL_30:
  v60 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 40LL))(v52, &v60);
  v6 = v26;
  if ( v26 < 0 )
  {
    v37 = 190LL;
    goto LABEL_50;
  }
  if ( v60 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 48LL))(v56, 0x40000LL);
    v6 = v26;
    if ( v26 < 0 )
    {
      v37 = 196LL;
      goto LABEL_50;
    }
  }
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v52 + 24LL))(
          v52,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v6 = v26;
  if ( v26 < 0 )
  {
    v37 = 203LL;
    goto LABEL_50;
  }
  v27 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v82[0] = v27;
  if ( v27 )
    v28 = CEndpointInstance::CEndpointInstance(
            (CEndpointInstance *)v27,
            (struct IUnknown *)v55,
            0LL,
            *((_QWORD *)a1 + 4));
  else
    v28 = 0LL;
  v54 = v28;
  if ( !v28 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x8007000ELL,
      (int)ppv);
LABEL_95:
    wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(&v54);
    goto LABEL_96;
  }
  v61 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v56)(v56, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, &v61) >= 0 )
  {
    hObject = 0LL;
    v29 = v61;
    v30 = *(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v61 + 64LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v31 = v30(v29, &hObject);
    v6 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v31,
        (int)ppv);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
    }
    else
    {
      v82[0] = hObject;
      v32 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
              (_QWORD *)v28 + 3,
              v82);
      v6 = v32;
      if ( v32 >= 0 )
      {
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        goto LABEL_42;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v32,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v61);
    goto LABEL_95;
  }
LABEL_42:
  *v2 = v28;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v61);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v52);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v55);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v56);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v33,
      (unsigned int)&CreateDeviceEndpointInstance_Task_Stop,
      v34,
      1,
      (__int64)v82);
  return 0LL;
}
