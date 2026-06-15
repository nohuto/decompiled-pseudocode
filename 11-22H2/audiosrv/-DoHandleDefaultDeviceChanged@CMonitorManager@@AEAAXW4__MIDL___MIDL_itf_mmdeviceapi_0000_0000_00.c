/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007190 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x180004DA4 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x180006F74 (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x180008074 (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_SS @ 0x1800E6B84 (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B780 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012C274 (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D08C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D1C4 (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18012EAE0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(
        unsigned __int16 **this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int16 *v8; // rax
  unsigned __int64 i; // rbx
  int v10; // ebx
  unsigned int v11; // ebx
  CMonitorManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  void *v15; // rcx
  PVOID *v16; // rsi
  PVOID v17; // rcx
  _QWORD *Next; // rax
  CAudioSessionManager *v19; // rcx
  _QWORD *v20; // rbx
  _QWORD *v21; // r9
  bool v22; // zf
  int MonitorForCaptureDeviceIfAppropriate; // eax
  _QWORD *v24; // rsi
  _QWORD *v25; // [rsp+30h] [rbp-B8h] BYREF
  struct IMMDevice *v26; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-A0h] BYREF
  struct IMMDevice *v29; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v31; // [rsp+60h] [rbp-88h]
  unsigned int v32; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v33; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-70h]
  __int64 v35; // [rsp+80h] [rbp-68h]
  int v36; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v37; // [rsp+90h] [rbp-58h] BYREF
  char v38; // [rsp+98h] [rbp-50h]
  PVOID v39; // [rsp+F0h] [rbp+8h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v40; // [rsp+F8h] [rbp+10h]
  const unsigned __int16 *v41; // [rsp+100h] [rbp+18h]
  __int64 v42; // [rsp+108h] [rbp+20h] BYREF

  v41 = a3;
  v40 = a2;
  v39 = this;
  v37 = (LPCRITICAL_SECTION)(this + 2);
  v38 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v37);
  if ( *((_DWORD *)this + 14) != 1 )
    goto LABEL_20;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 9);
  v31 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v27 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v8 = this[14];
  pv = v8;
  while ( v8 )
  {
    Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                       v5,
                       &pv);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v25, *Next);
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v20 = v25;
    }
    else
    {
      v20 = v25;
      v21 = v25 + 16;
      if ( v25[19] >= 8uLL )
        v21 = (_QWORD *)*v21;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30,
        (unsigned int)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        (_DWORD)v21,
        *(_QWORD *)(v25[25] + 80LL));
      v19 = WPP_GLOBAL_Control;
    }
    if ( a2 )
    {
      if ( a2 != eCapture )
        goto LABEL_63;
      v22 = v20[9] == 0LL;
    }
    else
    {
      v22 = v20[13] == 0LL;
    }
    if ( v22 )
    {
      if ( v19 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x800000) != 0
        && *((_BYTE *)v19 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v19 + 2), 31LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      }
      ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
        &v33,
        v20);
      v6 = v33;
      v7 = v34;
    }
LABEL_63:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    v8 = (unsigned __int16 *)pv;
  }
  for ( i = 0LL; i < v7; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v39, v6[i]);
    v42 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
    }
    if ( *((_BYTE *)v39 + 49) )
      CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(v39);
    else
      CMonitorManager::RemoveMonitor(
        (CMonitorManager *)this,
        (const struct CMonitorManager::CaptureMonitor *const)v39,
        1);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
  }
  v10 = (*(__int64 (__fastcall **)(unsigned __int16 *, __int64, __int64, __int64 *))(*(_QWORD *)this[8] + 24LL))(
          this[8],
          2LL,
          1LL,
          &v27);
  if ( v10 < 0
    || (v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v32), v10 < 0) )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>((void **)&v33);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v29);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    goto LABEL_16;
  }
  v11 = 0;
  while ( 2 )
  {
    if ( v11 < v32 )
    {
      v26 = 0LL;
      v25 = 0LL;
      pv = 0LL;
      LOBYTE(v39) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v27 + 32LL))(v27, v11, &v26) >= 0
        && ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD **))v26->lpVtbl->QueryInterface)(
             v26,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v25) >= 0
        && (*(int (__fastcall **)(_QWORD *, __int64 *))(*v25 + 24LL))(v25, &v42) >= 0 )
      {
        v13 = v42;
        if ( (_DWORD)v42 )
          goto LABEL_29;
        v14 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate((CMonitorManager *)this, v26, this[42]);
        if ( v14 >= 0 )
        {
          v13 = v42;
LABEL_29:
          if ( v13 == 1 )
          {
            if ( CMonitor::IsCaptureMonitorEnabled(v26, (unsigned __int16 **)&pv, (bool *)&v39) && (_BYTE)v39 )
              goto LABEL_81;
            v13 = v42;
          }
          if ( v13 || !CMonitorManager::IsRenderMirrorEnabled((CMonitorManager *)this, v26, (unsigned __int16 **)&pv) )
          {
LABEL_32:
            v15 = pv;
LABEL_33:
            CoTaskMemFree(v15);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
            ++v11;
            continue;
          }
LABEL_81:
          MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
                                                   (CMonitorManager *)this,
                                                   v26);
          if ( MonitorForCaptureDeviceIfAppropriate < 0
            && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              34LL,
              &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
              (unsigned int)MonitorForCaptureDeviceIfAppropriate);
          }
          goto LABEL_32;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            33LL,
            &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            (unsigned int)v14);
        }
      }
      v15 = 0LL;
      goto LABEL_33;
    }
    break;
  }
  v10 = (*(__int64 (__fastcall **)(unsigned __int16 *, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)this[8] + 40LL))(
          this[8],
          v41,
          &v29);
  if ( v10 >= 0 )
  {
    if ( v40 == eRender && !CMonitorManager::IsMonitorMirrorEligible(v12, v29) )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v39,
        v41,
        -1LL);
      v16 = (PVOID *)(this + 42);
      if ( v16 == &v39 )
      {
        v17 = v39;
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v16,
          v39);
        v17 = 0LL;
      }
      if ( v17 )
        CoTaskMemFree(v17);
      if ( !*v16 )
        v10 = -2147024882;
    }
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>((void **)&v33);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v29);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    if ( v31 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v10 < 0 )
      goto LABEL_18;
  }
  else
  {
    if ( v6 )
    {
      if ( v7 )
      {
        v24 = v6;
        do
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v24++);
          --v7;
        }
        while ( v7 );
      }
      free(v6);
    }
    if ( v29 )
      ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_16:
    if ( v31 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_18:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        (unsigned int)v10);
    }
  }
LABEL_20:
  if ( v38 )
    LeaveCriticalSection(v37);
}
