/*
 * XREFs of ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180008330
 * Callers:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180006580 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180006B60 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18012E260 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800E6B84 (WPP_SF_SS.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18012B780 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D08C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown *__fastcall CMonitorManager::FindMonitor(__int64 a1, struct IUnknown *a2, __int64 a3)
{
  CAudioSessionManager *v6; // rcx
  __int64 v7; // rax
  _QWORD *Next; // rax
  struct IUnknown *v10; // rbx
  struct IUnknown *v11; // r9
  struct IUnknown *v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v16; // [rsp+78h] [rbp+28h] BYREF

  v16 = a2;
  a2->lpVtbl = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, a3);
  }
  v7 = *(_QWORD *)(a1 + 112);
  v15 = v7;
  while ( v7 )
  {
    Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                       v6,
                       &v15);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v16, *Next);
    v10 = v16;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v11 = v16 + 16;
      if ( v16[19].lpVtbl >= (struct IUnknownVtbl *)8 )
        v11 = (struct IUnknown *)v11->lpVtbl;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        83,
        (unsigned int)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        (_DWORD)v11,
        (__int64)v16[25].lpVtbl[3].AddRef);
    }
    v12 = v10 + 16;
    if ( v10[19].lpVtbl >= (struct IUnknownVtbl *)8 )
      v12 = (struct IUnknown *)v12->lpVtbl;
    if ( !(unsigned int)_o__wcsicmp(v12, a3) )
    {
      if ( (struct IUnknown *)a2->lpVtbl != v10 )
        ATL::AtlComPtrAssign((struct IUnknown **)a2, v10);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          84LL,
          &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          a2->lpVtbl);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    v7 = v15;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
