/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012C7F0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180008330 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800E6B84 (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012C374 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C5B4 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F590 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180131DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801322E4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // eax
  CAudioSessionManager *v8; // rcx
  unsigned __int16 *v9; // r8
  CAudioSessionManager *v10; // rcx
  CMonitorManager::CaptureMonitor *v11; // rbx
  bool v12; // r12
  CMonitor *v13; // rcx
  CAudioSessionManager *v14; // rcx
  ULONG (__stdcall **p_Release)(IUnknown *); // rax
  ATL::CAtlException *v16; // rbx
  LPVOID pv; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-70h] BYREF
  CMonitorManager::CaptureMonitor *v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+48h] [rbp-60h] BYREF
  struct IUnknown v21; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v22; // [rsp+58h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-48h] BYREF
  char v24; // [rsp+68h] [rbp-40h]
  LPCRITICAL_SECTION v25; // [rsp+70h] [rbp-38h] BYREF
  char v26; // [rsp+78h] [rbp-30h]
  bool v27; // [rsp+B0h] [rbp+8h] BYREF
  int v28; // [rsp+C0h] [rbp+18h] BYREF
  int v29; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  v20 = 0LL;
  v18 = 0LL;
  v27 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    goto LABEL_21;
  }
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v20);
  if ( v5 < 0 )
    goto LABEL_14;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v28);
  if ( v5 < 0 )
    goto LABEL_14;
  v6 = v28;
  if ( v28 == 1 )
  {
    if ( CMonitor::IsCaptureMonitorEnabled(a2, &v18, &v27) )
      goto LABEL_12;
    v6 = v28;
  }
  if ( v6 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, &v18) )
    goto LABEL_18;
LABEL_12:
  pv = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
  if ( v5 < 0 )
  {
    CoTaskMemFree(pv);
LABEL_14:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Cu,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v5);
    }
    goto LABEL_18;
  }
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v18);
      v8 = WPP_GLOBAL_Control;
    }
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v8 + 7) & 0x800000) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v8 + 2), 0x45u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
    }
  }
  v19 = 0LL;
  v9 = (unsigned __int16 *)&String2;
  if ( !v27 )
    v9 = v18;
  v5 = CMonitorManager::CreateMonitor((__int64)this, pv, v9, 0, 0, &v19);
  if ( v5 < 0 )
    goto LABEL_69;
  v25 = (LPCRITICAL_SECTION)((char *)this + 72);
  v26 = 0;
  ATL::CCritSecLock::Lock(&v25);
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
  {
    v11 = v19;
  }
  else
  {
    v11 = v19;
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x46u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v19);
    v10 = WPP_GLOBAL_Control;
  }
  v12 = v5 == 0;
  v27 = v5 == 0;
  if ( v10 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v10 + 7) & 0x800000) != 0
    && *((_BYTE *)v10 + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)v10 + 2),
      0x47u,
      (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (const wchar_t *)pv);
  }
  CMonitorManager::FindMonitor((__int64)this, &v21, (__int64)pv);
  if ( v21.lpVtbl )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        p_Release = &v21.lpVtbl[6].Release;
        if ( (char *)v21.lpVtbl[7].Release >= (char *)8 )
          p_Release = (ULONG (__stdcall **)(IUnknown *))*p_Release;
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Au,
          (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          (const wchar_t *)pv,
          (__int64)p_Release);
        v14 = WPP_GLOBAL_Control;
      }
      if ( v14 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v14 + 7) & 0x800000) != 0
        && *((_BYTE *)v14 + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)v14 + 2),
          0x4Bu,
          (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          *((_QWORD *)v11 + 25));
      }
    }
    CMonitorManager::CaptureMonitor::Uninitialize(v11);
    goto LABEL_67;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      LOWORD(v21.lpVtbl) + 72,
      (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (const wchar_t *)pv);
  }
  try
  {
    v5 = 0;
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
      (__int64 *)this + 14,
      (__int64)v11);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v16 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v29 = *(_DWORD *)v16;
    v5 = v29;
    if ( v29 < 0 )
      goto LABEL_67;
    v11 = v19;
    v12 = v27;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x49u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v18);
  }
  v13 = (CMonitor *)*((_QWORD *)v11 + 25);
  if ( v12 )
    CMonitor::Start(v13);
  else
    CMonitor::Terminate(v13, 1, 0LL);
LABEL_67:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  if ( v26 )
    LeaveCriticalSection(v25);
LABEL_69:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  CoTaskMemFree(pv);
  if ( v5 < 0 )
    goto LABEL_14;
LABEL_18:
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v18);
  v4 = v5;
LABEL_21:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
  return v4;
}
