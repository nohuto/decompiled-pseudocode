/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18011AAF8
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011B900 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18003D570 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800518C8 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_SS @ 0x1800DDE2C (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180118E80 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x1801193D8 (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180119B3C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011A114 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x18011B25C (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18011B7C0 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011B92C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18011CA20 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011E8A0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180121490 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        char *a3)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r12d
  CMonitorManager *v4; // rsi
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 *Next; // rax
  CEndpointStoreCache *v8; // rcx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  bool v11; // zf
  unsigned __int64 i; // rbx
  int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // rcx
  int MonitorForCaptureDeviceIfAppropriate; // eax
  CMonitorManager *v19; // rcx
  const char *v20; // r9
  void **v21; // rsi
  struct IMMDevice *v22; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 *v24; // [rsp+40h] [rbp-A8h] BYREF
  struct IMMDevice *v25; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h] BYREF
  char v28; // [rsp+60h] [rbp-88h]
  unsigned int v29; // [rsp+68h] [rbp-80h] BYREF
  __int64 v30; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-70h]
  __int64 v32; // [rsp+80h] [rbp-68h]
  int v33; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v34; // [rsp+90h] [rbp-58h] BYREF
  char v35; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v36; // [rsp+A0h] [rbp-48h] BYREF
  PVOID pv; // [rsp+F0h] [rbp+8h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v38; // [rsp+F8h] [rbp+10h]
  char *v39; // [rsp+100h] [rbp+18h]
  __int64 v40; // [rsp+108h] [rbp+20h] BYREF

  v39 = a3;
  v38 = a2;
  pv = this;
  v3 = a2;
  v4 = this;
  v34 = (LPCRITICAL_SECTION)((char *)this + 16);
  v35 = 0;
  ATL::CCritSecLock::Lock(&v34);
  if ( *((_DWORD *)v4 + 14) != 1 )
    goto LABEL_75;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 72);
  v28 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v23 = 0LL;
  v25 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v6 = (unsigned __int16 *)*((_QWORD *)v4 + 14);
  v24 = v6;
  while ( v6 )
  {
    Next = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                        v5,
                        &v24);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v40, *Next);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CEndpointStoreCache *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v9 = v40;
    }
    else
    {
      v9 = v40;
      v10 = (const wchar_t *)(v40 + 128);
      if ( *(_QWORD *)(v40 + 152) >= 8uLL )
        v10 = *(const wchar_t **)v10;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v10,
        *(_QWORD *)(*(_QWORD *)(v40 + 200) + 80LL));
      v8 = WPP_GLOBAL_Control;
    }
    if ( v3 )
    {
      if ( v3 != eCapture )
        goto LABEL_20;
      v11 = *(_QWORD *)(v9 + 72) == 0LL;
    }
    else
    {
      v11 = *(_QWORD *)(v9 + 104) == 0LL;
    }
    if ( v11 )
    {
      if ( v8 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x800000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v8 + 2), 0x1Fu, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      }
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v30,
          v9);
      }
      catch ( ATL::CAtlException *v36 )
      {
        if ( *(_DWORD *)v36 == -1073741571 )
          _o__resetstkoflw();
        v4 = (CMonitorManager *)pv;
        v3 = v38;
      }
    }
LABEL_20:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
    v6 = v24;
  }
  for ( i = 0LL; i < v31; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      &pv,
      *(_QWORD *)(v30 + 8 * i));
    v40 = 0LL;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
    }
    if ( *((_BYTE *)pv + 49) )
      CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(pv);
    else
      CMonitorManager::RemoveMonitor(v4, (const struct CMonitorManager::CaptureMonitor *const)pv, 1);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v4 + 8) + 24LL))(
          *((_QWORD *)v4 + 8),
          2LL,
          1LL,
          &v23);
  if ( v13 < 0 )
    goto LABEL_32;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v29);
  if ( v13 < 0 )
    goto LABEL_32;
  v14 = 0;
  while ( 2 )
  {
    if ( v14 < v29 )
    {
      v22 = 0LL;
      v26 = 0LL;
      v24 = 0LL;
      LOBYTE(pv) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v23 + 32LL))(v23, v14, &v22) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v22->lpVtbl->QueryInterface)(
             v22,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v26) < 0
        || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL))(v26, &v40) < 0 )
      {
        goto LABEL_46;
      }
      v15 = v40;
      if ( !(_DWORD)v40 )
      {
        v16 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(v4, v22, *((unsigned __int16 **)v4 + 42));
        if ( v16 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x21u,
              (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
              v16);
          }
LABEL_46:
          v17 = 0LL;
LABEL_47:
          CoTaskMemFree(v17);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
          ++v14;
          continue;
        }
        v15 = v40;
      }
      if ( v15 == 1 )
      {
        if ( !CMonitor::IsCaptureMonitorEnabled(v22, &v24, (bool *)&pv) || !(_BYTE)pv )
        {
          v15 = v40;
          goto LABEL_53;
        }
LABEL_55:
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v4, v22);
        if ( MonitorForCaptureDeviceIfAppropriate < 0
          && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            MonitorForCaptureDeviceIfAppropriate);
        }
      }
      else
      {
LABEL_53:
        if ( !v15 && CMonitorManager::IsRenderMirrorEnabled(v4, v22, &v24) )
          goto LABEL_55;
      }
      v17 = v24;
      goto LABEL_47;
    }
    break;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**((_QWORD **)v4 + 8) + 40LL))(
          *((_QWORD *)v4 + 8),
          v39,
          &v25);
  if ( v13 >= 0 )
  {
    if ( v3 == eRender && !CMonitorManager::IsMonitorMirrorEligible(v19, v25) )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &pv,
        v39,
        0xFFFFFFFFFFFFFFFFuLL,
        v20);
      v21 = (void **)((char *)v4 + 336);
      if ( v21 != &pv )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v21,
          pv);
        pv = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
      if ( !*v21 )
        v13 = -2147024882;
    }
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>((__int64)&v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    if ( v28 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v13 < 0 )
      goto LABEL_71;
    goto LABEL_75;
  }
LABEL_32:
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>((__int64)&v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  if ( v28 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_71:
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v13);
  }
LABEL_75:
  if ( v35 )
    LeaveCriticalSection(v34);
}
