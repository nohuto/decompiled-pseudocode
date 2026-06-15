/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140016320
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140016828 (-InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400169B8 (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140016A7C (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140016E28 (-InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x140016F20 (-InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z.c)
 *     ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400170D4 (-InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  __int64 v3; // r13
  CPipeInstance *v4; // rcx
  __int64 v5; // rsi
  CPipeInstance *v6; // rcx
  struct IAudioProcessingObject *v7; // rbx
  int v8; // eax
  CPipeInstance *v9; // rcx
  unsigned int v10; // edi
  struct CProcessNode *v11; // rdx
  CPipeInstance *v12; // rcx
  CPipeInstance *v13; // rcx
  LPVOID v14; // rcx
  LPVOID v15; // rcx
  int v16; // edi
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // r14
  unsigned int v20; // r12d
  __int64 v21; // rbx
  LPVOID v22; // rcx
  int v23; // esi
  __int64 v24; // rax
  bool v25; // si
  LPVOID v26; // rsi
  void (__fastcall **v28)(LPVOID, GUID *, __int64 *); // rax
  int v29; // eax
  int v30; // eax
  int v31; // edi
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // r9
  __int64 v35; // rdx
  LPVOID pv; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-41h] BYREF
  __int64 v38; // [rsp+30h] [rbp-39h] BYREF
  __int64 v39; // [rsp+38h] [rbp-31h] BYREF
  __int64 v40; // [rsp+40h] [rbp-29h] BYREF
  CPipeInstance *v41; // [rsp+48h] [rbp-21h]
  struct IAudioProcessingObject *v42; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v43[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v44; // [rsp+78h] [rbp+Fh]
  __int64 v45; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = *((unsigned int *)this + 36);
  v37 = *((_DWORD *)this + 36);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v2);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = (CPipeInstance *)*((_QWORD *)this + 3);
  v41 = v4;
  if ( !v3 )
  {
LABEL_53:
    *((_DWORD *)this + 35) = v37;
    return 0LL;
  }
  while ( 1 )
  {
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 2);
      v6 = (CPipeInstance *)*((_QWORD *)v4 + 1);
      v41 = v6;
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v7 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v5 + 32) + 40LL);
        v42 = v7;
        if ( v7 )
          ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->AddRef)(v7);
        v8 = CPipeInstance::InitializeVolumeInterface(v6, (struct CProcessNode *)v5, v7);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 3997LL;
          goto LABEL_93;
        }
        v8 = CPipeInstance::InitializeMeterInterface(v9, (struct CProcessNode *)v5, v7, v37);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 3998LL;
          goto LABEL_93;
        }
        v8 = CPipeInstance::InitializeDitherInterface(v12, v11, v7);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 3999LL;
          goto LABEL_93;
        }
        v8 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v5, v7);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 4000LL;
          goto LABEL_93;
        }
        v8 = CPipeInstance::InitializeMatrixInterface(v13, (struct CProcessNode *)v5, v7);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 4001LL;
LABEL_93:
          v34 = (unsigned int)v8;
          goto LABEL_94;
        }
        v8 = CPipeInstance::InitializeLimiterInterface(this, (struct CProcessNode *)v5, v7);
        v10 = v8;
        if ( v8 < 0 )
        {
          v35 = 4002LL;
          goto LABEL_93;
        }
        v14 = 0LL;
        pv = 0LL;
        if ( *((_DWORD *)this + 30) )
        {
          v31 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
                  v7,
                  &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
                  &pv);
          v14 = pv;
          if ( v31 >= 0 && *((LPVOID *)this + 22) != pv )
          {
            ATL::AtlComPtrAssign((struct IUnknown **)this + 22, (struct IUnknown *)pv);
            v14 = pv;
          }
        }
        if ( v14 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
        v15 = 0LL;
        pv = 0LL;
        if ( !*((_DWORD *)this + 30) )
        {
          v16 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
                  v7,
                  &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
                  &pv);
          v15 = pv;
          if ( v16 >= 0 && *((LPVOID *)this + 23) != pv )
          {
            ATL::AtlComPtrAssign((struct IUnknown **)this + 23, (struct IUnknown *)pv);
            v15 = pv;
          }
        }
        if ( v15 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
        v38 = 0LL;
        memset(v43, 0, sizeof(v43));
        v44 = 0LL;
        v45 = 0LL;
        pv = 0LL;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
               v7,
               &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
               &v38) >= 0 )
        {
          LODWORD(v43[0]) = 56;
          *(GUID *)((char *)v43 + 4) = GUID_693badea_1eb1_4013_b799_285f624a55bd;
          mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 24), &pv);
          *((_QWORD *)&v43[1] + 1) = pv;
          v44 = *(_OWORD *)((char *)this + 296);
          v45 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                              v32,
                              _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                          + 8);
          v33 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))v7->lpVtbl->Initialize)(
                  v7,
                  56LL,
                  v43);
          v10 = v33;
          if ( v33 < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                51LL,
                &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
                (unsigned int)v33);
            }
            AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xF2Eu, v10);
          }
        }
        else
        {
          v10 = 0;
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        if ( v38 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        if ( (v10 & 0x80000000) != 0 )
        {
          v34 = v10;
          v35 = 4005LL;
          goto LABEL_94;
        }
        pv = 0LL;
        memset(v43, 0, sizeof(v43));
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v7->lpVtbl->QueryInterface)(
               v7,
               &GUID_dc493d8a_c0ca_481c_88af_f832a73aaa21,
               &pv) >= 0 )
        {
          LODWORD(v43[0]) = 32;
          *(GUID *)((char *)v43 + 4) = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
          DWORD1(v43[1]) = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16)
                                     + 56LL);
          v30 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))v7->lpVtbl->Initialize)(
                  v7,
                  32LL,
                  v43);
          v10 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF62,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)(unsigned int)v30,
              (int)pv);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&pv);
            v34 = v10;
            v35 = 4006LL;
LABEL_94:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v35,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)v34,
              (int)pv);
            ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v42);
            return v10;
          }
          if ( pv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        }
        else
        {
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&pv);
        }
        ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
      }
    }
    v17 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v18 = (_QWORD *)*v17;
    if ( *v17 )
      break;
LABEL_51:
    if ( !v3 )
      goto LABEL_53;
    v4 = v41;
  }
  while ( 1 )
  {
    v19 = v18[2];
    v18 = (_QWORD *)*v18;
    v20 = v37;
    v21 = 0LL;
    v38 = 0LL;
    v22 = 0LL;
    pv = 0LL;
    v23 = 0;
    v24 = *(_QWORD *)(v19 + 32);
    if ( !v24 || *(_DWORD *)(v24 + 40) != 2 )
      goto LABEL_44;
    v21 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 40LL);
    v38 = v21;
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      v22 = pv;
    }
    if ( v22 )
    {
      if ( !v21 )
      {
LABEL_36:
        v25 = 0;
        goto LABEL_37;
      }
      v40 = 0LL;
      v39 = 0LL;
      (**(void (__fastcall ***)(LPVOID, GUID *, __int64 *))v22)(v22, &GUID_00000000_0000_0000_c000_000000000046, &v40);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v21)(v21, &GUID_00000000_0000_0000_c000_000000000046, &v39);
      v25 = v40 == v39;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v39);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v40);
      v22 = pv;
    }
    else
    {
      if ( v21 )
        goto LABEL_36;
      v25 = 1;
    }
LABEL_37:
    if ( !v25 )
    {
      v26 = v22;
      v22 = 0LL;
      pv = 0LL;
      if ( v21 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, LPVOID *))v21)(v21, &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81, &pv);
        v22 = pv;
      }
      if ( v26 )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
        v22 = pv;
      }
    }
    if ( !v22 )
    {
      v23 = 0;
LABEL_44:
      *(_DWORD *)(v19 + 40) = v37;
      goto LABEL_45;
    }
    v28 = *(void (__fastcall ***)(LPVOID, GUID *, __int64 *))v22;
    if ( *(_DWORD *)(v19 + 16) )
      v29 = ((__int64 (__fastcall *)(LPVOID, _QWORD, unsigned int *))v28[4])(v22, v20, &v37);
    else
      v29 = ((__int64 (__fastcall *)(LPVOID, _QWORD, unsigned int *))v28[3])(v22, v20, &v37);
    v23 = v29;
    if ( v29 >= 0 )
    {
      v22 = pv;
      goto LABEL_44;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_88dce1fc6c0c3cb9db34f37f49324232_Traceguids,
        (unsigned int)v29);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Eu, v23);
    v22 = pv;
LABEL_45:
    if ( v22 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v23 < 0 )
      break;
    if ( !v18 )
      goto LABEL_51;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFB0,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v23,
    (int)pv);
  return (unsigned int)v23;
}
