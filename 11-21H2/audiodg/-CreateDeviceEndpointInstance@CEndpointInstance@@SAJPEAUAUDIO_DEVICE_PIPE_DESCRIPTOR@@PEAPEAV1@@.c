/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004CBC
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004978 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x140004A80 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14001B5B8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F710 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400219C0 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14002DF88 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14005A598 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ??4?$com_ptr_t@UIAudioEndpoint@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoint@@@Z @ 0x14005C954 (--4-$com_ptr_t@UIAudioEndpoint@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioEndpoint@.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  HRESULT v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // r15
  _DWORD *v10; // rbx
  char *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 (__fastcall **v15)(_QWORD, _QWORD, _QWORD); // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r12d
  BOOL v19; // esi
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  CEndpointInstance *v24; // rax
  CEndpointInstance *v25; // r14
  CEndpointInstance *v26; // rdi
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, int *); // rsi
  int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 (__fastcall **v41)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int *ppv; // [rsp+20h] [rbp-E0h]
  int v45[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  struct IAudioEndpointRT *v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v52; // [rsp+68h] [rbp-98h] BYREF
  char v53; // [rsp+71h] [rbp-8Fh]
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  CEndpointInstance *v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+88h] [rbp-78h] BYREF
  char *v57; // [rsp+98h] [rbp-68h]
  char *v58; // [rsp+A0h] [rbp-60h]
  _WORD v59[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+DCh] [rbp-24h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F4h] [rbp-Ch]
  int v66; // [rsp+F8h] [rbp-8h]
  int v67; // [rsp+FCh] [rbp-4h]
  int v68; // [rsp+100h] [rbp+0h]
  int v69; // [rsp+104h] [rbp+4h]
  int v70; // [rsp+108h] [rbp+8h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  int v72; // [rsp+110h] [rbp+10h]
  int v73; // [rsp+114h] [rbp+14h]
  BOOL v74; // [rsp+118h] [rbp+18h]
  int v75; // [rsp+11Ch] [rbp+1Ch]
  int v76; // [rsp+120h] [rbp+20h]
  _QWORD v77[2]; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = a2;
  v77[0] = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq_EtwEventWriteTransfer(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v53 = 1;
  v47 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  if ( *((_DWORD *)a1 + 25) == 1 )
  {
    if ( !*((_QWORD *)a1 + 8) )
    {
      v5 = -2147024809;
      v34 = 2147942487LL;
      v35 = 74LL;
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)v34,
        (int)ppv);
      goto LABEL_42;
    }
    wil::com_ptr_t<IAudioEndpoint,wil::err_returncode_policy>::operator=(&v47);
    v46 = 0LL;
    v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v47)(
            v47,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v46);
    v5 = v23;
    if ( v23 >= 0 )
    {
      wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v49);
      v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v47)(
              v47,
              &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
              &v49);
      v5 = v23;
      if ( v23 >= 0 )
        goto LABEL_27;
      v35 = 83LL;
    }
    else
    {
      v35 = 80LL;
    }
LABEL_84:
    v34 = (unsigned int)v23;
    goto LABEL_85;
  }
  v52 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v52);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v4,
      (int)ppv);
LABEL_80:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v52);
    goto LABEL_42;
  }
  v48 = 0LL;
  v6 = *(_QWORD *)v52;
  v48 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD))(v6 + 40))(v52, *((_QWORD *)a1 + 7), &v48);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v7,
      (int)ppv);
LABEL_79:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
    goto LABEL_80;
  }
  v51 = 0LL;
  v8 = (**v48)(v48, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v51);
  v5 = v8;
  if ( v8 < 0 )
  {
    v36 = (unsigned int)v8;
    v37 = 96LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v36,
      (int)ppv);
LABEL_78:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v51);
    goto LABEL_79;
  }
  if ( !v51 )
  {
    v5 = -2147024809;
    v36 = 2147942487LL;
    v37 = 97LL;
    goto LABEL_55;
  }
  v9 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v56 = 0LL;
  v57 = 0LL;
  LOWORD(v56) = 65;
  v10 = 0LL;
  v55 = 0LL;
  v11 = 0LL;
  v58 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 48LL))(v51);
  v13 = v9[8];
  if ( !v12 )
  {
    v11 = (char *)CoTaskMemAlloc(v13 + 64);
    v58 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v9[8] + 64;
      *((_DWORD *)v11 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      *((_DWORD *)v11 + 2) = *((_DWORD *)a1 + 25);
      *(_OWORD *)(v11 + 12) = *(_OWORD *)((char *)a1 + 104);
      *(_OWORD *)(v11 + 28) = *(_OWORD *)((char *)a1 + 152);
      memcpy_0(v11 + 44, v9, v9[8] + 18LL);
      v14 = v9[8] + 64;
      v57 = v11;
      goto LABEL_11;
    }
    v5 = -2147024882;
    v38 = 2147942414LL;
    v39 = 112LL;
LABEL_73:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v38,
      (int)ppv);
    goto LABEL_74;
  }
  v10 = CoTaskMemAlloc(v13 + 32);
  v55 = (CEndpointInstance *)v10;
  if ( !v10 )
  {
    v5 = -2147024882;
    v38 = 2147942414LL;
    v39 = 127LL;
    goto LABEL_73;
  }
  *v10 = v9[8] + 32;
  v10[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
  v10[2] = *((_DWORD *)a1 + 25);
  memcpy_0(v10 + 3, v9, v9[8] + 18LL);
  v14 = v9[8] + 32;
  v57 = (char *)v10;
LABEL_11:
  DWORD2(v56) = v14;
  *(_QWORD *)v45 = 0LL;
  if ( !*((_DWORD *)a1 + 18) )
  {
    v15 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v48;
    *(_QWORD *)v45 = 0LL;
    ppv = v45;
    v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *))v15[3])(
            v48,
            &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
            1LL,
            &v56);
    v5 = v16;
    if ( v16 < 0 )
    {
      v40 = 148LL;
    }
    else
    {
      v17 = v46;
      v46 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v45)(
              *(_QWORD *)v45,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v46);
      v5 = v16;
      if ( v16 >= 0 )
        goto LABEL_16;
      v40 = 150LL;
    }
LABEL_62:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v16,
      (int)v45);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v45);
LABEL_74:
    if ( v11 )
      CoTaskMemFree(v11);
    if ( v10 )
      CoTaskMemFree(v10);
    goto LABEL_78;
  }
  v41 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v48;
  *(_QWORD *)v45 = 0LL;
  ppv = v45;
  v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), GUID *, __int64, __int128 *))v41[3])(
          v48,
          &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
          1LL,
          &v56);
  v5 = v16;
  if ( v16 < 0 )
  {
    v40 = 161LL;
    goto LABEL_62;
  }
  v42 = v46;
  v46 = 0LL;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v45)(
          *(_QWORD *)v45,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v46);
  v5 = v16;
  if ( v16 < 0 )
  {
    v40 = 163LL;
    goto LABEL_62;
  }
LABEL_16:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v45);
  v18 = *((_DWORD *)a1 + 24);
  v19 = *((_DWORD *)a1 + 20) != 0;
  v20 = *((_DWORD *)a1 + 19);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v59, 0, 0x40uLL);
    v59[0] = 120;
    v61 = 0x20000;
    v60 = AEWMIGUID_ENDPOINT_ACTIVATION;
    v59[2] = 1025;
    v62 = 0LL;
    v63 = 0;
    v64 = *((_DWORD *)a1 + 34);
    v65 = *((_DWORD *)a1 + 25);
    v66 = *((_DWORD *)a1 + 18);
    v67 = *((_DWORD *)a1 + 36);
    v68 = *v9;
    v69 = *((_DWORD *)v9 + 1);
    v70 = v9[7];
    v71 = v9[1];
    v72 = *((_DWORD *)a1 + 8);
    v73 = v20;
    v74 = v19;
    v75 = v18;
    v76 = 0;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v59);
  }
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v49);
  v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v46)(
          v46,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v49);
  v5 = v21;
  if ( v21 < 0 )
  {
    v39 = 183LL;
LABEL_72:
    v38 = (unsigned int)v21;
    goto LABEL_73;
  }
  v22 = v47;
  v47 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v21 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v49->lpVtbl->QueryInterface)(
          v49,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v47);
  v5 = v21;
  if ( v21 < 0 )
  {
    v39 = 186LL;
    goto LABEL_72;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v10 )
    CoTaskMemFree(v10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v51);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v52);
  v2 = (struct CEndpointInstance **)v77[0];
LABEL_27:
  v50 = 0;
  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 40LL))(v46, &v50);
  v5 = v23;
  if ( v23 < 0 )
  {
    v35 = 191LL;
    goto LABEL_84;
  }
  if ( v50 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 48LL))(v47, 0x40000LL);
    v5 = v23;
    if ( v23 < 0 )
    {
      v35 = 197LL;
      goto LABEL_84;
    }
  }
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v46 + 24LL))(
          v46,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v23;
  if ( v23 < 0 )
  {
    v35 = 204LL;
    goto LABEL_84;
  }
  v24 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v77[0] = v24;
  if ( v24 )
    v25 = CEndpointInstance::CEndpointInstance(v24, (struct IUnknown *)v49, 0LL, *((_QWORD *)a1 + 4));
  else
    v25 = 0LL;
  v26 = v25;
  v55 = v25;
  if ( v25 )
  {
    v54 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v47)(
           v47,
           &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
           &v54) >= 0 )
    {
      *(_QWORD *)v45 = 0LL;
      v27 = v54;
      v28 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v54 + 64LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v45,
        0LL);
      v29 = v28(v27, v45);
      v5 = v29;
      if ( v29 < 0 )
      {
        v43 = 223LL;
      }
      else
      {
        v77[0] = *(_QWORD *)v45;
        v29 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                (char *)v25 + 24,
                v77);
        v5 = v29;
        if ( v29 >= 0 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v45);
          goto LABEL_38;
        }
        v43 = 226LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v29,
        (int)ppv);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v45);
      goto LABEL_39;
    }
LABEL_38:
    v26 = 0LL;
    *v2 = v25;
    v5 = 0;
LABEL_39:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v54);
    goto LABEL_40;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_40:
  if ( v26 )
    CEndpointInstance::`scalar deleting destructor'(v26, v30);
LABEL_42:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v46);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v47);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v31,
      (unsigned int)&CreateDeviceEndpointInstance_Task_Stop,
      v32,
      1,
      (__int64)v77);
  return v5;
}
