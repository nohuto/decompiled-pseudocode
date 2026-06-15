/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ??1?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@XZ @ 0x18004BD84 (--1-$unique_ptr@UProcessSubmixParams@@U-$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@X.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@HPEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18006EE9C (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@HPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800814BA (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF0EC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___ @ 0x1800D85AC (wil--details--ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___--_ScopeExitFn__lambda_4d32.c)
 *     wil::details::lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___::_lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___ @ 0x1800D85C8 (wil--details--lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___--_lambda_call__lambda_15af.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800D86E4 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 *a1,
        const void **a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a8,
        __int64 a9,
        __int128 *a10,
        __int64 a11,
        __int64 a12,
        struct tWAVEFORMATEX *a13,
        unsigned int a14,
        __int64 a15,
        unsigned int a16,
        unsigned __int8 a17,
        __int64 a18,
        __int64 a19)
{
  int v22; // eax
  unsigned int v23; // ebx
  StreamGroupParams *v24; // rbx
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r12
  int v31; // esi
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r13
  int v36; // eax
  const void **v37; // rcx
  int v38; // ecx
  int v39; // r8d
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-D1h]
  unsigned int v43; // [rsp+20h] [rbp-D1h]
  __int64 v44; // [rsp+60h] [rbp-91h] BYREF
  _BYTE v45[8]; // [rsp+68h] [rbp-89h] BYREF
  void *v46; // [rsp+70h] [rbp-81h] BYREF
  __int64 v47; // [rsp+78h] [rbp-79h]
  __int128 *v48; // [rsp+80h] [rbp-71h]
  __int64 v49; // [rsp+88h] [rbp-69h]
  char v50; // [rsp+90h] [rbp-61h]
  StreamGroupParams *v51; // [rsp+98h] [rbp-59h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-51h] BYREF
  char v53; // [rsp+A8h] [rbp-49h]
  __int64 v54; // [rsp+B0h] [rbp-41h]
  __int128 v55; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+47h]

  v52 = a4;
  v47 = a12;
  v56 = a15;
  v54 = a19;
  if ( (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    v23 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x464,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL);
    return v23;
  }
  v51 = 0LL;
  v55 = *a10;
  v22 = DeriveStreamGroupParametersForStream(a1, a8, a14, *(_QWORD *)(a11 + 32), v42, &v55, a17, a6 & 1, a13, a2, &v51);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v22);
LABEL_35:
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v51);
    return v23;
  }
  v46 = 0LL;
  v24 = v51;
  v43 = *(_DWORD *)(a11 + 320);
  v25 = DeriveProcessSubmixParametersForStream(a3, (unsigned int)a6, a5, a14);
  v28 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v25);
    std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(&v46);
    v23 = v28;
    goto LABEL_35;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v26,
      (unsigned int)&AudioResourceManager_StreamSettings_Derived,
      v27,
      1,
      (__int64)&v55);
  v44 = 0LL;
  if ( a18 )
  {
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(&v44, a18);
    v30 = v47;
  }
  else
  {
    *(_QWORD *)&v55 = 0LL;
    v29 = *(_QWORD *)g_DeviceGraphManager;
    v48 = &v55;
    v49 = 0LL;
    v50 = 1;
    v30 = v47;
    v43 = a16;
    v31 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, __int64, StreamGroupParams *))(v29 + 48))(
            g_DeviceGraphManager,
            a1,
            v52,
            v24);
    v32 = v55;
    *(_QWORD *)&v55 = 0LL;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x477,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v55);
LABEL_34:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
      std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(&v46);
      v23 = v31;
      goto LABEL_35;
    }
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(&v44, v55);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v55);
  }
  v33 = RpcImpersonateClient(0LL);
  if ( v33 )
  {
    v23 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x490,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v33,
            v43);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
    std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(&v46);
    goto LABEL_35;
  }
  v45[1] = 1;
  *(_QWORD *)(a11 + 152) = *(_QWORD *)v24;
  v52 = a11;
  v53 = 1;
  v34 = v44;
  if ( g_UseNewStreamManagementCodePath )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 104LL))(v44, a11 + 284);
    if ( v30 )
    {
      *(_DWORD *)(a11 + 288) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL) + 16LL) + 18;
      *(_QWORD *)(a11 + 296) = *(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL);
    }
    else
    {
      v41 = *((_QWORD *)v24 + 2);
      if ( v41 )
      {
        *(_DWORD *)(a11 + 288) = *(unsigned __int16 *)(v41 + 16) + 18;
        *(_QWORD *)(a11 + 296) = *((_QWORD *)v24 + 2);
      }
    }
  }
  v35 = v54;
  v36 = (*(__int64 (__fastcall **)(__int64, const void **, __int64, __int64, unsigned int, __int64))(*(_QWORD *)v34 + 24LL))(
          v34,
          a2,
          a11,
          v56,
          a16,
          v54);
  v31 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v36);
    wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___(&v52);
    wil::details::lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___::_lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___(v45);
    goto LABEL_34;
  }
  *(_DWORD *)(v35 + 1284) = *((_QWORD *)v24 + 10) != 0LL;
  if ( a2 )
    v37 = a2 - 1;
  else
    v37 = 0LL;
  (*((void (__fastcall **)(const void **, StreamGroupParams *, __int64))*v37 + 7))(v37, v24, v30);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v38,
      (unsigned int)&AudioResourceManager_Stream_Created,
      v39,
      1,
      (__int64)&v56);
  *(_QWORD *)(a11 + 152) = 0LL;
  RpcRevertToSelf();
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
  StreamGroupParams::~StreamGroupParams(v24);
  operator delete(v24, 0x58uLL);
  return 0LL;
}
