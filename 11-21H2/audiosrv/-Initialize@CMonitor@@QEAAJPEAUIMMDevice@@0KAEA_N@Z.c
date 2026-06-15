/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180120400
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011C220 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011EA0C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_dd @ 0x1800CF190 (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     WPP_SF_di @ 0x1801028D4 (WPP_SF_di.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x180119EAC (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18011FA0C (--0-$CComQIPtr@UIAudioClient2@@$1-_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@.c)
 *     ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18011FA54 (--0-$CComQIPtr@UIAudioSessionControlInternal@@$1-_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U_.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18011FF3C (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180121B04 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x1801234A4 (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMonitor::Initialize(
        CMonitor *this,
        struct IMMDevice *a2,
        struct IMMDevice *a3,
        __int64 a4,
        bool *a5)
{
  CMonitor *v7; // rdi
  int v8; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  int v11; // eax
  struct IMMDeviceVtbl *lpVtbl; // rax
  _QWORD *v13; // r13
  struct IMMDevice *v15; // rbx
  int v16; // eax
  int v17; // eax
  struct IMMDevice *v18; // rax
  int v19; // eax
  CEndpointStoreCache *v20; // rcx
  struct IMMDevice *v21; // rax
  struct _SECURITY_ATTRIBUTES *v22; // rdx
  struct _SECURITY_ATTRIBUTES *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  struct _SECURITY_ATTRIBUTES *v27; // rdx
  HANDLE Thread; // rax
  signed int v29; // eax
  ATL::CAtlException *v30; // rbx
  LPVOID *ppv; // [rsp+20h] [rbp-F8h]
  LPVOID v32; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-D0h] BYREF
  CMonitor *v34; // [rsp+50h] [rbp-C8h]
  bool *v35; // [rsp+58h] [rbp-C0h]
  struct IMMDevice *v36; // [rsp+60h] [rbp-B8h] BYREF
  struct IMMDevice *v37; // [rsp+68h] [rbp-B0h]
  __int64 v38; // [rsp+70h] [rbp-A8h] BYREF
  int v39; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-90h] BYREF
  char v42; // [rsp+90h] [rbp-88h]
  CMonitor *v43; // [rsp+98h] [rbp-80h]
  ATL::CAtlException *v44; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE pvar[28]; // [rsp+B8h] [rbp-60h] BYREF
  int v46; // [rsp+D4h] [rbp-44h]

  v36 = a3;
  v37 = a2;
  v7 = this;
  v34 = this;
  v43 = this;
  v35 = a5;
  v40 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids, v7);
  }
  if ( *((_DWORD *)v7 + 14) && *((_DWORD *)v7 + 14) != 6 )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
    }
    v8 = -2147467259;
    goto LABEL_36;
  }
  *v35 = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_QWORD *)v7 + 56) = 600000LL;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, v7, 0LL);
  *((_QWORD *)v7 + 63) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids, v8);
    }
    goto LABEL_114;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      v7,
      ThreadpoolWork);
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v40);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v39);
  if ( v8 < 0 )
    goto LABEL_36;
  v11 = 0x40000;
  if ( !v39 )
    v11 = 393216;
  LODWORD(v32) = v11;
  lpVtbl = a2->lpVtbl;
  v13 = (_QWORD *)((char *)v7 + 88);
  ppv = (LPVOID *)((char *)v7 + 88);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(v37, &IID_IAudioClient, 1LL);
  if ( v8 < 0 )
    goto LABEL_36;
  ppv = (LPVOID *)((char *)v7 + 192);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
  if ( v8 < 0 )
    goto LABEL_36;
  ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
    &v33,
    (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v13);
  if ( v33 )
  {
    memset(&pvar[4], 0, 24);
    v46 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    *(_DWORD *)&pvar[20] = *((_DWORD *)v7 + 18);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 128LL))(v33, pvar);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        *((_DWORD *)v7 + 16));
    }
    if ( v8 < 0 )
      goto LABEL_35;
  }
  ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
    &v38,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 24));
  if ( v38 )
  {
    memset(&pvar[4], 0, 24);
    v46 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[16] = *((_DWORD *)v7 + 16);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v38 + 128LL))(v38, pvar);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        *((_DWORD *)v7 + 16));
    }
    if ( v8 < 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
LABEL_35:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      goto LABEL_36;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
  *v35 = 0;
  v15 = v37;
  v16 = CMonitor::MuteInputLineControls(v37, a3);
  if ( v16 < 0
    && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids, v16);
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v15->lpVtbl->GetId)(v15, (__int64)v7 + 80);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v36->lpVtbl->GetId)(v36, (__int64)v7 + 184);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v13 + 64LL))(*v13, (__int64)v7 + 112);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 64LL))(
         *((_QWORD *)v7 + 24),
         (__int64)v7 + 216);
  if ( v8 < 0 )
    goto LABEL_36;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 24LL))(
          *v13,
          0LL,
          (unsigned int)v32,
          *((_QWORD *)v7 + 56) / 2LL,
          0LL,
          *((_QWORD *)v7 + 14),
          0LL);
  v8 = v17;
  if ( v17 == -2004287485 )
    goto LABEL_83;
  if ( v17 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v13 + 112LL))(
         *v13,
         &GUID_c8adbd64_e71e_48a0_a4de_185c395cd317,
         (__int64)v7 + 96);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v13 + 112LL))(
         *v13,
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 104);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v13 + 32LL))(*v13, (__int64)v7 + 136);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 13) + 24LL))(
         *((_QWORD *)v7 + 13),
         (__int64)v7 + 144);
  if ( v8 < 0 )
    goto LABEL_36;
  v32 = 0LL;
  v8 = CoCreateInstance(
         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
         0LL,
         0x17u,
         &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
         &v32);
  if ( v8 < 0 )
    goto LABEL_67;
  v8 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, struct IMMDevice **, __int64 *))(*(_QWORD *)v32 + 56LL))(
         v32,
         *((_QWORD *)v7 + 10),
         0LL,
         &v36,
         &v38);
  if ( v8 < 0 )
    goto LABEL_67;
  *((double *)v7 + 19) = (double)(int)v36 / 10000.0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v13 + 112LL))(
         *v13,
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 120);
  if ( v8 < 0 )
    goto LABEL_36;
  v18 = (struct IMMDevice *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v18;
  if ( v18 )
  {
    v18->lpVtbl = (struct IMMDeviceVtbl *)&CMonitor::CMonitorNotification::`vftable';
    v18[1].lpVtbl = (struct IMMDeviceVtbl *)v7;
    LODWORD(v18[2].lpVtbl) = 1;
    HIDWORD(v18[2].lpVtbl) = 1;
  }
  else
  {
    v18 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 22,
    (CMonitor::CMonitorNotification *)v18);
  if ( !*((_QWORD *)v7 + 22) )
    goto LABEL_74;
  v32 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, LPVOID *))v37->lpVtbl->OpenPropertyStore)(v37, 0LL, &v32);
  if ( v8 < 0 )
    goto LABEL_67;
  memset(pvar, 0, 24);
  v8 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 40LL))(
         v32,
         &PKEY_MonitorPauseOnBattery,
         pvar);
  if ( v8 < 0 )
    goto LABEL_67;
  if ( *(_WORD *)pvar == 11 )
    *((_BYTE *)v7 + 61) = *(_WORD *)&pvar[8] == 0xFFFF;
  PropVariantClear((PROPVARIANT *)pvar);
  memset(pvar, 0, 24);
  v8 = (*(__int64 (__fastcall **)(LPVOID, const PROPERTYKEY *, _BYTE *))(*(_QWORD *)v32 + 40LL))(
         v32,
         &PKEY_AudioEndpoint_GUID,
         pvar);
  if ( v8 < 0 || *(_WORD *)pvar == 31 && (v8 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], (LPCLSID)v7 + 10), v8 < 0) )
  {
LABEL_67:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
    goto LABEL_36;
  }
  PropVariantClear((PROPVARIANT *)pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v7 + 24)
                                                                                             + 24LL))(
          *((_QWORD *)v7 + 24),
          0LL,
          3624140800LL,
          *((_QWORD *)v7 + 56) / 2LL,
          0LL,
          *((_QWORD *)v7 + 14),
          (__int64)v7 + 160);
  v8 = v19;
  if ( v19 == -2004287485 )
  {
LABEL_83:
    *v35 = 1;
    goto LABEL_36;
  }
  if ( v19 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 24) + 112LL))(
         *((_QWORD *)v7 + 24),
         &GUID_f294acfc_3146_4483_a7bf_addca7c260e2,
         (__int64)v7 + 200);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 24) + 112LL))(
         *((_QWORD *)v7 + 24),
         &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
         (__int64)v7 + 208);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 24) + 32LL))(
         *((_QWORD *)v7 + 24),
         (__int64)v7 + 256);
  if ( v8 < 0 )
    goto LABEL_36;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v7 + 26) + 24LL))(
         *((_QWORD *)v7 + 26),
         (__int64)v7 + 264);
  if ( v8 < 0 )
    goto LABEL_36;
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 18);
      WPP_SF_di(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        *((_DWORD *)v7 + 34));
      v20 = WPP_GLOBAL_Control;
    }
    if ( v20 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v20 + 7) & 0x800000) != 0
      && *((_BYTE *)v20 + 25) >= 4u )
    {
      ppv = (LPVOID *)*((_QWORD *)v7 + 33);
      WPP_SF_di(
        *((_QWORD *)v20 + 2),
        0x12u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        *((_DWORD *)v7 + 64));
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)v7 + 24) + 112LL))(
         *((_QWORD *)v7 + 24),
         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
         (__int64)v7 + 232);
  if ( v8 < 0 )
    goto LABEL_36;
  ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>(
    &v33,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v7 + 29));
  v32 = 0LL;
  memset(pvar, 0, 24);
  v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v33 + 168LL))(v33, &v32);
  if ( v8 < 0
    || (strcpy(pvar, "\v"),
        *(_WORD *)&pvar[8] = -1,
        v8 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 48LL))(
               v32,
               &PKEY_AudioSession_IsCaptureMonitorSession,
               pvar),
        v8 < 0)
    || (memset(pvar, 0, 24),
        *(_WORD *)pvar = 31,
        *(_QWORD *)&pvar[8] = *((_QWORD *)v7 + 10),
        v8 = (*(__int64 (__fastcall **)(LPVOID, void *, _BYTE *))(*(_QWORD *)v32 + 48LL))(
               v32,
               &PKEY_AudioSession_CaptureMonitorEndpointId,
               pvar),
        v8 < 0) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    goto LABEL_36;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
  v21 = (struct IMMDevice *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v21;
  if ( v21 )
  {
    v21->lpVtbl = (struct IMMDeviceVtbl *)&CMonitor::CMonitorNotification::`vftable';
    v21[1].lpVtbl = (struct IMMDeviceVtbl *)v7;
    LODWORD(v21[2].lpVtbl) = 0;
    HIDWORD(v21[2].lpVtbl) = 1;
  }
  else
  {
    v21 = 0LL;
  }
  ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
    (CMonitor::CMonitorNotification **)v7 + 30,
    (CMonitor::CMonitorNotification *)v21);
  if ( !*((_QWORD *)v7 + 30) )
  {
LABEL_74:
    v8 = -2147024882;
    goto LABEL_36;
  }
  v8 = CMonitor::SetSessionTitleAndIcon(v7, v37);
  if ( v8 < 0 )
    goto LABEL_36;
  ATL::CEvent::Create((CMonitor *)((char *)v7 + 128), v22);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 11) + 104LL))(
         *((_QWORD *)v7 + 11),
         *((_QWORD *)v7 + 16));
  if ( v8 < 0 )
    goto LABEL_36;
  try
  {
    ATL::CEvent::Create((CMonitor *)((char *)v7 + 248), v23);
  }
  catch ( ATL::CAtlException *v44 )
  {
    v30 = v44;
    if ( *(_DWORD *)v44 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v32) = *(_DWORD *)v30;
    v8 = (int)v32;
    v7 = v34;
    if ( (int)v32 < 0 )
      goto LABEL_36;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 24) + 104LL))(
         *((_QWORD *)v7 + 24),
         *((_QWORD *)v7 + 31));
  if ( v8 < 0 )
    goto LABEL_36;
  v24 = *((_QWORD *)v7 + 14);
  v25 = *(unsigned __int16 *)(v24 + 2) * (*(unsigned __int16 *)(v24 + 14) >> 3);
  *((_QWORD *)v7 + 57) = v25;
  v26 = (__int64)((unsigned __int128)((__int64)(*((_QWORD *)v7 + 56) * *(unsigned int *)(v24 + 4))
                                    * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  v27 = (struct _SECURITY_ATTRIBUTES *)((v26 >> 63) + v26);
  *((_QWORD *)v7 + 58) = (_QWORD)v27 * v25;
  ATL::CEvent::Create((CMonitor *)((char *)v7 + 304), v27);
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)CMonitor::CaptureMonitorThreadWrapper,
             v7,
             0,
             (LPDWORD)v7 + 74);
  *((_QWORD *)v7 + 36) = Thread;
  if ( !Thread )
  {
    v29 = GetLastError();
    v8 = v29;
    if ( v29 > 0 )
      v8 = (unsigned __int16)v29 | 0x80070000;
LABEL_114:
    if ( v8 >= 0 )
      goto LABEL_41;
    goto LABEL_36;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 15) + 80LL))(
         *((_QWORD *)v7 + 15),
         *((_QWORD *)v7 + 22));
  if ( v8 < 0
    || (v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 29) + 80LL))(
               *((_QWORD *)v7 + 29),
               *((_QWORD *)v7 + 30)),
        v8 < 0) )
  {
LABEL_36:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LODWORD(ppv) = v8;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        v7,
        ppv);
    }
    *((_BYTE *)v7 + 60) = 1;
    *((_DWORD *)v43 + 14) = *v35 ? 7 : 0;
    goto LABEL_41;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
  }
  *((_DWORD *)v7 + 14) = 2;
  *((_BYTE *)v7 + 60) = 0;
LABEL_41:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
  return (unsigned int)v8;
}
