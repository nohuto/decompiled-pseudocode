/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x18002B4F0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180011468 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HHAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18002BA30 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x1800F7598 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall BuildDeviceGraphForStream(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _OWORD *a10,
        __int64 a11,
        __int64 a12,
        void *Src,
        int a14,
        __int64 a15,
        unsigned int a16,
        char a17,
        __int64 a18,
        __int64 a19)
{
  _QWORD *v21; // rsi
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r15d
  void *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  bool v31; // al
  unsigned int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r14
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  void *v47; // [rsp+20h] [rbp-D9h]
  unsigned int v48; // [rsp+20h] [rbp-D9h]
  int v49; // [rsp+20h] [rbp-D9h]
  __int64 v50; // [rsp+60h] [rbp-99h] BYREF
  __int64 v51; // [rsp+68h] [rbp-91h] BYREF
  __int64 *v52; // [rsp+70h] [rbp-89h]
  __int64 v53; // [rsp+78h] [rbp-81h] BYREF
  char v54; // [rsp+80h] [rbp-79h]
  char v55; // [rsp+89h] [rbp-70h]
  __int64 v56; // [rsp+90h] [rbp-69h]
  char v57; // [rsp+98h] [rbp-61h]
  void *v58; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v59[2]; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-39h]
  __int64 v61; // [rsp+C8h] [rbp-31h]
  _QWORD v62[2]; // [rsp+D0h] [rbp-29h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v50 = a4;
  v63 = a2;
  v56 = a11;
  v61 = a15;
  v51 = a18;
  v60 = a19;
  if ( (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL,
      (int)v47);
    return 2147942487LL;
  }
  v21 = 0LL;
  v58 = 0LL;
  if ( a12 )
  {
    v22 = *(_DWORD *)(a12 + 56);
    v23 = *(_DWORD *)(a12 + 52);
  }
  else
  {
    v22 = 0;
    v23 = 0;
  }
  *(_OWORD *)v59 = *a10;
  v24 = DeriveStreamGroupParametersForStream(
          a1,
          a8,
          a14,
          *(_QWORD *)(a11 + 32),
          v47,
          (__int64)v59,
          a17,
          (a6 & 1) != 0,
          Src,
          v23,
          v22,
          (__int64)&v58);
  v27 = v24;
  v28 = v58;
  if ( v24 >= 0 )
  {
    v59[0] = 0LL;
    if ( !a14 && !*((_BYTE *)v58 + 48) )
    {
      v29 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = (__int64)v29;
      if ( !v29 )
      {
        v27 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x387,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v48);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v49);
        goto LABEL_49;
      }
      v29[1] = 0LL;
      v29[2] = 0LL;
      *v29 = a3;
      if ( a3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v31 = a5 != 3 && a5 != 8 && (a6 & 0x1000000) == 0;
      *(_BYTE *)(v30 + 8) = v31;
      *(_QWORD *)(v30 + 16) = v28;
      v21 = (_QWORD *)v30;
      v59[0] = v30;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v25,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v26,
        1,
        (__int64)v62);
    v32 = RpcImpersonateClient(0LL);
    if ( !v32 )
    {
      v55 = 1;
      v33 = 0LL;
      v62[0] = 0LL;
      if ( v51 )
      {
        wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(v62);
        v33 = v62[0];
        v41 = v56;
LABEL_41:
        *(_QWORD *)(v41 + 152) = *(_QWORD *)v28;
        v56 = v41;
        v57 = 1;
        v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v33 + 24LL))(
                v33,
                v63,
                v41,
                v61);
        v27 = v42;
        if ( v42 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x475,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v42,
            a16);
        }
        else
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              v43,
              (__int64)&AudioResourceManager_Stream_Created,
              v44,
              1,
              (__int64)&v63);
          v27 = 0;
        }
        *(_QWORD *)(v41 + 152) = 0LL;
        v37 = v33;
        goto LABEL_46;
      }
      v51 = 0LL;
      v34 = *(_QWORD *)g_DeviceGraphManager;
      v52 = &v51;
      v53 = 0LL;
      v54 = 1;
      v27 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, void *, _QWORD))(v34 + 48))(
              g_DeviceGraphManager,
              v50,
              v28,
              a16);
      if ( v54 )
      {
        v35 = *v52;
        *v52 = v53;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x458,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v27,
          a12);
        v37 = 0LL;
      }
      else
      {
        v36 = v51;
        v37 = v51;
        v33 = v51;
        v62[0] = v51;
        if ( v51 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
          v36 = v51;
        }
        if ( !v21 )
        {
          v41 = v56;
LABEL_39:
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          goto LABEL_41;
        }
        v50 = 0LL;
        v38 = *(_QWORD *)v36;
        v52 = &v50;
        v53 = 0LL;
        v54 = 1;
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *))(v38 + 296))(v36, v21, a16, &v53);
        if ( v54 )
        {
          v39 = *v52;
          *v52 = v53;
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        if ( v27 >= 0 )
        {
          v40 = v50;
          v33 = v50;
          v62[0] = v50;
          if ( v50 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
            v40 = v50;
          }
          if ( v37 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
            v40 = v50;
          }
          v41 = v56;
          *(_DWORD *)(v56 + 196) = 1;
          if ( v40 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
          v36 = v51;
          goto LABEL_39;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x461,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v27,
          a12);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
LABEL_46:
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      RpcRevertToSelf();
      goto LABEL_49;
    }
    v27 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x450,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v32,
            v48);
LABEL_49:
    if ( v21 )
    {
      if ( *v21 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 16LL))(*v21);
      operator delete(v21, 0x18uLL);
    }
    goto LABEL_53;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x447,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v24,
    v48);
LABEL_53:
  if ( v28 )
  {
    v45 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v28 + 7);
    if ( v45 )
      (**v45)(v45, 1LL);
    *((_QWORD *)v28 + 7) = 0LL;
    CoTaskMemFree(*((LPVOID *)v28 + 2));
    *((_QWORD *)v28 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v28);
    *(_QWORD *)v28 = 0LL;
    operator delete(v28, 0x40uLL);
  }
  return (unsigned int)v27;
}
