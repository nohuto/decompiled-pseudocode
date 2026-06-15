/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A84
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001AC90 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x1400198B8 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001A6B8 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14001A82C (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140023054 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2A4 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2C8 (--1-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd@@@w.c)
 *     wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___ @ 0x14004A304 (wil--details--lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___--_lambda_call__lambda_41ab.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14009AB84 (CreateSpatialCrossProcessEndpointRT.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v8; // r13
  int v9; // r12d
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // r10
  int v13; // r11d
  int started; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // esi
  __int64 v21; // r10
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  HRESULT v23; // eax
  __int64 v24; // rdx
  LPVOID v25; // rbx
  __int64 (__fastcall *v26)(LPVOID, struct ICrossProcessEvent **); // rdi
  const IID *v27; // r10
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  struct IUnknown *v33; // rbx
  int v34; // edi
  __int64 v35; // rdx
  CEndpointInstance *v36; // rax
  CEndpointInstance *v37; // rax
  struct ICrossProcessEvent *v38; // rcx
  struct HandleSendReceiveServer *v39; // rcx
  void *v40; // rcx
  struct HandleSendReceiveServer *v42; // [rsp+30h] [rbp-D0h] BYREF
  struct ICrossProcessEvent *v43; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v44; // [rsp+40h] [rbp-C0h] BYREF
  struct IAudioEndpointRT *v45; // [rsp+48h] [rbp-B8h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v46; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v47; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  CEndpointInstance *v49; // [rsp+68h] [rbp-98h] BYREF
  struct ICrossProcessMemory **v50; // [rsp+70h] [rbp-90h]
  struct HandleSendReceiveServer *v51[2]; // [rsp+80h] [rbp-80h] BYREF
  char v52; // [rsp+90h] [rbp-70h]
  struct CEndpointInstance **v53; // [rsp+A0h] [rbp-60h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v54; // [rsp+A8h] [rbp-58h] BYREF
  char v55; // [rsp+B0h] [rbp-50h]
  __int128 v56; // [rsp+C0h] [rbp-40h] BYREF
  int v57; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-28h]
  __int128 v59; // [rsp+E8h] [rbp-18h]
  __int128 v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+124h] [rbp+24h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  struct HandleSendReceiveServer *v67; // [rsp+130h] [rbp+30h]
  struct ICrossProcessEvent *v68; // [rsp+138h] [rbp+38h]
  LPVOID v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int64 v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int128 v73; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  LODWORD(v49) = a3;
  v46 = a1;
  v50 = a5;
  v53 = a7;
  v54 = &v46;
  v55 = 1;
  v8 = *((_QWORD *)a1 + 16);
  v9 = *(_DWORD *)a1;
  v10 = *(unsigned __int16 *)(v8 + 12);
  v11 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(a2, *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v42);
  started = v11;
  if ( v11 < 0 )
  {
    v15 = (unsigned int)v11;
    v16 = 519LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v15);
    goto LABEL_61;
  }
  if ( (int)v42 + v13 < (unsigned int)v42 )
  {
    started = -2147024362;
    v15 = 2147942934LL;
    v16 = 520LL;
    goto LABEL_60;
  }
  v17 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*(_QWORD *)(v12 + 24), *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v42);
  started = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v16 = 524LL;
    goto LABEL_60;
  }
  v20 = (unsigned int)v42;
  if ( *(_DWORD *)(v18 + 8) != 1 && v19 > (unsigned int)v42 )
    v20 = v19;
  v47 = *(const unsigned __int16 **)(v18 + 16);
  v42 = 0LL;
  v43 = 0LL;
  if ( !IsEqualGUID((const struct _GUID *)(v18 + 80), &GUID_00000000_0000_0000_0000_000000000000) )
  {
    ppv = 0LL;
    v23 = CoCreateInstance((const IID *const)(v21 + 80), 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &ppv);
    started = v23;
    if ( v23 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 24LL))(ppv, (__int64)v46 + 96);
      started = v23;
      if ( v23 >= 0 )
      {
        v25 = ppv;
        v26 = *(__int64 (__fastcall **)(LPVOID, struct ICrossProcessEvent **))(*(_QWORD *)ppv + 32LL);
        wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)&v43);
        v23 = v26(v25, &v43);
        started = v23;
        if ( v23 >= 0 )
        {
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
          goto LABEL_24;
        }
        v24 = 546LL;
      }
      else
      {
        v24 = 545LL;
      }
    }
    else
    {
      v24 = 544LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v23);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
    goto LABEL_15;
  }
  v51[0] = (struct HandleSendReceiveServer *)&v42;
  v51[1] = 0LL;
  v52 = 1;
  started = CEndpointInstance::StartALPCHandleServer((struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)v21, &v51[1]);
  if ( v52 )
  {
    v22 = *(void (__fastcall ****)(_QWORD, __int64))v51[0];
    *(_QWORD *)v51[0] = v51[1];
    if ( v22 )
      (**v22)(v22, 1LL);
  }
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)started);
LABEL_15:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v43);
    wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>((__int64 (__fastcall ****)(_QWORD, __int64))&v42);
LABEL_61:
    wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___(&v54);
    return (unsigned int)started;
  }
LABEL_24:
  v44 = 0LL;
  if ( IsEqualGUID((const struct _GUID *)v46 + 4, &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v44 = 0LL;
    v28 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
            (CCrossProcessMemoryManager **)&v44,
            &v47);
    started = v28;
    if ( v28 < 0 )
    {
      v29 = 559LL;
      goto LABEL_27;
    }
  }
  else
  {
    v44 = 0LL;
    v28 = CoCreateInstance(v27 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v44);
    started = v28;
    if ( v28 < 0 )
    {
      v29 = 553LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v28);
LABEL_28:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
      goto LABEL_15;
    }
    v28 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v44 + 24LL))(v44, (__int64)v46 + 96);
    started = v28;
    if ( v28 < 0 )
    {
      v29 = 554LL;
      goto LABEL_27;
    }
  }
  v45 = 0LL;
  if ( v9 )
  {
    started = -2147418113;
    v30 = 2147549183LL;
    v31 = 601LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v30);
LABEL_38:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_28;
  }
  v45 = 0LL;
  v56 = *((_OWORD *)v46 + 3);
  *(GUID *)v51 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
  v32 = CreateSpatialCrossProcessEndpointRT(v51, &v56, &v45);
  started = v32;
  if ( v32 < 0 )
  {
    v30 = (unsigned int)v32;
    v31 = 568LL;
    goto LABEL_37;
  }
  v47 = 0LL;
  v33 = (struct IUnknown *)v45;
  v34 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, const unsigned __int16 **))v45->lpVtbl->QueryInterface)(
          v45,
          &GUID_50a63589_dc31_42b1_8e82_dbb0ab53dda5,
          &v47);
  if ( v34 < 0 )
  {
    v35 = 571LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v34);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v43);
    wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>((__int64 (__fastcall ****)(_QWORD, __int64))&v42);
    started = v34;
    goto LABEL_61;
  }
  v57 = 160;
  v58 = *(_OWORD *)((char *)v46 + 200);
  v59 = *(_OWORD *)((char *)v46 + 216);
  v60 = *(_OWORD *)((char *)v46 + 232);
  v61 = *((_QWORD *)v46 + 31);
  v62 = 0;
  v63 = *((_QWORD *)v46 + 4);
  if ( v20 * (unsigned __int64)*(unsigned __int16 *)(v8 + 12) > 0xFFFFFFFF )
  {
    v64 = -1;
    started = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070216LL);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
    goto LABEL_38;
  }
  v64 = v20 * *(unsigned __int16 *)(v8 + 12);
  v65 = (int)v49;
  v66 = *((_QWORD *)v46 + 18);
  v67 = v42;
  v68 = v43;
  v70 = 0LL;
  v71 = *((_QWORD *)v46 + 16);
  v72 = *((_QWORD *)v46 + 14);
  v73 = *(_OWORD *)((char *)v46 + 180);
  v69 = v44;
  v34 = (*(__int64 (__fastcall **)(const unsigned __int16 *, int *, struct ICrossProcessMemory **))(*(_QWORD *)v47 + 24LL))(
          v47,
          &v57,
          v50);
  if ( v34 < 0 )
  {
    v35 = 589LL;
    goto LABEL_41;
  }
  *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
  *((_DWORD *)a4 + 234) = 0;
  *((_DWORD *)a4 + 4) = v20 * *(unsigned __int16 *)(v8 + 12);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
  v36 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v50 = (struct ICrossProcessMemory **)v36;
  if ( v36 )
    v37 = CEndpointInstance::CEndpointInstance(v36, v33, v42, 0LL);
  else
    v37 = 0LL;
  v49 = v37;
  if ( !v37 )
  {
    started = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x262,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(&v49);
    goto LABEL_38;
  }
  v42 = 0LL;
  v49 = 0LL;
  *v53 = v37;
  v38 = v43;
  if ( v43 )
  {
    *a6 = v43;
    (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v38 + 8LL))(v38);
  }
  else
  {
    *a6 = 0LL;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v43);
  v39 = v42;
  v42 = 0LL;
  if ( v39 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v39)(v39, 1LL);
  v40 = (void *)*((_QWORD *)v46 + 18);
  if ( v40 )
  {
    CoTaskMemFree(v40);
    *((_QWORD *)v46 + 18) = 0LL;
  }
  return 0LL;
}
