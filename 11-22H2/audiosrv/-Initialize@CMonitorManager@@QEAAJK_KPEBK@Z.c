/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005A168 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x18005A2C0 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18005B760 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x18005C394 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800E4308 (WPP_SF_qq.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B780 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012C374 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18012C3A8 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C5B4 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x18012EA70 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18012F52C (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F5E8 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180131DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801322E4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CMonitorManager::Initialize(CMonitorManager *this, int a2, __int64 a3, const unsigned int *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const unsigned int *v7; // r9
  int restarted; // edi
  struct IUnknown **v9; // rbx
  struct IUnknown *v10; // rcx
  unsigned int i; // r12d
  int v12; // eax
  void *v13; // rcx
  _QWORD *v14; // r12
  __int64 v16; // rcx
  _QWORD *v17; // rax
  CMonitorManager::CaptureMonitor *v18; // rbx
  struct IMMDevice *v19; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int v21; // eax
  CAudioSessionManager *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  const WCHAR *v25; // r8
  int v26; // edi
  __int64 v27; // rbx
  bool v28; // di
  CMonitor *v29; // rcx
  __int64 v30; // rdx
  int ppv; // [rsp+20h] [rbp-E8h]
  struct IMMDevice *v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v34; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  struct IUnknown *v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-90h] BYREF
  char v42; // [rsp+80h] [rbp-88h]
  _DWORD *v43; // [rsp+88h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-78h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-68h]
  __int128 v46; // [rsp+A8h] [rbp-60h]
  int v47; // [rsp+B8h] [rbp-50h]
  CMonitorManager::CaptureMonitor *v48; // [rsp+110h] [rbp+8h] BYREF
  int v49; // [rsp+118h] [rbp+10h] BYREF
  __int64 v50; // [rsp+120h] [rbp+18h]
  const unsigned int *v51; // [rsp+128h] [rbp+20h] BYREF

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v48 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
  }
  v39 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 10;
  v38 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v43 = (_DWORD *)((char *)this + 56);
  if ( !*((_DWORD *)this + 14) || *((_DWORD *)this + 14) == 3 )
  {
    CMonitorManager::InitializeRegistryWatcher(this);
    restarted = CMonitorManager::InitializeMonitorRestartTimer((char *)this, v5, v6, v7);
    if ( restarted < 0 )
      goto LABEL_33;
    v9 = (struct IUnknown **)((char *)this + 64);
    restarted = CoCreateInstance(
                  &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                  0LL,
                  0x17u,
                  &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                  (LPVOID *)this + 8);
    if ( restarted < 0 )
      goto LABEL_33;
    v10 = v38;
    if ( v38 != *v9 )
    {
      ATL::AtlComQIPtrAssign(&v38, *v9, &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0);
      v10 = v38;
    }
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[3].Release)(v10, 1LL);
    restarted = ((__int64 (__fastcall *)(struct IUnknown *, CMonitorManager *))(*v9)->lpVtbl[2].QueryInterface)(
                  *v9,
                  this);
    if ( restarted < 0 )
      goto LABEL_33;
    restarted = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, __int64 *))(*v9)->lpVtbl[1].QueryInterface)(
                  *v9,
                  2LL,
                  1LL,
                  &v39);
    if ( restarted < 0 )
      goto LABEL_33;
    restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 24LL))(v39, &v40);
    if ( restarted < 0 )
      goto LABEL_33;
    for ( i = 0; ; ++i )
    {
      LODWORD(v51) = i;
      if ( i >= v40 )
      {
        *v43 = 1;
        v51 = (const unsigned int *)((char *)this + 72);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
        restarted = 0;
        v14 = (_QWORD *)v44;
        while ( v14 )
        {
          v30 = v14[2];
          v14 = (_QWORD *)*v14;
          ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
            (char *)this + 112,
            v30);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
        goto LABEL_26;
      }
      v32 = 0LL;
      v36 = 0LL;
      pv = 0LL;
      LOBYTE(v49) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v39 + 32LL))(v39, i, &v32) >= 0
        && ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v32->lpVtbl->QueryInterface)(
             v32,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v36) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 24LL))(v36, &v37) >= 0 )
      {
        break;
      }
      v13 = 0LL;
LABEL_22:
      CoTaskMemFree(v13);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v36);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
    }
    v12 = v37;
    if ( v37 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v32, (unsigned __int16 **)&pv, (bool *)&v49) )
        goto LABEL_43;
      v12 = v37;
    }
    if ( v12 || !CMonitorManager::IsRenderMirrorEnabled(this, v32, (unsigned __int16 **)&pv) )
    {
LABEL_21:
      v13 = pv;
      goto LABEL_22;
    }
LABEL_43:
    v33 = 0LL;
    v34 = 0LL;
    v19 = v32;
    GetId = v32->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v34,
      0LL);
    v21 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(v19, &v34);
    if ( v21 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      }
      v25 = &String2;
      if ( !(_BYTE)v49 )
        v25 = (const WCHAR *)pv;
      LOBYTE(ppv) = 0;
      v26 = CMonitorManager::CreateMonitor(this, v34, v25, 0LL, ppv, &v33);
      if ( v26 >= 0 )
      {
        if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
          v27 = v33;
        }
        else
        {
          v27 = v33;
          WPP_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            v33,
            *(_QWORD *)(v33 + 200));
        }
        v28 = v26 == 0;
        LOBYTE(v49) = v28;
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v44,
          v27);
        v29 = *(CMonitor **)(v27 + 200);
        if ( v28 )
          CMonitor::Start(v29);
        else
          CMonitor::Terminate(v29, 1, 0LL);
        goto LABEL_50;
      }
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v23 = 13LL;
        v24 = (unsigned int)v26;
        goto LABEL_48;
      }
    }
    else
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v23 = 11LL;
        v24 = (unsigned int)v21;
LABEL_48:
        WPP_SF_d(*((_QWORD *)v22 + 2), v23, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v24);
      }
    }
LABEL_50:
    if ( v34 )
      CoTaskMemFree(v34);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    goto LABEL_21;
  }
  restarted = -2147024809;
LABEL_33:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (unsigned int)restarted);
  }
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v16 + 56LL))(v16, this);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 8);
  }
  while ( v45 )
  {
    v17 = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                      &v44,
                      &v51);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v48, *v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v51);
    v18 = v48;
    CMonitor::StopIfRunning(*((CMonitor **)v48 + 25));
    CMonitorManager::CaptureMonitor::UninitializeSynchronously(v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v48);
  }
  CMonitorManager::CleanupMonitorRestartTimer(this);
LABEL_26:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v44);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v39);
  return (unsigned int)restarted;
}
