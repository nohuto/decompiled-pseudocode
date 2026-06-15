/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400180DC
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A274 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x140002028 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x140004A80 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x14001D6C8 (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140020A10 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140028570 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
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
  BOOL v10; // ebx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // r10
  int started; // edi
  int v15; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v16; // r10
  unsigned int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rax
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  struct IAudioEndpointRT *v26; // rbx
  int v27; // eax
  unsigned __int16 *v28; // rax
  struct CEndpointInstance *v29; // rax
  struct HandleSendReceiveServer *v30; // rcx
  void *v31; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  HRESULT Instance; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // edx
  int ppv; // [rsp+28h] [rbp-C1h]
  LPVOID v46; // [rsp+88h] [rbp-61h] BYREF
  unsigned __int16 *v47; // [rsp+90h] [rbp-59h] BYREF
  struct IAudioEndpointRT *v48; // [rsp+98h] [rbp-51h] BYREF
  struct HandleSendReceiveServer *v49; // [rsp+A0h] [rbp-49h] BYREF
  LPVOID v50[2]; // [rsp+A8h] [rbp-41h] BYREF
  struct HandleSendReceiveServer *v51[2]; // [rsp+B8h] [rbp-31h] BYREF
  char v52; // [rsp+C8h] [rbp-21h]
  GUID v53; // [rsp+D8h] [rbp-11h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v54; // [rsp+E8h] [rbp-1h]
  char v55; // [rsp+F0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v57; // [rsp+138h] [rbp+4Fh] BYREF
  unsigned int v58; // [rsp+148h] [rbp+5Fh]

  v58 = a3;
  v57 = a1;
  v54 = &v57;
  v55 = 1;
  v9 = *((_QWORD *)a1 + 16);
  v10 = *(_DWORD *)a1 != 0;
  v11 = *(unsigned __int16 *)(v9 + 12);
  v12 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(
          a2,
          *(_DWORD *)(v9 + 8),
          *(unsigned __int16 *)(v9 + 12),
          (unsigned int *)&v46);
  started = v12;
  if ( v12 < 0 )
  {
    v33 = (unsigned int)v12;
    v34 = 295LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v33,
      ppv);
    goto LABEL_33;
  }
  if ( (unsigned int)v46 + a3 < (unsigned int)v46 )
  {
    v34 = 296LL;
    goto LABEL_70;
  }
  v15 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*(_QWORD *)(v13 + 24), *(_DWORD *)(v9 + 8), v11, (unsigned int *)&v46);
  started = v15;
  if ( v15 < 0 )
  {
    v33 = (unsigned int)v15;
    v34 = 300LL;
    goto LABEL_71;
  }
  if ( *((_DWORD *)v16 + 2) == 1 )
  {
    v18 = (unsigned int)v46;
  }
  else
  {
    v18 = (unsigned int)v46;
    if ( v17 > (unsigned int)v46 )
      v18 = v17;
  }
  v19 = v18 * v11;
  if ( (unsigned __int64)(v18 * v11) > 0xFFFFFFFF )
  {
    v34 = 309LL;
LABEL_70:
    started = -2147024362;
    v33 = 2147942934LL;
    goto LABEL_71;
  }
  v47 = (unsigned __int16 *)*((_QWORD *)v16 + 2);
  v49 = 0LL;
  v50[0] = 0LL;
  if ( (*((_DWORD *)v16 + 34) & 0x40000) == 0 )
    goto LABEL_17;
  v20 = *((_QWORD *)v16 + 10) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v20 )
    v20 = *((_QWORD *)v16 + 11) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v20 )
  {
    v50[0] = 0LL;
    Instance = CoCreateInstance((const IID *const)v16 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, v50);
    started = Instance;
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v50[0] + 24LL))(v50[0], (__int64)v57 + 96);
      started = Instance;
      if ( Instance >= 0 )
      {
LABEL_16:
        v16 = v57;
LABEL_17:
        v46 = 0LL;
        v22 = *((_QWORD *)v16 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( !v22 )
          v22 = *((_QWORD *)v16 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( v22 )
        {
          v46 = 0LL;
          v23 = CoCreateInstance(
                  (const IID *const)v16 + 4,
                  0LL,
                  0x17u,
                  &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9,
                  &v46);
          started = v23;
          if ( v23 >= 0 )
          {
            v23 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v46 + 24LL))(v46, (__int64)v57 + 96);
            started = v23;
            if ( v23 >= 0 )
            {
LABEL_21:
              v48 = 0LL;
              if ( v10 )
              {
                wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v48);
                v53 = (GUID)*((_OWORD *)v57 + 3);
                *(GUID *)v51 = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
                v40 = privateCreateCrossProcessEndpoint(v51, &v53, v39, &v48);
                started = v40;
                if ( v40 < 0 )
                {
                  v41 = (unsigned int)v40;
                  v42 = 379LL;
                  goto LABEL_67;
                }
                v47 = 0LL;
                v26 = v48;
                v27 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, unsigned __int16 **))v48->lpVtbl->QueryInterface)(
                        v48,
                        &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                        &v47);
                started = v27;
                if ( v27 >= 0 )
                {
                  v44 = 0;
                  if ( *((_QWORD *)v57 + 33) || *((_QWORD *)v57 + 35) )
                    v44 = (int)((double)(int)*((_QWORD *)v57 + 34) * (double)*(int *)(v9 + 4) / 10000000.0 + 0.5);
                  ppv = v44;
                  v27 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v47 + 24LL))(
                          v47,
                          v9,
                          v19,
                          v58);
                  started = v27;
                  if ( v27 >= 0 )
                  {
                    *(GUID *)a4 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
                    *((_DWORD *)a4 + 234) = 0;
                    *((_DWORD *)a4 + 4) = v19;
LABEL_26:
                    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v47);
                    v28 = (unsigned __int16 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
                    v47 = v28;
                    if ( v28 )
                    {
                      v29 = CEndpointInstance::CEndpointInstance(
                              (CEndpointInstance *)v28,
                              (struct IUnknown *)v26,
                              v49,
                              0LL);
                      if ( v29 )
                      {
                        v49 = 0LL;
                        *a7 = v29;
                        started = 0;
LABEL_29:
                        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
LABEL_30:
                        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
                        goto LABEL_31;
                      }
                    }
                    started = -2147024882;
                    v42 = 424LL;
                    v41 = 2147942414LL;
LABEL_67:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v42,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                      (const char *)v41,
                      ppv);
                    goto LABEL_29;
                  }
                  v43 = 404LL;
                }
                else
                {
                  v43 = 382LL;
                }
              }
              else
              {
                wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v48);
                *(_OWORD *)v51 = *((_OWORD *)v57 + 3);
                v53 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
                v25 = privateCreateCrossProcessEndpoint(&v53, v51, v24, &v48);
                started = v25;
                if ( v25 < 0 )
                {
                  v41 = (unsigned int)v25;
                  v42 = 349LL;
                  goto LABEL_67;
                }
                v47 = 0LL;
                v26 = v48;
                v27 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, unsigned __int16 **))v48->lpVtbl->QueryInterface)(
                        v48,
                        &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                        &v47);
                started = v27;
                if ( v27 < 0 )
                {
                  v43 = 352LL;
                }
                else
                {
                  ppv = 0;
                  v27 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v47 + 24LL))(
                          v47,
                          v9,
                          v19,
                          a3);
                  started = v27;
                  if ( v27 >= 0 )
                  {
                    *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
                    *((_DWORD *)a4 + 234) = 0;
                    *((_DWORD *)a4 + 4) = v19;
                    goto LABEL_26;
                  }
                  v43 = 367LL;
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v43,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                (const char *)(unsigned int)v27,
                ppv);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v47);
              goto LABEL_29;
            }
            v38 = 335LL;
          }
          else
          {
            v38 = 334LL;
          }
        }
        else
        {
          v46 = 0LL;
          v23 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
                  (CCrossProcessMemoryManager **)&v46,
                  (const unsigned __int16 **)&v47);
          started = v23;
          if ( v23 >= 0 )
            goto LABEL_21;
          v38 = 340LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v23,
          ppv);
        goto LABEL_30;
      }
      v36 = 326LL;
    }
    else
    {
      v36 = 325LL;
    }
    v35 = (unsigned int)Instance;
  }
  else
  {
    v51[0] = (struct HandleSendReceiveServer *)&v49;
    v51[1] = 0LL;
    v52 = 1;
    started = CEndpointInstance::StartALPCHandleServer(v16, &v51[1]);
    if ( v52 )
    {
      v21 = *(void (__fastcall ****)(_QWORD, __int64))v51[0];
      *(_QWORD *)v51[0] = v51[1];
      if ( v21 )
        (**v21)(v21, 1LL);
    }
    if ( started >= 0 )
      goto LABEL_16;
    v35 = (unsigned int)started;
    v36 = 320LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)v35,
    ppv);
LABEL_31:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v50);
  v30 = v49;
  v49 = 0LL;
  if ( v30 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v30)(v30, 1LL);
LABEL_33:
  v31 = (void *)*((_QWORD *)v57 + 18);
  if ( v31 )
  {
    CoTaskMemFree(v31);
    *((_QWORD *)v57 + 18) = 0LL;
  }
  return (unsigned int)started;
}
