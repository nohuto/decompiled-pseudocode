/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1801302BC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D40C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012EBFC (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18006B080 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioClientInternal@@$1?_GUID_c64f5665_8a09_4032_a580_80f345604ce1@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180073F78 (--0-$CComQIPtr@UIAudioClientInternal@@$1-_GUID_c64f5665_8a09_4032_a580_80f345604ce1@@3U__s_GUID@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800E3DE8 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 *     WPP_SF_qq @ 0x1800E42B8 (WPP_SF_qq.c)
 *     ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18012FC70 (--0-$CComQIPtr@UIAudioClient2@@$1-_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18012FED8 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180130F80 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180131BF8 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CMonitor::Initialize(CMonitor *this, struct IMMDevice *a2, struct IMMDevice *a3, bool *a4)
{
  bool *v4; // r13
  int v8; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v11; // r12
  int v12; // eax
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  __int64 **v16; // r12
  __int64 *v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r12
  void (__fastcall ***v20)(_QWORD, GUID *, LPVOID *); // r9
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  char *v24; // [rsp+20h] [rbp-69h]
  LPVOID v25; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-51h] BYREF
  bool *v27; // [rsp+40h] [rbp-49h]
  __int64 v28; // [rsp+48h] [rbp-41h] BYREF
  __int64 v29; // [rsp+50h] [rbp-39h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-31h] BYREF
  char v31; // [rsp+60h] [rbp-29h]
  char v32[8]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pvar[28]; // [rsp+70h] [rbp-19h] BYREF
  int v34; // [rsp+8Ch] [rbp+3h]

  v4 = a4;
  v27 = a4;
  v28 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, this);
  }
  if ( *((_DWORD *)this + 14) && *((_DWORD *)this + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
    }
    v8 = -2147467259;
    goto LABEL_63;
  }
  *v4 = 1;
  *((_DWORD *)this + 14) = 1;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, this, 0LL);
  *((_QWORD *)this + 22) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        this,
        ThreadpoolWork);
    }
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v28);
    if ( v8 < 0 )
      goto LABEL_63;
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, v32);
    if ( v8 < 0 )
      goto LABEL_63;
    v11 = (_QWORD *)((char *)this + 88);
    v24 = (char *)this + 88;
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(a2, &IID_IAudioClient, 1LL);
    if ( v8 < 0 )
      goto LABEL_63;
    v24 = (char *)this + 144;
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
    if ( v8 < 0 )
      goto LABEL_63;
    ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
      &v25,
      (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v11);
    if ( v25 )
    {
      memset(&pvar[4], 0, 24);
      v34 = 0;
      *(_DWORD *)pvar = 32;
      *(_DWORD *)&pvar[16] = *((_DWORD *)this + 16);
      *(_DWORD *)&pvar[20] = *((_DWORD *)this + 18);
      v8 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)v25 + 128LL))(v25, pvar);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xEu,
          (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
          *((_DWORD *)this + 16));
      }
      if ( v8 < 0 )
        goto LABEL_59;
    }
    ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
      &v26,
      *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 18));
    if ( v26 )
    {
      memset(&pvar[4], 0, 24);
      v34 = 0;
      *(_DWORD *)pvar = 32;
      *(_DWORD *)&pvar[16] = *((_DWORD *)this + 16);
      v8 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v26 + 128LL))(v26, pvar);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xFu,
          (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
          *((_DWORD *)this + 16));
      }
      if ( v8 < 0 )
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
LABEL_59:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
        goto LABEL_63;
      }
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
    *v4 = 0;
    v12 = CMonitor::MuteInputLineControls(a2, a3);
    if ( v12 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        v12);
    }
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 80);
    if ( v8 < 0 )
      goto LABEL_63;
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)this + 136);
    if ( v8 < 0 )
      goto LABEL_63;
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v11 + 64LL))(*v11, (char *)this + 96);
    if ( v8 < 0 )
      goto LABEL_63;
    v26 = 0LL;
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD **))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v26);
    if ( v8 < 0 )
      goto LABEL_51;
    memset(pvar, 0, 24);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, void *, _BYTE *))(*v26 + 40LL))(v26, &PKEY_MonitorPauseOnBattery, pvar);
    if ( v8 < 0 )
      goto LABEL_51;
    if ( *(_WORD *)pvar == 11 )
      *((_BYTE *)this + 61) = *(_WORD *)&pvar[8] == 0xFFFF;
    PropVariantClear((PROPVARIANT *)pvar);
    memset(pvar, 0, 24);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, const PROPERTYKEY *, _BYTE *))(*v26 + 40LL))(
           v26,
           &PKEY_AudioEndpoint_GUID,
           pvar);
    if ( v8 < 0 || *(_WORD *)pvar == 31 && (v8 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], (LPCLSID)this + 7), v8 < 0) )
    {
LABEL_51:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
      goto LABEL_63;
    }
    PropVariantClear((PROPVARIANT *)pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
    v29 = 0LL;
    ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>(
      &v25,
      (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v11);
    v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v25 + 48LL))(
           v25,
           *((_QWORD *)this + 12),
           0LL,
           &v29);
    if ( v8 < 0 )
      goto LABEL_59;
    v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(*(_QWORD *)*v11 + 112LL))(
           *v11,
           &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
           (char *)this + 104);
    if ( v8 >= 0 )
    {
      v14 = (_QWORD *)((char *)this + 128);
      v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v15;
      if ( v15 )
      {
        *v15 = &CMonitor::CMonitorNotification::`vftable';
        v15[1] = this;
        *((_DWORD *)v15 + 4) = 1;
        *((_DWORD *)v15 + 5) = 1;
      }
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
        (CMonitor::CMonitorNotification **)this + 16,
        (CMonitor::CMonitorNotification *)v15);
      if ( *v14 )
      {
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v25);
        v16 = (__int64 **)((char *)this + 144);
        ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>(
          &v25,
          *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 18));
        v8 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64))(*(_QWORD *)v25 + 56LL))(v25, (char *)this + 112, v29);
        if ( v8 >= 0 )
        {
          ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v25);
          v17 = *v16;
          v18 = **v16;
          v19 = (_QWORD *)((char *)this + 152);
          v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))(v18 + 112))(
                 v17,
                 &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
                 (char *)this + 152);
          if ( v8 >= 0 )
          {
            v20 = (void (__fastcall ***)(_QWORD, GUID *, LPVOID *))*v19;
            v21 = 0LL;
            v25 = 0LL;
            if ( v20 )
            {
              (**v20)(v20, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v25);
              v21 = (__int64)v25;
            }
            v26 = 0LL;
            memset(pvar, 0, 24);
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v21 + 168LL))(v21, &v26);
            if ( v8 < 0
              || (strcpy(pvar, "\v"),
                  *(_WORD *)&pvar[8] = -1,
                  v8 = (*(__int64 (__fastcall **)(_QWORD *, void *, _BYTE *))(*v26 + 48LL))(
                         v26,
                         &PKEY_AudioSession_IsCaptureMonitorSession,
                         pvar),
                  v8 < 0)
              || (memset(pvar, 0, 24),
                  *(_WORD *)pvar = 31,
                  *(_QWORD *)&pvar[8] = *((_QWORD *)this + 10),
                  v8 = (*(__int64 (__fastcall **)(_QWORD *, void *, _BYTE *))(*v26 + 48LL))(
                         v26,
                         &PKEY_AudioSession_CaptureMonitorEndpointId,
                         pvar),
                  v8 < 0) )
            {
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
            }
            else
            {
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
              v22 = (_QWORD *)((char *)this + 160);
              v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
              v25 = v23;
              if ( v23 )
              {
                *v23 = &CMonitor::CMonitorNotification::`vftable';
                v23[1] = this;
                *((_DWORD *)v23 + 4) = 0;
                *((_DWORD *)v23 + 5) = 1;
              }
              ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
                (CMonitor::CMonitorNotification **)this + 20,
                (CMonitor::CMonitorNotification *)v23);
              if ( *v22 )
              {
                v8 = CMonitor::SetSessionTitleAndIcon(this, a2);
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 80LL))(
                         *((_QWORD *)this + 13),
                         *v14);
                  if ( v8 >= 0 )
                  {
                    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v19 + 80LL))(*v19, *v22);
                    if ( v8 >= 0 )
                    {
                      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          0x11u,
                          (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
                      }
                      *((_DWORD *)this + 14) = 2;
                      *((_BYTE *)this + 60) = 0;
                      goto LABEL_68;
                    }
                  }
                }
              }
              else
              {
                v8 = -2147024882;
              }
            }
          }
          goto LABEL_62;
        }
      }
      else
      {
        v8 = -2147024882;
      }
    }
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v25);
LABEL_62:
    v4 = v27;
LABEL_63:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LODWORD(v24) = v8;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        this,
        v24);
    }
    *((_BYTE *)this + 60) = 1;
    *((_DWORD *)this + 14) = *v4 ? 7 : 0;
    goto LABEL_68;
  }
  LastError = GetLastError();
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, v8);
  }
  if ( v8 < 0 )
    goto LABEL_63;
LABEL_68:
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
  return (unsigned int)v8;
}
