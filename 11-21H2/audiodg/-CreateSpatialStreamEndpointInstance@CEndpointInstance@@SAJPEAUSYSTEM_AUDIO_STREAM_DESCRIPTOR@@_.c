/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14005CA88
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A274 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x140002028 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x140004A80 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x14001D6C8 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140028570 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x14005739C (WPP_SF_DDD.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14008E8D0 (CreateSpatialCrossProcessEndpointRT.c)
 */

// Hidden C++ exception states: #wind=12
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
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // r10
  int v13; // r11d
  int started; // edi
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // esi
  __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  HRESULT v23; // eax
  __int64 v24; // rdx
  LPVOID v25; // rbx
  __int64 (__fastcall *v26)(LPVOID, struct ICrossProcessEvent **); // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  struct IAudioEndpointRT *v33; // rbx
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  CEndpointInstance *v38; // rax
  CEndpointInstance *v39; // rax
  struct ICrossProcessEvent *v40; // rcx
  struct HandleSendReceiveServer *v41; // rcx
  void *v42; // rcx
  LPVOID v44; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v46; // [rsp+40h] [rbp-C0h] BYREF
  struct HandleSendReceiveServer *v47; // [rsp+48h] [rbp-B8h] BYREF
  struct IAudioEndpointRT *v48; // [rsp+50h] [rbp-B0h] BYREF
  struct ICrossProcessEvent *v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+60h] [rbp-A0h]
  struct ICrossProcessMemory **v51; // [rsp+68h] [rbp-98h]
  struct HandleSendReceiveServer *v52[2]; // [rsp+70h] [rbp-90h] BYREF
  char v53; // [rsp+80h] [rbp-80h]
  struct CEndpointInstance **v54; // [rsp+90h] [rbp-70h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v55; // [rsp+98h] [rbp-68h]
  char v56; // [rsp+A0h] [rbp-60h]
  __int128 v57; // [rsp+B0h] [rbp-50h] BYREF
  int v58; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-38h]
  __int128 v60; // [rsp+D8h] [rbp-28h]
  __int128 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+114h] [rbp+14h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  struct HandleSendReceiveServer *v68; // [rsp+120h] [rbp+20h]
  struct ICrossProcessEvent *v69; // [rsp+128h] [rbp+28h]
  LPVOID v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int128 v74; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v50 = a3;
  v46 = a1;
  v51 = a5;
  v54 = a7;
  v55 = &v46;
  v56 = 1;
  v8 = *((_QWORD *)a1 + 16);
  v9 = *(_DWORD *)a1;
  v10 = *(unsigned __int16 *)(v8 + 12);
  v11 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(a2, *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v44);
  started = v11;
  if ( v11 < 0 )
  {
    v15 = (unsigned int)v11;
    v16 = 492LL;
LABEL_65:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v15);
    goto LABEL_66;
  }
  if ( (int)v44 + v13 < (unsigned int)v44 )
  {
    started = -2147024362;
    v15 = 2147942934LL;
    v16 = 493LL;
    goto LABEL_65;
  }
  v17 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*(_QWORD *)(v12 + 24), *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v44);
  started = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F1,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_66;
  }
  v20 = (unsigned int)v44;
  if ( *((_DWORD *)v18 + 2) != 1 && v19 > (unsigned int)v44 )
    v20 = v19;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_d2de981987fa3fae783080b930bc1a00_Traceguids,
      v19);
    v18 = v46;
  }
  v48 = (struct IAudioEndpointRT *)*((_QWORD *)v18 + 2);
  v47 = 0LL;
  v49 = 0LL;
  v21 = *((_QWORD *)v18 + 10) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v21 )
    v21 = *((_QWORD *)v18 + 11) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v21 )
  {
    ppv = 0LL;
    v23 = CoCreateInstance((const IID *const)v18 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &ppv);
    started = v23;
    if ( v23 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 24LL))(ppv, (__int64)v46 + 96);
      started = v23;
      if ( v23 >= 0 )
      {
        v25 = ppv;
        v26 = *(__int64 (__fastcall **)(LPVOID, struct ICrossProcessEvent **))(*(_QWORD *)ppv + 32LL);
        wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v49);
        v23 = v26(v25, &v49);
        started = v23;
        if ( v23 >= 0 )
        {
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
          goto LABEL_29;
        }
        v24 = 521LL;
      }
      else
      {
        v24 = 520LL;
      }
    }
    else
    {
      v24 = 519LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v23);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
    goto LABEL_62;
  }
  v52[0] = (struct HandleSendReceiveServer *)&v47;
  v52[1] = 0LL;
  v53 = 1;
  started = CEndpointInstance::StartALPCHandleServer(v18, &v52[1]);
  if ( v53 )
  {
    v22 = *(void (__fastcall ****)(_QWORD, __int64))v52[0];
    *(_QWORD *)v52[0] = v52[1];
    if ( v22 )
      (**v22)(v22, 1LL);
  }
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x201,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)started);
    goto LABEL_62;
  }
LABEL_29:
  v44 = 0LL;
  v27 = *((_QWORD *)v46 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v27 )
    v27 = *((_QWORD *)v46 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v27 )
  {
    v44 = 0LL;
    v28 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
            (CCrossProcessMemoryManager **)&v44,
            (const unsigned __int16 **)&v48);
    started = v28;
    if ( v28 < 0 )
    {
      v29 = 534LL;
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  v44 = 0LL;
  v28 = CoCreateInstance((const IID *const)v46 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v44);
  started = v28;
  if ( v28 >= 0 )
  {
    v28 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v44 + 24LL))(v44, (__int64)v46 + 96);
    started = v28;
    if ( v28 < 0 )
    {
      v29 = 529LL;
      goto LABEL_38;
    }
LABEL_39:
    v48 = 0LL;
    if ( v9 )
    {
      started = -2147418113;
      v30 = 2147549183LL;
      v31 = 576LL;
    }
    else
    {
      wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v48);
      v57 = *((_OWORD *)v46 + 3);
      *(GUID *)v52 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
      v32 = CreateSpatialCrossProcessEndpointRT(v52, &v57, &v48);
      started = v32;
      if ( v32 >= 0 )
      {
        ppv = 0LL;
        v33 = v48;
        v34 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, LPVOID *))v48->lpVtbl->QueryInterface)(
                v48,
                &GUID_50a63589_dc31_42b1_8e82_dbb0ab53dda5,
                &ppv);
        started = v34;
        if ( v34 >= 0 )
        {
          v58 = 160;
          v59 = *((_OWORD *)v46 + 13);
          v60 = *((_OWORD *)v46 + 14);
          v61 = *((_OWORD *)v46 + 15);
          v62 = *((_QWORD *)v46 + 32);
          v63 = 0;
          v64 = *((_QWORD *)v46 + 4);
          if ( v20 * (unsigned __int64)*(unsigned __int16 *)(v8 + 12) > 0xFFFFFFFF )
          {
            v65 = -1;
            started = -2147024362;
            v35 = 2147942934LL;
            v36 = 553LL;
          }
          else
          {
            v65 = v20 * *(unsigned __int16 *)(v8 + 12);
            v66 = v50;
            v67 = *((_QWORD *)v46 + 18);
            v68 = v47;
            v69 = v49;
            v71 = 0LL;
            v72 = *((_QWORD *)v46 + 16);
            v73 = *((_QWORD *)v46 + 14);
            v74 = *(_OWORD *)((char *)v46 + 180);
            v70 = v44;
            v37 = (*(__int64 (__fastcall **)(LPVOID, int *, struct ICrossProcessMemory **))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    &v58,
                    v51);
            started = v37;
            if ( v37 >= 0 )
            {
              *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
              *((_DWORD *)a4 + 234) = 0;
              *((_DWORD *)a4 + 4) = v20 * *(unsigned __int16 *)(v8 + 12);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
              v38 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
              v51 = (struct ICrossProcessMemory **)v38;
              if ( v38 )
                v39 = CEndpointInstance::CEndpointInstance(v38, (struct IUnknown *)v33, v47, 0LL);
              else
                v39 = 0LL;
              if ( v39 )
              {
                v47 = 0LL;
                v51 = 0LL;
                *v54 = v39;
                v40 = v49;
                if ( v49 )
                {
                  *a6 = v49;
                  (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v40 + 8LL))(v40);
                }
                else
                {
                  *a6 = 0LL;
                }
                started = 0;
              }
              else
              {
                started = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x249,
                  (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                  (const char *)0x8007000ELL);
              }
              goto LABEL_60;
            }
            v35 = (unsigned int)v37;
            v36 = 564LL;
          }
        }
        else
        {
          v35 = (unsigned int)v34;
          v36 = 546LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v36,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v35);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
LABEL_60:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
        goto LABEL_61;
      }
      v30 = (unsigned int)v32;
      v31 = 543LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v30);
    goto LABEL_60;
  }
  v29 = 528LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)(unsigned int)v28);
LABEL_61:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v44);
LABEL_62:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
  v41 = v47;
  v47 = 0LL;
  if ( v41 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v41)(v41, 1LL);
LABEL_66:
  v42 = (void *)*((_QWORD *)v46 + 18);
  if ( v42 )
  {
    CoTaskMemFree(v42);
    *((_QWORD *)v46 + 18) = 0LL;
  }
  return (unsigned int)started;
}
